/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/s/move_primary_coordinator_document_gen.h --output build/opt/mongo/db/s/move_primary_coordinator_document_gen.cpp src/mongo/db/s/move_primary_coordinator_document.idl
 */

#pragma once

#include <algorithm>
#include <boost/optional.hpp>
#include <cstdint>
#include <string>
#include <tuple>
#include <vector>

#include "mongo/base/data_range.h"
#include "mongo/base/string_data.h"
#include "mongo/bson/bsonobj.h"
#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/bson/simple_bsonobj_comparator.h"
#include "mongo/crypto/sha256_block.h"
#include "mongo/db/namespace_string.h"
#include "mongo/db/s/forwardable_operation_metadata.h"
#include "mongo/db/s/sharding_ddl_coordinator_gen.h"
#include "mongo/idl/basic_types.h"
#include "mongo/idl/basic_types_gen.h"
#include "mongo/idl/idl_parser.h"
#include "mongo/rpc/op_msg.h"
#include "mongo/s/database_version.h"
#include "mongo/s/shard_id.h"
#include "mongo/stdx/unordered_map.h"
#include "mongo/util/uuid.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {

/**
 * Object with neccessary fields to move a database between shards
 */
class MovePrimaryCoordinatorDocument {
public:
    static constexpr auto kShardingDDLCoordinatorMetadataFieldName = "ShardingDDLCoordinatorMetadata"_sd;
    static constexpr auto kDatabaseVersionFieldName = "databaseVersion"_sd;
    static constexpr auto kForwardableOpMetadataFieldName = "forwardableOpMetadata"_sd;
    static constexpr auto kIdFieldName = "_id"_sd;
    static constexpr auto kRecoveredFromDiskFieldName = "recoveredFromDisk"_sd;
    static constexpr auto kSessionFieldName = "session"_sd;
    static constexpr auto kToShardIdFieldName = "toShardId"_sd;

    MovePrimaryCoordinatorDocument();
    MovePrimaryCoordinatorDocument(mongo::ShardId toShardId);

    static MovePrimaryCoordinatorDocument parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * Commong metadata for all sharding DDL coordinator.
     */
    const mongo::ShardingDDLCoordinatorMetadata& getShardingDDLCoordinatorMetadata() const { return _shardingDDLCoordinatorMetadata; }
    mongo::ShardingDDLCoordinatorMetadata& getShardingDDLCoordinatorMetadata() { return _shardingDDLCoordinatorMetadata; }
    void setShardingDDLCoordinatorMetadata(mongo::ShardingDDLCoordinatorMetadata value) & {  _shardingDDLCoordinatorMetadata = std::move(value);  }

    const  mongo::ShardingDDLCoordinatorId& getId() const { return _shardingDDLCoordinatorMetadata.getId(); }
     bool getRecoveredFromDisk() const { return _shardingDDLCoordinatorMetadata.getRecoveredFromDisk(); }
    const  boost::optional<mongo::ForwardableOperationMetadata>& getForwardableOpMetadata() const { return _shardingDDLCoordinatorMetadata.getForwardableOpMetadata(); }
    const  boost::optional<mongo::DatabaseVersion>& getDatabaseVersion() const { return _shardingDDLCoordinatorMetadata.getDatabaseVersion(); }
    const  boost::optional<mongo::ShardingDDLSession>& getSession() const { return _shardingDDLCoordinatorMetadata.getSession(); }
    /**
     * Destination shard of the database
     */
    const mongo::ShardId& getToShardId() const { return _toShardId; }
    void setToShardId(mongo::ShardId value) & {  _toShardId = std::move(value); _hasToShardId = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::ShardingDDLCoordinatorMetadata _shardingDDLCoordinatorMetadata;
    mongo::ShardId _toShardId;
    bool _hasToShardId : 1;
};

}  // namespace mongo
