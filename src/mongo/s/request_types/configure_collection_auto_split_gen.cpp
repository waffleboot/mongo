/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/s/request_types/configure_collection_auto_split_gen.h --output build/opt/mongo/s/request_types/configure_collection_auto_split_gen.cpp src/mongo/s/request_types/configure_collection_auto_split.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/s/request_types/configure_collection_auto_split_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {

constexpr StringData Configure_auto_split_params::kDefaultChunkSizeMBFieldName;
constexpr StringData Configure_auto_split_params::kEnableAutoSplitterFieldName;


Configure_auto_split_params::Configure_auto_split_params()  {
    // Used for initialization only
}


Configure_auto_split_params Configure_auto_split_params::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Configure_auto_split_params>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Configure_auto_split_params::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kDefaultChunkSizeMBBit = 0;
    const size_t kEnableAutoSplitterBit = 1;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kDefaultChunkSizeMBFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertTypes(element, {NumberLong, NumberInt, NumberDecimal, NumberDouble}))) {
                if (MONGO_unlikely(usedFields[kDefaultChunkSizeMBBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDefaultChunkSizeMBBit);

                _defaultChunkSizeMB = element.safeNumberInt();
            }
        }
        else if (fieldName == kEnableAutoSplitterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kEnableAutoSplitterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEnableAutoSplitterBit);

                _enableAutoSplitter = element.boolean();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
    }

}


void Configure_auto_split_params::serialize(BSONObjBuilder* builder) const {
    if (_defaultChunkSizeMB.is_initialized()) {
        builder->append(kDefaultChunkSizeMBFieldName, _defaultChunkSizeMB.get());
    }

    if (_enableAutoSplitter.is_initialized()) {
        builder->append(kEnableAutoSplitterFieldName, _enableAutoSplitter.get());
    }

}


BSONObj Configure_auto_split_params::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData ConfigureCollAutoSplit::kCommandParameterFieldName;
constexpr StringData ConfigureCollAutoSplit::kConfigureCollAutoSplitFieldName;
constexpr StringData ConfigureCollAutoSplit::kDbNameFieldName;
constexpr StringData ConfigureCollAutoSplit::kDefaultChunkSizeMBFieldName;
constexpr StringData ConfigureCollAutoSplit::kEnableAutoSplitterFieldName;
constexpr StringData ConfigureCollAutoSplit::kCommandName;

const std::vector<StringData> ConfigureCollAutoSplit::_knownBSONFields {
    ConfigureCollAutoSplit::kConfigureCollAutoSplitFieldName,
    ConfigureCollAutoSplit::kDefaultChunkSizeMBFieldName,
    ConfigureCollAutoSplit::kEnableAutoSplitterFieldName,
    ConfigureCollAutoSplit::kCommandName,
};
const std::vector<StringData> ConfigureCollAutoSplit::_knownOP_MSGFields {
    ConfigureCollAutoSplit::kConfigureCollAutoSplitFieldName,
    ConfigureCollAutoSplit::kDbNameFieldName,
    ConfigureCollAutoSplit::kDefaultChunkSizeMBFieldName,
    ConfigureCollAutoSplit::kEnableAutoSplitterFieldName,
    ConfigureCollAutoSplit::kCommandName,
};

ConfigureCollAutoSplit::ConfigureCollAutoSplit(const mongo::NamespaceString commandParameter) : _commandParameter(std::move(commandParameter)), _hasDbName(false) {
    // Used for initialization only
}


ConfigureCollAutoSplit ConfigureCollAutoSplit::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::NamespaceString>();
    ConfigureCollAutoSplit object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ConfigureCollAutoSplit::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kDefaultChunkSizeMBBit = 0;
    const size_t kEnableAutoSplitterBit = 1;
    const size_t kDbNameBit = 2;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDefaultChunkSizeMBFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertTypes(element, {NumberLong, NumberInt, NumberDecimal, NumberDouble}))) {
                if (MONGO_unlikely(usedFields[kDefaultChunkSizeMBBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDefaultChunkSizeMBBit);

                _configureCollAutoSplit.setDefaultChunkSizeMB(boost::optional<std::int32_t>(element.safeNumberInt()));
            }
        }
        else if (fieldName == kEnableAutoSplitterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kEnableAutoSplitterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEnableAutoSplitterBit);

                _configureCollAutoSplit.setEnableAutoSplitter(boost::optional<bool>(element.boolean()));
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
            if (!mongo::isGenericArgument(fieldName)) {
                ctxt.throwUnknownField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
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

ConfigureCollAutoSplit ConfigureCollAutoSplit::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::NamespaceString>();
    ConfigureCollAutoSplit object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void ConfigureCollAutoSplit::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<4> usedFields;
    const size_t kDefaultChunkSizeMBBit = 0;
    const size_t kEnableAutoSplitterBit = 1;
    const size_t kDbNameBit = 2;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDefaultChunkSizeMBFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertTypes(element, {NumberLong, NumberInt, NumberDecimal, NumberDouble}))) {
                if (MONGO_unlikely(usedFields[kDefaultChunkSizeMBBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDefaultChunkSizeMBBit);

                _configureCollAutoSplit.setDefaultChunkSizeMB(boost::optional<std::int32_t>(element.safeNumberInt()));
            }
        }
        else if (fieldName == kEnableAutoSplitterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kEnableAutoSplitterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEnableAutoSplitterBit);

                _configureCollAutoSplit.setEnableAutoSplitter(boost::optional<bool>(element.boolean()));
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
            if (!mongo::isGenericArgument(fieldName)) {
                ctxt.throwUnknownField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
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

void ConfigureCollAutoSplit::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    {
        builder->append(kCommandParameterFieldName, _commandParameter.toString());
    }
    {
        _configureCollAutoSplit.serialize(builder);
    }

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest ConfigureCollAutoSplit::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        {
            builder->append(kCommandParameterFieldName, _commandParameter.toString());
        }
        {
            _configureCollAutoSplit.serialize(builder);
        }

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj ConfigureCollAutoSplit::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData ConfigsvrConfigureCollAutoSplit::kCommandParameterFieldName;
constexpr StringData ConfigsvrConfigureCollAutoSplit::kConfigureCollAutoSplitFieldName;
constexpr StringData ConfigsvrConfigureCollAutoSplit::kDbNameFieldName;
constexpr StringData ConfigsvrConfigureCollAutoSplit::kDefaultChunkSizeMBFieldName;
constexpr StringData ConfigsvrConfigureCollAutoSplit::kEnableAutoSplitterFieldName;
constexpr StringData ConfigsvrConfigureCollAutoSplit::kCommandName;

const std::vector<StringData> ConfigsvrConfigureCollAutoSplit::_knownBSONFields {
    ConfigsvrConfigureCollAutoSplit::kConfigureCollAutoSplitFieldName,
    ConfigsvrConfigureCollAutoSplit::kDefaultChunkSizeMBFieldName,
    ConfigsvrConfigureCollAutoSplit::kEnableAutoSplitterFieldName,
    ConfigsvrConfigureCollAutoSplit::kCommandName,
};
const std::vector<StringData> ConfigsvrConfigureCollAutoSplit::_knownOP_MSGFields {
    ConfigsvrConfigureCollAutoSplit::kConfigureCollAutoSplitFieldName,
    ConfigsvrConfigureCollAutoSplit::kDbNameFieldName,
    ConfigsvrConfigureCollAutoSplit::kDefaultChunkSizeMBFieldName,
    ConfigsvrConfigureCollAutoSplit::kEnableAutoSplitterFieldName,
    ConfigsvrConfigureCollAutoSplit::kCommandName,
};

ConfigsvrConfigureCollAutoSplit::ConfigsvrConfigureCollAutoSplit(const mongo::NamespaceString commandParameter) : _commandParameter(std::move(commandParameter)), _hasDbName(false) {
    // Used for initialization only
}


ConfigsvrConfigureCollAutoSplit ConfigsvrConfigureCollAutoSplit::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::NamespaceString>();
    ConfigsvrConfigureCollAutoSplit object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ConfigsvrConfigureCollAutoSplit::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kDefaultChunkSizeMBBit = 0;
    const size_t kEnableAutoSplitterBit = 1;
    const size_t kDbNameBit = 2;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDefaultChunkSizeMBFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertTypes(element, {NumberLong, NumberInt, NumberDecimal, NumberDouble}))) {
                if (MONGO_unlikely(usedFields[kDefaultChunkSizeMBBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDefaultChunkSizeMBBit);

                _configureCollAutoSplit.setDefaultChunkSizeMB(boost::optional<std::int32_t>(element.safeNumberInt()));
            }
        }
        else if (fieldName == kEnableAutoSplitterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kEnableAutoSplitterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEnableAutoSplitterBit);

                _configureCollAutoSplit.setEnableAutoSplitter(boost::optional<bool>(element.boolean()));
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
            if (!mongo::isGenericArgument(fieldName)) {
                ctxt.throwUnknownField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
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

ConfigsvrConfigureCollAutoSplit ConfigsvrConfigureCollAutoSplit::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::NamespaceString>();
    ConfigsvrConfigureCollAutoSplit object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void ConfigsvrConfigureCollAutoSplit::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<4> usedFields;
    const size_t kDefaultChunkSizeMBBit = 0;
    const size_t kEnableAutoSplitterBit = 1;
    const size_t kDbNameBit = 2;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDefaultChunkSizeMBFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertTypes(element, {NumberLong, NumberInt, NumberDecimal, NumberDouble}))) {
                if (MONGO_unlikely(usedFields[kDefaultChunkSizeMBBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDefaultChunkSizeMBBit);

                _configureCollAutoSplit.setDefaultChunkSizeMB(boost::optional<std::int32_t>(element.safeNumberInt()));
            }
        }
        else if (fieldName == kEnableAutoSplitterFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kEnableAutoSplitterBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEnableAutoSplitterBit);

                _configureCollAutoSplit.setEnableAutoSplitter(boost::optional<bool>(element.boolean()));
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
            if (!mongo::isGenericArgument(fieldName)) {
                ctxt.throwUnknownField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
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

void ConfigsvrConfigureCollAutoSplit::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    {
        builder->append(kCommandParameterFieldName, _commandParameter.toString());
    }
    {
        _configureCollAutoSplit.serialize(builder);
    }

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest ConfigsvrConfigureCollAutoSplit::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        {
            builder->append(kCommandParameterFieldName, _commandParameter.toString());
        }
        {
            _configureCollAutoSplit.serialize(builder);
        }

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj ConfigsvrConfigureCollAutoSplit::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

}  // namespace mongo
