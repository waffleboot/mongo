/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/s/request_types/merge_chunk_request_gen.h --output build/opt/mongo/s/request_types/merge_chunk_request_gen.cpp src/mongo/s/request_types/merge_chunk_request.idl
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
#include "mongo/db/namespace_string.h"
#include "mongo/idl/basic_types.h"
#include "mongo/idl/basic_types_gen.h"
#include "mongo/idl/idl_parser.h"
#include "mongo/rpc/op_msg.h"
#include "mongo/s/catalog/type_chunk.h"
#include "mongo/s/chunk_version.h"
#include "mongo/s/request_types/merge_chunk_request_valid.h"
#include "mongo/s/shard_id.h"
#include "mongo/stdx/unordered_map.h"
#include "mongo/util/uuid.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {

/**
 * Response of the _configsvrCommitChunkMerge command.
 */
class ConfigSvrMergeResponse {
public:
    static constexpr auto kShardVersionFieldName = "shardVersion"_sd;

    ConfigSvrMergeResponse();
    ConfigSvrMergeResponse(mongo::ChunkVersion shardVersion);

    static ConfigSvrMergeResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * Latest version of the shard.
     */
    const mongo::ChunkVersion& getShardVersion() const { return _shardVersion; }
    void setShardVersion(mongo::ChunkVersion value) & {  _shardVersion = std::move(value); _hasShardVersion = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::ChunkVersion _shardVersion;
    bool _hasShardVersion : 1;
};

/**
 * The internal _configsvrCommitChunkMerge command on the config server.
 */
class ConfigSvrMergeChunk {
public:
    using Reply = mongo::ConfigSvrMergeResponse;
    static constexpr auto kCommandParameterFieldName = "_configsvrCommitChunkMerge"_sd;
    static constexpr auto kChunkBoundariesFieldName = "chunkBoundaries"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kEpochFieldName = "collEpoch"_sd;
    static constexpr auto kShardFieldName = "shard"_sd;
    static constexpr auto kValidAfterFieldName = "validAfter"_sd;
    static constexpr auto kWriteConcernFieldName = "writeConcern"_sd;
    static constexpr auto kCommandName = "_configsvrCommitChunkMerge"_sd;

    explicit ConfigSvrMergeChunk(mongo::NamespaceString commandParameter);
    explicit ConfigSvrMergeChunk(mongo::NamespaceString commandParameter, mongo::ShardId shard, mongo::OID epoch, std::vector<mongo::BSONObj> chunkBoundaries);

    static ConfigSvrMergeChunk parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static ConfigSvrMergeChunk parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const mongo::NamespaceString& getCommandParameter() const { return _commandParameter; }

    /**
     * String identifier for a shard's name
     */
    const mongo::ShardId& getShard() const { return _shard; }
    void setShard(mongo::ShardId value) & {  _shard = std::move(value); _hasShard = true; }

    /**
     * Uniquely identifies this instance of the collection, in case of drop/create or shard key refine.
     */
    const mongo::OID& getEpoch() const { return _epoch; }
    void setEpoch(mongo::OID value) & {  _epoch = std::move(value); _hasEpoch = true; }

    /**
     * Chunk bounds to merge.
     */
    const std::vector<mongo::BSONObj>& getChunkBoundaries() const& { return _chunkBoundaries; }
    void getChunkBoundaries() && = delete;
    void setChunkBoundaries(std::vector<mongo::BSONObj> value) & { validateChunkBoundaries(value); _chunkBoundaries = std::move(value); _hasChunkBoundaries = true; }

    /**
     * The time after which this chunk is at this shard.
     */
    const boost::optional<mongo::Timestamp>& getValidAfter() const& { return _validAfter; }
    void getValidAfter() && = delete;
    void setValidAfter(boost::optional<mongo::Timestamp> value) & {  _validAfter = std::move(value);  }

    /**
     * The level of write concern for the creation operation
     */
    const boost::optional<mongo::BSONObj>& getWriteConcern() const& { return _writeConcern; }
    void getWriteConcern() && = delete;
    void setWriteConcern(boost::optional<mongo::BSONObj> value) & {  _writeConcern = std::move(value);  }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    void validateChunkBoundaries(const std::vector<mongo::BSONObj>& value);
    void validateChunkBoundaries(IDLParserErrorContext& ctxt, const std::vector<mongo::BSONObj>& value);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    mongo::NamespaceString _commandParameter;

    mongo::ShardId _shard;
    mongo::OID _epoch;
    std::vector<mongo::BSONObj> _chunkBoundaries;
    boost::optional<mongo::Timestamp> _validAfter;
    boost::optional<mongo::BSONObj> _writeConcern;
    std::string _dbName;
    bool _hasShard : 1;
    bool _hasEpoch : 1;
    bool _hasChunkBoundaries : 1;
    bool _hasDbName : 1;
};

/**
 * The internal _configsvrCommitChunksMerge command on the config server.
 */
class ConfigSvrMergeChunks {
public:
    using Reply = mongo::ConfigSvrMergeResponse;
    static constexpr auto kCommandParameterFieldName = "_configsvrCommitChunksMerge"_sd;
    static constexpr auto kChunkRangeFieldName = "chunkRange"_sd;
    static constexpr auto kCollectionUUIDFieldName = "collUUID"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kShardFieldName = "shard"_sd;
    static constexpr auto kValidAfterFieldName = "validAfter"_sd;
    static constexpr auto kWriteConcernFieldName = "writeConcern"_sd;
    static constexpr auto kCommandName = "_configsvrCommitChunksMerge"_sd;

    explicit ConfigSvrMergeChunks(mongo::NamespaceString commandParameter);
    explicit ConfigSvrMergeChunks(mongo::NamespaceString commandParameter, mongo::ShardId shard, mongo::UUID collectionUUID, mongo::ChunkRange chunkRange);

    static ConfigSvrMergeChunks parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static ConfigSvrMergeChunks parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const mongo::NamespaceString& getCommandParameter() const { return _commandParameter; }

    /**
     * The id of the shard.
     */
    const mongo::ShardId& getShard() const { return _shard; }
    void setShard(mongo::ShardId value) & {  _shard = std::move(value); _hasShard = true; }

    /**
     * The UUID of the collection that the chunk belongs to.
     */
    const mongo::UUID& getCollectionUUID() const { return _collectionUUID; }
    void setCollectionUUID(mongo::UUID value) & {  _collectionUUID = std::move(value); _hasCollectionUUID = true; }

    /**
     * Chunk bounds to merge.
     */
    const mongo::ChunkRange& getChunkRange() const { return _chunkRange; }
    void setChunkRange(mongo::ChunkRange value) & {  _chunkRange = std::move(value); _hasChunkRange = true; }

    /**
     * The time after which this chunk is at this shard.
     */
    const boost::optional<mongo::Timestamp>& getValidAfter() const& { return _validAfter; }
    void getValidAfter() && = delete;
    void setValidAfter(boost::optional<mongo::Timestamp> value) & {  _validAfter = std::move(value);  }

    /**
     * The level of write concern for the creation operation.
     */
    const boost::optional<mongo::BSONObj>& getWriteConcern() const& { return _writeConcern; }
    void getWriteConcern() && = delete;
    void setWriteConcern(boost::optional<mongo::BSONObj> value) & {  _writeConcern = std::move(value);  }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    mongo::NamespaceString _commandParameter;

    mongo::ShardId _shard;
    mongo::UUID _collectionUUID;
    mongo::ChunkRange _chunkRange;
    boost::optional<mongo::Timestamp> _validAfter;
    boost::optional<mongo::BSONObj> _writeConcern;
    std::string _dbName;
    bool _hasShard : 1;
    bool _hasCollectionUUID : 1;
    bool _hasChunkRange : 1;
    bool _hasDbName : 1;
};

}  // namespace mongo
