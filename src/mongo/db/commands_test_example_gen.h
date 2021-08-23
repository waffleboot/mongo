/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/commands_test_example_gen.h --output build/opt/mongo/db/commands_test_example_gen.cpp src/mongo/db/commands_test_example.idl
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
#include "mongo/stdx/unordered_map.h"
#include "mongo/util/uuid.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {
namespace commands_test_example {

/**
 * reply to exampleIncrement
 */
class ExampleIncrementReply {
public:
    static constexpr auto kIPlusOneFieldName = "iPlusOne"_sd;

    ExampleIncrementReply();
    ExampleIncrementReply(std::int32_t iPlusOne);

    static ExampleIncrementReply parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getIPlusOne() const { return _iPlusOne; }
    void setIPlusOne(std::int32_t value) & {  _iPlusOne = std::move(value); _hasIPlusOne = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::int32_t _iPlusOne;
    bool _hasIPlusOne : 1;
};

/**
 * increment an integer (TypedCommand example)
 */
class ExampleIncrement {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kIFieldName = "i"_sd;
    static constexpr auto kCommandName = "exampleIncrement"_sd;

    explicit ExampleIncrement(NamespaceString nss);
    ExampleIncrement(NamespaceString nss, std::int32_t i);

    static ExampleIncrement parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static ExampleIncrement parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceString& getNamespace() const { return _nss; }

    std::int32_t getI() const { return _i; }
    void setI(std::int32_t value) & {  _i = std::move(value); _hasI = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    NamespaceString _nss;

    std::int32_t _i;
    std::string _dbName;
    bool _hasI : 1;
    bool _hasDbName : 1;
};

/**
 * no return, just side effects
 */
class ExampleVoid {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kIFieldName = "i"_sd;
    static constexpr auto kCommandName = "exampleVoid"_sd;

    explicit ExampleVoid(NamespaceString nss);
    ExampleVoid(NamespaceString nss, std::int32_t i);

    static ExampleVoid parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static ExampleVoid parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceString& getNamespace() const { return _nss; }

    std::int32_t getI() const { return _i; }
    void setI(std::int32_t value) & {  _i = std::move(value); _hasI = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    NamespaceString _nss;

    std::int32_t _i;
    std::string _dbName;
    bool _hasI : 1;
    bool _hasDbName : 1;
};

/**
 * like exampleIncrement, but use MinimalInvocationBase
 */
class ExampleMinimal {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kIFieldName = "i"_sd;
    static constexpr auto kCommandName = "exampleMinimal"_sd;

    explicit ExampleMinimal(NamespaceString nss);
    ExampleMinimal(NamespaceString nss, std::int32_t i);

    static ExampleMinimal parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static ExampleMinimal parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceString& getNamespace() const { return _nss; }

    std::int32_t getI() const { return _i; }
    void setI(std::int32_t value) & {  _i = std::move(value); _hasI = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    NamespaceString _nss;

    std::int32_t _i;
    std::string _dbName;
    bool _hasI : 1;
    bool _hasDbName : 1;
};

}  // namespace commands_test_example
}  // namespace mongo
