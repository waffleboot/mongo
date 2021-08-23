/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/commands_test_example_gen.h --output build/opt/mongo/db/commands_test_example_gen.cpp src/mongo/db/commands_test_example.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/db/commands_test_example_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {
namespace commands_test_example {

constexpr StringData ExampleIncrementReply::kIPlusOneFieldName;


ExampleIncrementReply::ExampleIncrementReply() : _iPlusOne(mongo::idl::preparsedValue<decltype(_iPlusOne)>()), _hasIPlusOne(false) {
    // Used for initialization only
}
ExampleIncrementReply::ExampleIncrementReply(std::int32_t iPlusOne) : _iPlusOne(std::move(iPlusOne)), _hasIPlusOne(true) {
    // Used for initialization only
}


ExampleIncrementReply ExampleIncrementReply::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<ExampleIncrementReply>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ExampleIncrementReply::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kIPlusOneBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kIPlusOneFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kIPlusOneBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIPlusOneBit);

                _hasIPlusOne = true;
                _iPlusOne = element._numberInt();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kIPlusOneBit]) {
            ctxt.throwMissingField(kIPlusOneFieldName);
        }
    }

}


void ExampleIncrementReply::serialize(BSONObjBuilder* builder) const {
    invariant(_hasIPlusOne);

    builder->append(kIPlusOneFieldName, _iPlusOne);

}


BSONObj ExampleIncrementReply::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData ExampleIncrement::kDbNameFieldName;
constexpr StringData ExampleIncrement::kIFieldName;
constexpr StringData ExampleIncrement::kCommandName;

const std::vector<StringData> ExampleIncrement::_knownBSONFields {
    ExampleIncrement::kIFieldName,
    ExampleIncrement::kCommandName,
};
const std::vector<StringData> ExampleIncrement::_knownOP_MSGFields {
    ExampleIncrement::kDbNameFieldName,
    ExampleIncrement::kIFieldName,
    ExampleIncrement::kCommandName,
};

ExampleIncrement::ExampleIncrement(const NamespaceString nss) : _nss(std::move(nss)), _i(mongo::idl::preparsedValue<decltype(_i)>()), _dbName(nss.db().toString()), _hasI(false), _hasDbName(true) {
    // Used for initialization only
}
ExampleIncrement::ExampleIncrement(const NamespaceString nss, std::int32_t i) : _nss(std::move(nss)), _i(std::move(i)), _dbName(nss.db().toString()), _hasI(true), _hasDbName(true) {
    // Used for initialization only
}


ExampleIncrement ExampleIncrement::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    ExampleIncrement object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ExampleIncrement::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kIBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kIFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kIBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIBit);

                _hasI = true;
                _i = element._numberInt();
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
        if (!usedFields[kIBit]) {
            ctxt.throwMissingField(kIFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

ExampleIncrement ExampleIncrement::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    ExampleIncrement object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void ExampleIncrement::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kIBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kIFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kIBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIBit);

                _hasI = true;
                _i = element._numberInt();
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
        if (!usedFields[kIBit]) {
            ctxt.throwMissingField(kIFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

void ExampleIncrement::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasI && _hasDbName);

    invariant(!_nss.isEmpty());
    builder->append("exampleIncrement"_sd, _nss.coll());

    builder->append(kIFieldName, _i);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest ExampleIncrement::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasI && _hasDbName);

        invariant(!_nss.isEmpty());
        builder->append("exampleIncrement"_sd, _nss.coll());

        builder->append(kIFieldName, _i);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj ExampleIncrement::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData ExampleVoid::kDbNameFieldName;
constexpr StringData ExampleVoid::kIFieldName;
constexpr StringData ExampleVoid::kCommandName;

const std::vector<StringData> ExampleVoid::_knownBSONFields {
    ExampleVoid::kIFieldName,
    ExampleVoid::kCommandName,
};
const std::vector<StringData> ExampleVoid::_knownOP_MSGFields {
    ExampleVoid::kDbNameFieldName,
    ExampleVoid::kIFieldName,
    ExampleVoid::kCommandName,
};

ExampleVoid::ExampleVoid(const NamespaceString nss) : _nss(std::move(nss)), _i(mongo::idl::preparsedValue<decltype(_i)>()), _dbName(nss.db().toString()), _hasI(false), _hasDbName(true) {
    // Used for initialization only
}
ExampleVoid::ExampleVoid(const NamespaceString nss, std::int32_t i) : _nss(std::move(nss)), _i(std::move(i)), _dbName(nss.db().toString()), _hasI(true), _hasDbName(true) {
    // Used for initialization only
}


ExampleVoid ExampleVoid::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    ExampleVoid object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ExampleVoid::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kIBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kIFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kIBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIBit);

                _hasI = true;
                _i = element._numberInt();
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
        if (!usedFields[kIBit]) {
            ctxt.throwMissingField(kIFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

ExampleVoid ExampleVoid::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    ExampleVoid object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void ExampleVoid::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kIBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kIFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kIBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIBit);

                _hasI = true;
                _i = element._numberInt();
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
        if (!usedFields[kIBit]) {
            ctxt.throwMissingField(kIFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

void ExampleVoid::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasI && _hasDbName);

    invariant(!_nss.isEmpty());
    builder->append("exampleVoid"_sd, _nss.coll());

    builder->append(kIFieldName, _i);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest ExampleVoid::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasI && _hasDbName);

        invariant(!_nss.isEmpty());
        builder->append("exampleVoid"_sd, _nss.coll());

        builder->append(kIFieldName, _i);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj ExampleVoid::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData ExampleMinimal::kDbNameFieldName;
constexpr StringData ExampleMinimal::kIFieldName;
constexpr StringData ExampleMinimal::kCommandName;

const std::vector<StringData> ExampleMinimal::_knownBSONFields {
    ExampleMinimal::kIFieldName,
    ExampleMinimal::kCommandName,
};
const std::vector<StringData> ExampleMinimal::_knownOP_MSGFields {
    ExampleMinimal::kDbNameFieldName,
    ExampleMinimal::kIFieldName,
    ExampleMinimal::kCommandName,
};

ExampleMinimal::ExampleMinimal(const NamespaceString nss) : _nss(std::move(nss)), _i(mongo::idl::preparsedValue<decltype(_i)>()), _dbName(nss.db().toString()), _hasI(false), _hasDbName(true) {
    // Used for initialization only
}
ExampleMinimal::ExampleMinimal(const NamespaceString nss, std::int32_t i) : _nss(std::move(nss)), _i(std::move(i)), _dbName(nss.db().toString()), _hasI(true), _hasDbName(true) {
    // Used for initialization only
}


ExampleMinimal ExampleMinimal::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    ExampleMinimal object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ExampleMinimal::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kIBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kIFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kIBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIBit);

                _hasI = true;
                _i = element._numberInt();
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
        if (!usedFields[kIBit]) {
            ctxt.throwMissingField(kIFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

ExampleMinimal ExampleMinimal::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    ExampleMinimal object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void ExampleMinimal::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kIBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kIFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kIBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIBit);

                _hasI = true;
                _i = element._numberInt();
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
        if (!usedFields[kIBit]) {
            ctxt.throwMissingField(kIFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

void ExampleMinimal::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasI && _hasDbName);

    invariant(!_nss.isEmpty());
    builder->append("exampleMinimal"_sd, _nss.coll());

    builder->append(kIFieldName, _i);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest ExampleMinimal::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasI && _hasDbName);

        invariant(!_nss.isEmpty());
        builder->append("exampleMinimal"_sd, _nss.coll());

        builder->append(kIFieldName, _i);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj ExampleMinimal::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

}  // namespace commands_test_example
}  // namespace mongo
