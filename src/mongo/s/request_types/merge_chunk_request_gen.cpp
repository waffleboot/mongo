/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/s/request_types/merge_chunk_request_gen.h --output build/opt/mongo/s/request_types/merge_chunk_request_gen.cpp src/mongo/s/request_types/merge_chunk_request.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/s/request_types/merge_chunk_request_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {

constexpr StringData ConfigSvrMergeResponse::kShardVersionFieldName;


ConfigSvrMergeResponse::ConfigSvrMergeResponse() : _shardVersion(mongo::idl::preparsedValue<decltype(_shardVersion)>()), _hasShardVersion(false) {
    // Used for initialization only
}
ConfigSvrMergeResponse::ConfigSvrMergeResponse(mongo::ChunkVersion shardVersion) : _shardVersion(std::move(shardVersion)), _hasShardVersion(true) {
    // Used for initialization only
}


ConfigSvrMergeResponse ConfigSvrMergeResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<ConfigSvrMergeResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ConfigSvrMergeResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kShardVersionBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kShardVersionFieldName) {
            if (MONGO_unlikely(usedFields[kShardVersionBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kShardVersionBit);

            _hasShardVersion = true;
            _shardVersion = ChunkVersion::fromBSONArrayThrowing(element);
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kShardVersionBit]) {
            ctxt.throwMissingField(kShardVersionFieldName);
        }
    }

}


void ConfigSvrMergeResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasShardVersion);

    {
        _shardVersion.serializeToBSON(kShardVersionFieldName, builder);
    }

}


BSONObj ConfigSvrMergeResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData ConfigSvrMergeChunk::kCommandParameterFieldName;
constexpr StringData ConfigSvrMergeChunk::kChunkBoundariesFieldName;
constexpr StringData ConfigSvrMergeChunk::kDbNameFieldName;
constexpr StringData ConfigSvrMergeChunk::kEpochFieldName;
constexpr StringData ConfigSvrMergeChunk::kShardFieldName;
constexpr StringData ConfigSvrMergeChunk::kValidAfterFieldName;
constexpr StringData ConfigSvrMergeChunk::kWriteConcernFieldName;
constexpr StringData ConfigSvrMergeChunk::kCommandName;

const std::vector<StringData> ConfigSvrMergeChunk::_knownBSONFields {
    ConfigSvrMergeChunk::kChunkBoundariesFieldName,
    ConfigSvrMergeChunk::kEpochFieldName,
    ConfigSvrMergeChunk::kShardFieldName,
    ConfigSvrMergeChunk::kValidAfterFieldName,
    ConfigSvrMergeChunk::kWriteConcernFieldName,
    ConfigSvrMergeChunk::kCommandName,
};
const std::vector<StringData> ConfigSvrMergeChunk::_knownOP_MSGFields {
    ConfigSvrMergeChunk::kChunkBoundariesFieldName,
    ConfigSvrMergeChunk::kDbNameFieldName,
    ConfigSvrMergeChunk::kEpochFieldName,
    ConfigSvrMergeChunk::kShardFieldName,
    ConfigSvrMergeChunk::kValidAfterFieldName,
    ConfigSvrMergeChunk::kWriteConcernFieldName,
    ConfigSvrMergeChunk::kCommandName,
};

ConfigSvrMergeChunk::ConfigSvrMergeChunk(const mongo::NamespaceString commandParameter) : _commandParameter(std::move(commandParameter)), _shard(mongo::idl::preparsedValue<decltype(_shard)>()), _epoch(mongo::idl::preparsedValue<decltype(_epoch)>()), _hasShard(false), _hasEpoch(false), _hasChunkBoundaries(false), _hasDbName(false) {
    // Used for initialization only
}
ConfigSvrMergeChunk::ConfigSvrMergeChunk(const mongo::NamespaceString commandParameter, mongo::ShardId shard, mongo::OID epoch, std::vector<mongo::BSONObj> chunkBoundaries) : _commandParameter(std::move(commandParameter)), _shard(std::move(shard)), _epoch(std::move(epoch)), _chunkBoundaries(std::move(chunkBoundaries)), _hasShard(true), _hasEpoch(true), _hasChunkBoundaries(true), _hasDbName(true) {
    // Used for initialization only
}

void ConfigSvrMergeChunk::validateChunkBoundaries(IDLParserErrorContext& ctxt, const std::vector<mongo::BSONObj>& value)
{
    uassertStatusOK(chunkBoundsNotEmpty(value));
}

void ConfigSvrMergeChunk::validateChunkBoundaries(const std::vector<mongo::BSONObj>& value)
{
    uassertStatusOK(chunkBoundsNotEmpty(value));
}


ConfigSvrMergeChunk ConfigSvrMergeChunk::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::NamespaceString>();
    ConfigSvrMergeChunk object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ConfigSvrMergeChunk::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<6> usedFields;
    const size_t kShardBit = 0;
    const size_t kEpochBit = 1;
    const size_t kChunkBoundariesBit = 2;
    const size_t kValidAfterBit = 3;
    const size_t kWriteConcernBit = 4;
    const size_t kDbNameBit = 5;
    std::set<StringData> usedFieldSet;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kShardFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kShardBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kShardBit);

                _hasShard = true;
                _shard = element.str();
            }
        }
        else if (fieldName == kEpochFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, jstOID))) {
                if (MONGO_unlikely(usedFields[kEpochBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEpochBit);

                _hasEpoch = true;
                _epoch = element.OID();
            }
        }
        else if (fieldName == kChunkBoundariesFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kChunkBoundariesBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kChunkBoundariesBit);

                _hasChunkBoundaries = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kChunkBoundariesFieldName, &ctxt);
            std::vector<mongo::BSONObj> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, Object)) {
                        const BSONObj localObject = arrayElement.Obj();
                        values.emplace_back(BSONObj::getOwned(localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _chunkBoundaries = std::move(values);
        }
        else if (fieldName == kValidAfterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, bsonTimestamp))) {
                if (MONGO_unlikely(usedFields[kValidAfterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValidAfterBit);

                _validAfter = element.timestamp();
            }
        }
        else if (fieldName == kWriteConcernFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kWriteConcernBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kWriteConcernBit);

                _writeConcern = element.Obj();
            }
        }
        else if (fieldName == kDbNameFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kDbNameBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDbNameBit);

                _hasDbName = true;
                _dbName = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kShardBit]) {
            ctxt.throwMissingField(kShardFieldName);
        }
        if (!usedFields[kEpochBit]) {
            ctxt.throwMissingField(kEpochFieldName);
        }
        if (!usedFields[kChunkBoundariesBit]) {
            ctxt.throwMissingField(kChunkBoundariesFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, String))) {
            _commandParameter = NamespaceString(commandElement.valueStringData());
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

ConfigSvrMergeChunk ConfigSvrMergeChunk::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::NamespaceString>();
    ConfigSvrMergeChunk object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void ConfigSvrMergeChunk::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<6> usedFields;
    const size_t kShardBit = 0;
    const size_t kEpochBit = 1;
    const size_t kChunkBoundariesBit = 2;
    const size_t kValidAfterBit = 3;
    const size_t kWriteConcernBit = 4;
    const size_t kDbNameBit = 5;
    std::set<StringData> usedFieldSet;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kShardFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kShardBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kShardBit);

                _hasShard = true;
                _shard = element.str();
            }
        }
        else if (fieldName == kEpochFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, jstOID))) {
                if (MONGO_unlikely(usedFields[kEpochBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEpochBit);

                _hasEpoch = true;
                _epoch = element.OID();
            }
        }
        else if (fieldName == kChunkBoundariesFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kChunkBoundariesBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kChunkBoundariesBit);

                _hasChunkBoundaries = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kChunkBoundariesFieldName, &ctxt);
            std::vector<mongo::BSONObj> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, Object)) {
                        const BSONObj localObject = arrayElement.Obj();
                        values.emplace_back(BSONObj::getOwned(localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _chunkBoundaries = std::move(values);
        }
        else if (fieldName == kValidAfterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, bsonTimestamp))) {
                if (MONGO_unlikely(usedFields[kValidAfterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValidAfterBit);

                _validAfter = element.timestamp();
            }
        }
        else if (fieldName == kWriteConcernFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kWriteConcernBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kWriteConcernBit);

                _writeConcern = element.Obj();
            }
        }
        else if (fieldName == kDbNameFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kDbNameBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDbNameBit);

                _hasDbName = true;
                _dbName = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kShardBit]) {
            ctxt.throwMissingField(kShardFieldName);
        }
        if (!usedFields[kEpochBit]) {
            ctxt.throwMissingField(kEpochFieldName);
        }
        if (!usedFields[kChunkBoundariesBit]) {
            ctxt.throwMissingField(kChunkBoundariesFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, String))) {
            _commandParameter = NamespaceString(commandElement.valueStringData());
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

void ConfigSvrMergeChunk::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasShard && _hasEpoch && _hasChunkBoundaries && _hasDbName);

    {
        builder->append(kCommandParameterFieldName, _commandParameter.toString());
    }
    {
        builder->append(kShardFieldName, _shard.toString());
    }

    builder->append(kEpochFieldName, _epoch);

    {
        builder->append(kChunkBoundariesFieldName, _chunkBoundaries);
    }

    if (_validAfter.is_initialized()) {
        builder->append(kValidAfterFieldName, _validAfter.get());
    }

    if (_writeConcern.is_initialized()) {
        builder->append(kWriteConcernFieldName, _writeConcern.get());
    }

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest ConfigSvrMergeChunk::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasShard && _hasEpoch && _hasChunkBoundaries && _hasDbName);

        {
            builder->append(kCommandParameterFieldName, _commandParameter.toString());
        }
        {
            builder->append(kShardFieldName, _shard.toString());
        }

        builder->append(kEpochFieldName, _epoch);

        {
            builder->append(kChunkBoundariesFieldName, _chunkBoundaries);
        }

        if (_validAfter.is_initialized()) {
            builder->append(kValidAfterFieldName, _validAfter.get());
        }

        if (_writeConcern.is_initialized()) {
            builder->append(kWriteConcernFieldName, _writeConcern.get());
        }

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj ConfigSvrMergeChunk::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData ConfigSvrMergeChunks::kCommandParameterFieldName;
constexpr StringData ConfigSvrMergeChunks::kChunkRangeFieldName;
constexpr StringData ConfigSvrMergeChunks::kCollectionUUIDFieldName;
constexpr StringData ConfigSvrMergeChunks::kDbNameFieldName;
constexpr StringData ConfigSvrMergeChunks::kShardFieldName;
constexpr StringData ConfigSvrMergeChunks::kValidAfterFieldName;
constexpr StringData ConfigSvrMergeChunks::kWriteConcernFieldName;
constexpr StringData ConfigSvrMergeChunks::kCommandName;

const std::vector<StringData> ConfigSvrMergeChunks::_knownBSONFields {
    ConfigSvrMergeChunks::kChunkRangeFieldName,
    ConfigSvrMergeChunks::kCollectionUUIDFieldName,
    ConfigSvrMergeChunks::kShardFieldName,
    ConfigSvrMergeChunks::kValidAfterFieldName,
    ConfigSvrMergeChunks::kWriteConcernFieldName,
    ConfigSvrMergeChunks::kCommandName,
};
const std::vector<StringData> ConfigSvrMergeChunks::_knownOP_MSGFields {
    ConfigSvrMergeChunks::kChunkRangeFieldName,
    ConfigSvrMergeChunks::kCollectionUUIDFieldName,
    ConfigSvrMergeChunks::kDbNameFieldName,
    ConfigSvrMergeChunks::kShardFieldName,
    ConfigSvrMergeChunks::kValidAfterFieldName,
    ConfigSvrMergeChunks::kWriteConcernFieldName,
    ConfigSvrMergeChunks::kCommandName,
};

ConfigSvrMergeChunks::ConfigSvrMergeChunks(const mongo::NamespaceString commandParameter) : _commandParameter(std::move(commandParameter)), _shard(mongo::idl::preparsedValue<decltype(_shard)>()), _collectionUUID(mongo::idl::preparsedValue<decltype(_collectionUUID)>()), _chunkRange(mongo::idl::preparsedValue<decltype(_chunkRange)>()), _hasShard(false), _hasCollectionUUID(false), _hasChunkRange(false), _hasDbName(false) {
    // Used for initialization only
}
ConfigSvrMergeChunks::ConfigSvrMergeChunks(const mongo::NamespaceString commandParameter, mongo::ShardId shard, mongo::UUID collectionUUID, mongo::ChunkRange chunkRange) : _commandParameter(std::move(commandParameter)), _shard(std::move(shard)), _collectionUUID(std::move(collectionUUID)), _chunkRange(std::move(chunkRange)), _hasShard(true), _hasCollectionUUID(true), _hasChunkRange(true), _hasDbName(true) {
    // Used for initialization only
}


ConfigSvrMergeChunks ConfigSvrMergeChunks::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::NamespaceString>();
    ConfigSvrMergeChunks object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ConfigSvrMergeChunks::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<6> usedFields;
    const size_t kShardBit = 0;
    const size_t kCollectionUUIDBit = 1;
    const size_t kChunkRangeBit = 2;
    const size_t kValidAfterBit = 3;
    const size_t kWriteConcernBit = 4;
    const size_t kDbNameBit = 5;
    std::set<StringData> usedFieldSet;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kShardFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kShardBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kShardBit);

                _hasShard = true;
                _shard = element.str();
            }
        }
        else if (fieldName == kCollectionUUIDFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kCollectionUUIDBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCollectionUUIDBit);

                _hasCollectionUUID = true;
                const BSONObj localObject = element.Obj();
                _collectionUUID = UUID::parse(localObject);
            }
        }
        else if (fieldName == kChunkRangeFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kChunkRangeBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kChunkRangeBit);

                _hasChunkRange = true;
                const BSONObj localObject = element.Obj();
                _chunkRange = ChunkRange::fromBSONThrowing(localObject);
            }
        }
        else if (fieldName == kValidAfterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, bsonTimestamp))) {
                if (MONGO_unlikely(usedFields[kValidAfterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValidAfterBit);

                _validAfter = element.timestamp();
            }
        }
        else if (fieldName == kWriteConcernFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kWriteConcernBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kWriteConcernBit);

                _writeConcern = element.Obj();
            }
        }
        else if (fieldName == kDbNameFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kDbNameBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDbNameBit);

                _hasDbName = true;
                _dbName = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kShardBit]) {
            ctxt.throwMissingField(kShardFieldName);
        }
        if (!usedFields[kCollectionUUIDBit]) {
            ctxt.throwMissingField(kCollectionUUIDFieldName);
        }
        if (!usedFields[kChunkRangeBit]) {
            ctxt.throwMissingField(kChunkRangeFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, String))) {
            _commandParameter = NamespaceString(commandElement.valueStringData());
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

ConfigSvrMergeChunks ConfigSvrMergeChunks::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::NamespaceString>();
    ConfigSvrMergeChunks object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void ConfigSvrMergeChunks::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<6> usedFields;
    const size_t kShardBit = 0;
    const size_t kCollectionUUIDBit = 1;
    const size_t kChunkRangeBit = 2;
    const size_t kValidAfterBit = 3;
    const size_t kWriteConcernBit = 4;
    const size_t kDbNameBit = 5;
    std::set<StringData> usedFieldSet;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kShardFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kShardBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kShardBit);

                _hasShard = true;
                _shard = element.str();
            }
        }
        else if (fieldName == kCollectionUUIDFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kCollectionUUIDBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCollectionUUIDBit);

                _hasCollectionUUID = true;
                const BSONObj localObject = element.Obj();
                _collectionUUID = UUID::parse(localObject);
            }
        }
        else if (fieldName == kChunkRangeFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kChunkRangeBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kChunkRangeBit);

                _hasChunkRange = true;
                const BSONObj localObject = element.Obj();
                _chunkRange = ChunkRange::fromBSONThrowing(localObject);
            }
        }
        else if (fieldName == kValidAfterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, bsonTimestamp))) {
                if (MONGO_unlikely(usedFields[kValidAfterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValidAfterBit);

                _validAfter = element.timestamp();
            }
        }
        else if (fieldName == kWriteConcernFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kWriteConcernBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kWriteConcernBit);

                _writeConcern = element.Obj();
            }
        }
        else if (fieldName == kDbNameFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kDbNameBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDbNameBit);

                _hasDbName = true;
                _dbName = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kShardBit]) {
            ctxt.throwMissingField(kShardFieldName);
        }
        if (!usedFields[kCollectionUUIDBit]) {
            ctxt.throwMissingField(kCollectionUUIDFieldName);
        }
        if (!usedFields[kChunkRangeBit]) {
            ctxt.throwMissingField(kChunkRangeFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, String))) {
            _commandParameter = NamespaceString(commandElement.valueStringData());
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

void ConfigSvrMergeChunks::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasShard && _hasCollectionUUID && _hasChunkRange && _hasDbName);

    {
        builder->append(kCommandParameterFieldName, _commandParameter.toString());
    }
    {
        builder->append(kShardFieldName, _shard.toString());
    }

    {
        const BSONObj localObject = _collectionUUID.toBSON();
        builder->append(kCollectionUUIDFieldName, localObject);
    }

    {
        const BSONObj localObject = _chunkRange.toBSON();
        builder->append(kChunkRangeFieldName, localObject);
    }

    if (_validAfter.is_initialized()) {
        builder->append(kValidAfterFieldName, _validAfter.get());
    }

    if (_writeConcern.is_initialized()) {
        builder->append(kWriteConcernFieldName, _writeConcern.get());
    }

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest ConfigSvrMergeChunks::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasShard && _hasCollectionUUID && _hasChunkRange && _hasDbName);

        {
            builder->append(kCommandParameterFieldName, _commandParameter.toString());
        }
        {
            builder->append(kShardFieldName, _shard.toString());
        }

        {
            const BSONObj localObject = _collectionUUID.toBSON();
            builder->append(kCollectionUUIDFieldName, localObject);
        }

        {
            const BSONObj localObject = _chunkRange.toBSON();
            builder->append(kChunkRangeFieldName, localObject);
        }

        if (_validAfter.is_initialized()) {
            builder->append(kValidAfterFieldName, _validAfter.get());
        }

        if (_writeConcern.is_initialized()) {
            builder->append(kWriteConcernFieldName, _writeConcern.get());
        }

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj ConfigSvrMergeChunks::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

}  // namespace mongo
