/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/s/refine_collection_shard_key_coordinator_document_gen.h --output build/opt/mongo/db/s/refine_collection_shard_key_coordinator_document_gen.cpp src/mongo/db/s/refine_collection_shard_key_coordinator_document.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/db/s/refine_collection_shard_key_coordinator_document_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {

constexpr StringData RefineCollectionShardKeyCoordinatorDocument::kRefineCollectionShardKeyRequestFieldName;
constexpr StringData RefineCollectionShardKeyCoordinatorDocument::kShardingDDLCoordinatorMetadataFieldName;
constexpr StringData RefineCollectionShardKeyCoordinatorDocument::kDatabaseVersionFieldName;
constexpr StringData RefineCollectionShardKeyCoordinatorDocument::kForwardableOpMetadataFieldName;
constexpr StringData RefineCollectionShardKeyCoordinatorDocument::kIdFieldName;
constexpr StringData RefineCollectionShardKeyCoordinatorDocument::kNewShardKeyFieldName;
constexpr StringData RefineCollectionShardKeyCoordinatorDocument::kRecoveredFromDiskFieldName;
constexpr StringData RefineCollectionShardKeyCoordinatorDocument::kSessionFieldName;


RefineCollectionShardKeyCoordinatorDocument::RefineCollectionShardKeyCoordinatorDocument()  {
    // Used for initialization only
}


RefineCollectionShardKeyCoordinatorDocument RefineCollectionShardKeyCoordinatorDocument::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<RefineCollectionShardKeyCoordinatorDocument>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void RefineCollectionShardKeyCoordinatorDocument::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<8> usedFields;
    const size_t kIdBit = 0;
    const size_t kRecoveredFromDiskBit = 1;
    const size_t kForwardableOpMetadataBit = 2;
    const size_t kDatabaseVersionBit = 3;
    const size_t kSessionBit = 4;
    const size_t kNewShardKeyBit = 5;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIdBit);

                IDLParserErrorContext tempContext(kIdFieldName, &ctxt);
                const auto localObject = element.Obj();
                _shardingDDLCoordinatorMetadata.setId(mongo::ShardingDDLCoordinatorId::parse(tempContext, localObject));
            }
        }
        else if (fieldName == kRecoveredFromDiskFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kRecoveredFromDiskBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kRecoveredFromDiskBit);

                _shardingDDLCoordinatorMetadata.setRecoveredFromDisk(element.boolean());
            }
        }
        else if (fieldName == kForwardableOpMetadataFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kForwardableOpMetadataBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kForwardableOpMetadataBit);

                const BSONObj localObject = element.Obj();
                _shardingDDLCoordinatorMetadata.setForwardableOpMetadata(boost::optional<mongo::ForwardableOperationMetadata>(ForwardableOperationMetadata(localObject)));
            }
        }
        else if (fieldName == kDatabaseVersionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kDatabaseVersionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDatabaseVersionBit);

                const BSONObj localObject = element.Obj();
                _shardingDDLCoordinatorMetadata.setDatabaseVersion(boost::optional<mongo::DatabaseVersion>(DatabaseVersion(localObject)));
            }
        }
        else if (fieldName == kSessionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kSessionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kSessionBit);

                IDLParserErrorContext tempContext(kSessionFieldName, &ctxt);
                const auto localObject = element.Obj();
                _shardingDDLCoordinatorMetadata.setSession(boost::optional<mongo::ShardingDDLSession>(mongo::ShardingDDLSession::parse(tempContext, localObject)));
            }
        }
        else if (fieldName == kNewShardKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kNewShardKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNewShardKeyBit);

                const BSONObj localObject = element.Obj();
                _refineCollectionShardKeyRequest.setNewShardKey(KeyPattern::fromBSON(localObject));
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kIdBit]) {
            ctxt.throwMissingField(kIdFieldName);
        }
        if (!usedFields[kRecoveredFromDiskBit]) {
            _shardingDDLCoordinatorMetadata.setRecoveredFromDisk(false);
        }
        if (!usedFields[kNewShardKeyBit]) {
            ctxt.throwMissingField(kNewShardKeyFieldName);
        }
    }

}


void RefineCollectionShardKeyCoordinatorDocument::serialize(BSONObjBuilder* builder) const {
    {
        _shardingDDLCoordinatorMetadata.serialize(builder);
    }

    {
        _refineCollectionShardKeyRequest.serialize(builder);
    }

}


BSONObj RefineCollectionShardKeyCoordinatorDocument::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

}  // namespace mongo
