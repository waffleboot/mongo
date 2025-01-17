/**
 *    Copyright (C) 2021-present MongoDB, Inc.
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the Server Side Public License, version 1,
 *    as published by MongoDB, Inc.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    Server Side Public License for more details.
 *
 *    You should have received a copy of the Server Side Public License
 *    along with this program. If not, see
 *    <http://www.mongodb.com/licensing/server-side-public-license>.
 *
 *    As a special exception, the copyright holders give permission to link the
 *    code of portions of this program with the OpenSSL library under certain
 *    conditions as described in each individual source file and distribute
 *    linked combinations including the program with the OpenSSL library. You
 *    must comply with the Server Side Public License in all respects for
 *    all of the code used other than as permitted herein. If you modify file(s)
 *    with this exception, you may extend this exception to your version of the
 *    file(s), but you are not obligated to do so. If you do not wish to do so,
 *    delete this exception statement from your version. If you delete this
 *    exception statement from all source files in the program, then also delete
 *    it in the license file.
 */

#define MONGO_LOGV2_DEFAULT_COMPONENT ::mongo::logv2::LogComponent::kDefault

#include "mongo/platform/basic.h"

#include "mongo/db/catalog/clustered_collection_util.h"

#include "mongo/db/namespace_string.h"
#include "mongo/logv2/log.h"
#include "mongo/util/represent_as.h"

namespace mongo {
namespace clustered_util {

static constexpr StringData kDefaultClusteredIndexName = "_id_"_sd;

void ensureClusteredIndexName(ClusteredIndexSpec& indexSpec) {
    if (!indexSpec.getName()) {
        auto clusterKey = indexSpec.getKey().firstElement().fieldNameStringData();
        if (clusterKey == "_id") {
            indexSpec.setName(kDefaultClusteredIndexName);
        } else {
            indexSpec.setName(StringData(clusterKey + "_1"));
        }
    }
}

ClusteredCollectionInfo makeCanonicalClusteredInfoForLegacyFormat() {
    auto indexSpec = ClusteredIndexSpec{BSON("_id" << 1), true /* unique */};
    indexSpec.setName(kDefaultClusteredIndexName);
    return ClusteredCollectionInfo(std::move(indexSpec), true /* legacy */);
}

ClusteredCollectionInfo makeDefaultClusteredIdIndex() {
    auto indexSpec = ClusteredIndexSpec{BSON("_id" << 1), true /* unique */};
    indexSpec.setName(kDefaultClusteredIndexName);
    return makeCanonicalClusteredInfo(indexSpec);
}

ClusteredCollectionInfo makeCanonicalClusteredInfo(ClusteredIndexSpec indexSpec) {
    ensureClusteredIndexName(indexSpec);
    return ClusteredCollectionInfo(std::move(indexSpec), false);
}

boost::optional<ClusteredCollectionInfo> parseClusteredInfo(const BSONElement& elem) {
    uassert(5979702,
            "'clusteredIndex' has to be a boolean or object.",
            elem.type() == mongo::Bool || elem.type() == mongo::Object);

    bool isLegacyFormat = elem.type() == mongo::Bool;
    if (isLegacyFormat) {
        // Legacy format implies the collection was created with format {clusteredIndex: <bool>}.
        // The legacy format is maintained for backward compatibility with time series buckets
        // collection creation.
        if (!elem.Bool()) {
            // clusteredIndex was specified as false.
            return boost::none;
        }
        return makeCanonicalClusteredInfoForLegacyFormat();
    }

    auto indexSpec = ClusteredIndexSpec::parse({"ClusteredUtil::parseClusteredInfo"}, elem.Obj());
    ensureClusteredIndexName(indexSpec);
    return makeCanonicalClusteredInfo(std::move(indexSpec));
}

boost::optional<ClusteredCollectionInfo> createClusteredInfoForNewCollection(
    const BSONObj& indexSpec) {
    if (!indexSpec["clustered"]) {
        return boost::none;
    }

    auto filteredIndexSpec = indexSpec.removeField("clustered"_sd);
    auto clusteredIndexSpec = ClusteredIndexSpec::parse(
        {"ClusteredUtil::createClusteredInfoForNewCollection"}, filteredIndexSpec);
    ensureClusteredIndexName(clusteredIndexSpec);
    return makeCanonicalClusteredInfo(std::move(clusteredIndexSpec));
};

bool requiresLegacyFormat(const NamespaceString& nss) {
    return nss.isTimeseriesBucketsCollection() || nss.isChangeStreamPreImagesCollection();
}

BSONObj formatClusterKeyForListIndexes(const ClusteredCollectionInfo& collInfo) {
    BSONObjBuilder bob;
    collInfo.getIndexSpec().serialize(&bob);
    bob.append("clustered", true);
    return bob.obj();
}


bool isClusteredOnId(const boost::optional<ClusteredCollectionInfo>& collInfo) {
    return clustered_util::matchesClusterKey(BSON("_id" << 1), collInfo);
}

bool matchesClusterKey(const BSONObj& obj,
                       const boost::optional<ClusteredCollectionInfo>& collInfo) {
    if (!collInfo) {
        return false;
    }

    const auto nFields = obj.nFields();
    invariant(nFields > 0);
    if (nFields > 1) {
        // Clustered key cannot be compound.
        return false;
    }
    return obj.firstElement().fieldNameStringData() ==
        collInfo->getIndexSpec().getKey().firstElement().fieldNameStringData();
}

Status checkSpecDoesNotConflictWithClusteredIndex(const BSONObj& indexSpec,
                                                  const ClusteredIndexSpec& clusteredIndexSpec) {
    auto name = indexSpec.getStringField("name");
    bool namesMatch = clusteredIndexSpec.getName().get() == name;

    auto key = indexSpec.getObjectField("key");
    bool keysMatch = clusteredIndexSpec.getKey().woCompare(key) == 0;

    if (!keysMatch && !namesMatch) {
        // The indexes don't conflict at all.
        return Status::OK();
    }

    if (namesMatch && !keysMatch) {
        // Prohibit creating an index with the same 'name' as the cluster key but different key
        // pattern.
        return Status(ErrorCodes::Error(6100906),
                      str::stream() << "Cannot create an index where the name matches the "
                                       "clusteredIndex but the key does not -"
                                    << " indexSpec: " << indexSpec
                                    << ", clusteredIndex: " << clusteredIndexSpec.toBSON());
    }

    // Users should be able to call createIndexes on the cluster key. If a name isn't specified, a
    // default one is generated. Silently ignore mismatched names.

    BSONElement vElt = indexSpec["v"];
    auto version = representAs<int>(vElt.number());
    if (clusteredIndexSpec.getV() != version) {
        return Status(ErrorCodes::Error(6100908),
                      "Cannot create an index with the same key pattern as the collection's "
                      "clusteredIndex but a different 'v' field");
    }

    if (indexSpec.hasField("unique") && indexSpec.getBoolField("unique") == false) {
        return Status(ErrorCodes::Error(6100909),
                      "Cannot create an index with the same key pattern as the collection's "
                      "clusteredIndex but a different 'unique' field");
    }
    return Status::OK();
};

StringData getClusterKeyFieldName(const ClusteredIndexSpec& indexSpec) {
    return indexSpec.getKey().firstElement().fieldNameStringData();
}

}  // namespace clustered_util
}  // namespace mongo
