/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/unittest_gen.h --output build/opt/mongo/idl/unittest_gen.cpp src/mongo/idl/unittest.idl
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
#include "mongo/db/commands.h"
#include "mongo/db/namespace_string.h"
#include "mongo/idl/basic_types.h"
#include "mongo/idl/basic_types_gen.h"
#include "mongo/idl/idl_parser.h"
#include "mongo/idl/idl_test.h"
#include "mongo/idl/idl_test_types.h"
#include "mongo/idl/unittest_import_gen.h"
#include "mongo/rpc/op_msg.h"
#include "mongo/stdx/unordered_map.h"
#include "mongo/util/uuid.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {
namespace idl {
namespace test {

/**
 * An example string enum
 */
enum class StringEnumEnum : std::int32_t {
    s0 ,
    s1 ,
    s2 ,
};
static constexpr uint32_t kNumStringEnumEnum = 3;

StringEnumEnum StringEnum_parse(const IDLParserErrorContext& ctxt, StringData value);
StringData StringEnum_serializer(StringEnumEnum value);

/**
 * UnitTest for a single BSONObj
 */
class One_plain_object {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_plain_object();
    One_plain_object(mongo::BSONObj value);

    static One_plain_object parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::BSONObj& getValue() const { return _value; }
    void setValue(mongo::BSONObj value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_plain_object& a, const One_plain_object& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_plain_object& a, const One_plain_object& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_plain_object& a, const One_plain_object& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_plain_object& a, const One_plain_object& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_plain_object& a, const One_plain_object& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_plain_object& a, const One_plain_object& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    mongo::BSONObj _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for optional BSONObj
 */
class One_plain_optional_object {
public:
    static constexpr auto kOpt_valueFieldName = "opt_value"_sd;
    static constexpr auto kOpt_value2FieldName = "opt_value2"_sd;
    static constexpr auto kValueFieldName = "value"_sd;
    static constexpr auto kValue2FieldName = "value2"_sd;

    One_plain_optional_object();
    One_plain_optional_object(mongo::BSONObj value, mongo::BSONObj value2);

    static One_plain_optional_object parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::BSONObj& getValue() const { return _value; }
    void setValue(mongo::BSONObj value) & {  _value = std::move(value); _hasValue = true; }

    const mongo::BSONObj& getValue2() const { return _value2; }
    void setValue2(mongo::BSONObj value) & {  _value2 = std::move(value); _hasValue2 = true; }

    const boost::optional<mongo::BSONObj>& getOpt_value() const& { return _opt_value; }
    void getOpt_value() && = delete;
    void setOpt_value(boost::optional<mongo::BSONObj> value) & {  _opt_value = std::move(value);  }

    const boost::optional<mongo::BSONObj>& getOpt_value2() const& { return _opt_value2; }
    void getOpt_value2() && = delete;
    void setOpt_value2(boost::optional<mongo::BSONObj> value) & {  _opt_value2 = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value}, idl::relop::Ordering{_value2}, idl::relop::Ordering{_opt_value}, idl::relop::Ordering{_opt_value2});
    }
    friend bool operator==(const One_plain_optional_object& a, const One_plain_optional_object& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_plain_optional_object& a, const One_plain_optional_object& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_plain_optional_object& a, const One_plain_optional_object& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_plain_optional_object& a, const One_plain_optional_object& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_plain_optional_object& a, const One_plain_optional_object& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_plain_optional_object& a, const One_plain_optional_object& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    mongo::BSONObj _value;
    mongo::BSONObj _value2;
    boost::optional<mongo::BSONObj> _opt_value;
    boost::optional<mongo::BSONObj> _opt_value2;
    bool _hasValue : 1;
    bool _hasValue2 : 1;
};

/**
 * Used for testing the IDL command reply_type field
 */
class Reply_type_struct {
public:
    static constexpr auto kReply_fieldFieldName = "reply_field"_sd;

    Reply_type_struct();
    Reply_type_struct(std::int32_t reply_field);

    static Reply_type_struct parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getReply_field() const { return _reply_field; }
    void setReply_field(std::int32_t value) & {  _reply_field = std::move(value); _hasReply_field = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::int32_t _reply_field;
    bool _hasReply_field : 1;
};

/**
 * UnitTest for parser that will derive from a type
 */
class DerivedBaseStruct {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;

    DerivedBaseStruct();
    DerivedBaseStruct(std::int32_t field1, std::int32_t field2);

    static DerivedBaseStruct parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    std::int32_t getField2() const { return _field2; }
    void setField2(std::int32_t value) & {  _field2 = std::move(value); _hasField2 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::int32_t _field1;
    std::int32_t _field2;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
};

/**
 * UnitTest for a strict struct with 3 required fields
 */
class RequiredStrictField3 {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;

    RequiredStrictField3();
    RequiredStrictField3(std::int32_t field1, std::int32_t field2, std::int32_t field3);

    static RequiredStrictField3 parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    std::int32_t getField2() const { return _field2; }
    void setField2(std::int32_t value) & {  _field2 = std::move(value); _hasField2 = true; }

    std::int32_t getField3() const { return _field3; }
    void setField3(std::int32_t value) & {  _field3 = std::move(value); _hasField3 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::int32_t _field1;
    std::int32_t _field2;
    std::int32_t _field3;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasField3 : 1;
};

/**
 * UnitTest for a non-strict struct with 3 required fields
 */
class RequiredNonStrictField3 {
public:
    static constexpr auto kCppField1FieldName = "1"_sd;
    static constexpr auto kCppField2FieldName = "2"_sd;
    static constexpr auto kCppField3FieldName = "3"_sd;

    RequiredNonStrictField3();
    RequiredNonStrictField3(std::int32_t cppField1, std::int32_t cppField2, std::int32_t cppField3);

    static RequiredNonStrictField3 parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getCppField1() const { return _cppField1; }
    void setCppField1(std::int32_t value) & {  _cppField1 = std::move(value); _hasCppField1 = true; }

    std::int32_t getCppField2() const { return _cppField2; }
    void setCppField2(std::int32_t value) & {  _cppField2 = std::move(value); _hasCppField2 = true; }

    std::int32_t getCppField3() const { return _cppField3; }
    void setCppField3(std::int32_t value) & {  _cppField3 = std::move(value); _hasCppField3 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::int32_t _cppField1;
    std::int32_t _cppField2;
    std::int32_t _cppField3;
    bool _hasCppField1 : 1;
    bool _hasCppField2 : 1;
    bool _hasCppField3 : 1;
};

/**
 * UnitTest for a struct with 3 int fields to test comparison
 */
class CompareAllField3 {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;

    CompareAllField3();
    CompareAllField3(std::int32_t field1, std::int32_t field2, std::int32_t field3);

    static CompareAllField3 parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    std::int32_t getField2() const { return _field2; }
    void setField2(std::int32_t value) & {  _field2 = std::move(value); _hasField2 = true; }

    std::int32_t getField3() const { return _field3; }
    void setField3(std::int32_t value) & {  _field3 = std::move(value); _hasField3 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_field1}, idl::relop::Ordering{_field2}, idl::relop::Ordering{_field3});
    }
    friend bool operator==(const CompareAllField3& a, const CompareAllField3& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const CompareAllField3& a, const CompareAllField3& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const CompareAllField3& a, const CompareAllField3& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const CompareAllField3& a, const CompareAllField3& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const CompareAllField3& a, const CompareAllField3& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const CompareAllField3& a, const CompareAllField3& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::int32_t _field1;
    std::int32_t _field2;
    std::int32_t _field3;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasField3 : 1;
};

/**
 * UnitTest for a struct with 3 int fields to test comparison, but only 2 are compared.

 */
class CompareSomeField3 {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;

    CompareSomeField3();
    CompareSomeField3(std::int32_t field3, std::int32_t field2, std::int32_t field1);

    static CompareSomeField3 parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getField3() const { return _field3; }
    void setField3(std::int32_t value) & {  _field3 = std::move(value); _hasField3 = true; }

    std::int32_t getField2() const { return _field2; }
    void setField2(std::int32_t value) & {  _field2 = std::move(value); _hasField2 = true; }

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_field1}, idl::relop::Ordering{_field3});
    }
    friend bool operator==(const CompareSomeField3& a, const CompareSomeField3& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const CompareSomeField3& a, const CompareSomeField3& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const CompareSomeField3& a, const CompareSomeField3& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const CompareSomeField3& a, const CompareSomeField3& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const CompareSomeField3& a, const CompareSomeField3& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const CompareSomeField3& a, const CompareSomeField3& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::int32_t _field3;
    std::int32_t _field2;
    std::int32_t _field1;
    bool _hasField3 : 1;
    bool _hasField2 : 1;
    bool _hasField1 : 1;
};

/**
 * UnitTest for a non-strict struct with 3 required fields
 */
class NestedWithDuplicateTypes {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;

    NestedWithDuplicateTypes();
    NestedWithDuplicateTypes(mongo::idl::test::RequiredStrictField3 field1, mongo::idl::test::RequiredStrictField3 field3);

    static NestedWithDuplicateTypes parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::idl::test::RequiredStrictField3& getField1() const { return _field1; }
    mongo::idl::test::RequiredStrictField3& getField1() { return _field1; }
    void setField1(mongo::idl::test::RequiredStrictField3 value) & {  _field1 = std::move(value); _hasField1 = true; }

    const boost::optional<mongo::idl::test::RequiredNonStrictField3>& getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(boost::optional<mongo::idl::test::RequiredNonStrictField3> value) & {  _field2 = std::move(value);  }

    const mongo::idl::test::RequiredStrictField3& getField3() const { return _field3; }
    mongo::idl::test::RequiredStrictField3& getField3() { return _field3; }
    void setField3(mongo::idl::test::RequiredStrictField3 value) & {  _field3 = std::move(value); _hasField3 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::RequiredStrictField3 _field1;
    boost::optional<mongo::idl::test::RequiredNonStrictField3> _field2;
    mongo::idl::test::RequiredStrictField3 _field3;
    bool _hasField1 : 1;
    bool _hasField3 : 1;
};

/**
 * UnitTest for a struct with an ignored_field
 */
class IgnoredField {
public:
    static constexpr auto kIgnored_fieldFieldName = "ignored_field"_sd;
    static constexpr auto kRequired_fieldFieldName = "required_field"_sd;

    IgnoredField();
    IgnoredField(std::int32_t required_field);

    static IgnoredField parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getRequired_field() const { return _required_field; }
    void setRequired_field(std::int32_t value) & {  _required_field = std::move(value); _hasRequired_field = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::int32_t _required_field;
    bool _hasRequired_field : 1;
};

/**
 * UnitTest for a single namespacestring
 */
class One_namespacestring {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_namespacestring();
    One_namespacestring(mongo::NamespaceString value);

    static One_namespacestring parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::NamespaceString& getValue() const { return _value; }
    void setValue(mongo::NamespaceString value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::NamespaceString _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a custom bindata
 */
class One_bindata_custom {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_bindata_custom();
    One_bindata_custom(mongo::BinDataCustomType value);

    static One_bindata_custom parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::BinDataCustomType& getValue() const { return _value; }
    void setValue(mongo::BinDataCustomType value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::BinDataCustomType _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single any type
 */
class One_any_basic_type {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_any_basic_type();
    One_any_basic_type(mongo::AnyBasicType value);

    static One_any_basic_type parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::AnyBasicType& getValue() const { return _value; }
    void setValue(mongo::AnyBasicType value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::AnyBasicType _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single object type
 */
class One_object_basic_type {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_object_basic_type();
    One_object_basic_type(mongo::ObjectBasicType value);

    static One_object_basic_type parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::ObjectBasicType& getValue() const { return _value; }
    void setValue(mongo::ObjectBasicType value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::ObjectBasicType _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single safeInt64
 */
class One_safeint64 {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_safeint64();
    One_safeint64(std::int64_t value);

    static One_safeint64 parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int64_t getValue() const { return _value; }
    void setValue(std::int64_t value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::int64_t _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for default values
 */
class Default_values {
public:
    static constexpr auto kV_boolFieldName = "V_bool"_sd;
    static constexpr auto kV_doubleFieldName = "V_double"_sd;
    static constexpr auto kV_intFieldName = "V_int"_sd;
    static constexpr auto kV_longFieldName = "V_long"_sd;
    static constexpr auto kV_stringFieldName = "V_string"_sd;

    Default_values();

    static Default_values parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getV_string() const& { return _v_string; }
    void getV_string() && = delete;
    void setV_string(StringData value) & { auto _tmpValue = value.toString();  _v_string = std::move(_tmpValue);  }

    std::int32_t getV_int() const { return _v_int; }
    void setV_int(std::int32_t value) & {  _v_int = std::move(value);  }

    std::int64_t getV_long() const { return _v_long; }
    void setV_long(std::int64_t value) & {  _v_long = std::move(value);  }

    double getV_double() const { return _v_double; }
    void setV_double(double value) & {  _v_double = std::move(value);  }

    bool getV_bool() const { return _v_bool; }
    void setV_bool(bool value) & {  _v_bool = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _v_string{"a default"};
    std::int32_t _v_int{42};
    std::int64_t _v_long{423};
    double _v_double{3.14159};
    bool _v_bool{true};
};

/**
 * UnitTest for a optional field
 */
class Optional_field {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kField4FieldName = "field4"_sd;
    static constexpr auto kField5FieldName = "field5"_sd;

    Optional_field();

    static Optional_field parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const boost::optional<StringData> getField1() const& { return boost::optional<StringData>{_field1}; }
    void getField1() && = delete;
    void setField1(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _field1 = std::move(_tmpValue);
    } else {
        _field1 = boost::none;
    }
      }

    const boost::optional<std::int32_t> getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(boost::optional<std::int32_t> value) & {  _field2 = std::move(value);  }

    const boost::optional<mongo::BSONObj>& getField3() const& { return _field3; }
    void getField3() && = delete;
    void setField3(boost::optional<mongo::BSONObj> value) & {  _field3 = std::move(value);  }

    const boost::optional<ConstDataRange> getField4() const& { if (_field4.is_initialized()) {
        return ConstDataRange(_field4.get());;
    } else {
        return boost::none;
    }
     }
    void getField4() && = delete;
    void setField4(boost::optional<ConstDataRange> value) & { if (value.is_initialized()) {
        auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.get().data()), reinterpret_cast<const uint8_t*>(value.get().data()) + value.get().length());
        
        _field4 = std::move(_tmpValue);
    } else {
        _field4 = boost::none;
    }
      }

    const boost::optional<std::array<std::uint8_t, 16>> getField5() const& { return _field5; }
    void getField5() && = delete;
    void setField5(boost::optional<std::array<std::uint8_t, 16>> value) & {  _field5 = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    boost::optional<std::string> _field1;
    boost::optional<std::int32_t> _field2;
    boost::optional<mongo::BSONObj> _field3;
    boost::optional<std::vector<std::uint8_t>> _field4;
    boost::optional<std::array<std::uint8_t, 16>> _field5;
};

/**
 * UnitTest for always_serialize fields
 */
class Always_serialize_field {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kField4FieldName = "field4"_sd;
    static constexpr auto kField5FieldName = "field5"_sd;

    Always_serialize_field();

    static Always_serialize_field parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const boost::optional<StringData> getField1() const& { return boost::optional<StringData>{_field1}; }
    void getField1() && = delete;
    void setField1(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _field1 = std::move(_tmpValue);
    } else {
        _field1 = boost::none;
    }
      }

    const boost::optional<std::int32_t> getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(boost::optional<std::int32_t> value) & {  _field2 = std::move(value);  }

    const boost::optional<mongo::BSONObj>& getField3() const& { return _field3; }
    void getField3() && = delete;
    void setField3(boost::optional<mongo::BSONObj> value) & {  _field3 = std::move(value);  }

    const boost::optional<mongo::BSONObj>& getField4() const& { return _field4; }
    void getField4() && = delete;
    void setField4(boost::optional<mongo::BSONObj> value) & {  _field4 = std::move(value);  }

    const boost::optional<mongo::BSONObj>& getField5() const& { return _field5; }
    void getField5() && = delete;
    void setField5(boost::optional<mongo::BSONObj> value) & {  _field5 = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    boost::optional<std::string> _field1;
    boost::optional<std::int32_t> _field2;
    boost::optional<mongo::BSONObj> _field3;
    boost::optional<mongo::BSONObj> _field4;
    boost::optional<mongo::BSONObj> _field5;
};

/**
 * UnitTest for arrays of ints
 */
class Simple_int_array {
public:
    static constexpr auto kField1FieldName = "field1"_sd;

    Simple_int_array();
    Simple_int_array(std::vector<std::int32_t> field1);

    static Simple_int_array parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const std::vector<std::int32_t>& getField1() const& { return _field1; }
    void getField1() && = delete;
    void setField1(std::vector<std::int32_t> value) & {  _field1 = std::move(value); _hasField1 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::vector<std::int32_t> _field1;
    bool _hasField1 : 1;
};

/**
 * UnitTest for arrays of simple types
 */
class Simple_array_fields {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kField4FieldName = "field4"_sd;
    static constexpr auto kField5FieldName = "field5"_sd;

    Simple_array_fields();
    Simple_array_fields(std::vector<std::string> field1, std::vector<std::int32_t> field2, std::vector<double> field3, std::vector<std::vector<std::uint8_t>> field4, std::vector<std::array<std::uint8_t, 16>> field5);

    static Simple_array_fields parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const std::vector<StringData> getField1() const& { return transformVector(_field1); }
    void getField1() && = delete;
    void setField1(std::vector<StringData> value) & { auto _tmpValue = transformVector(value);  _field1 = std::move(_tmpValue); _hasField1 = true; }

    const std::vector<std::int32_t>& getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(std::vector<std::int32_t> value) & {  _field2 = std::move(value); _hasField2 = true; }

    const std::vector<double>& getField3() const& { return _field3; }
    void getField3() && = delete;
    void setField3(std::vector<double> value) & {  _field3 = std::move(value); _hasField3 = true; }

    const std::vector<ConstDataRange> getField4() const& { return transformVector(_field4); }
    void getField4() && = delete;
    void setField4(std::vector<ConstDataRange> value) & { auto _tmpValue = transformVector(value);  _field4 = std::move(_tmpValue); _hasField4 = true; }

    const std::vector<std::array<std::uint8_t, 16>>& getField5() const& { return _field5; }
    void getField5() && = delete;
    void setField5(std::vector<std::array<std::uint8_t, 16>> value) & {  _field5 = std::move(value); _hasField5 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::vector<std::string> _field1;
    std::vector<std::int32_t> _field2;
    std::vector<double> _field3;
    std::vector<std::vector<std::uint8_t>> _field4;
    std::vector<std::array<std::uint8_t, 16>> _field5;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasField3 : 1;
    bool _hasField4 : 1;
    bool _hasField5 : 1;
};

/**
 * UnitTest for arrays of optional simple types
 */
class Optional_array_fields {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kField4FieldName = "field4"_sd;
    static constexpr auto kField5FieldName = "field5"_sd;

    Optional_array_fields();

    static Optional_array_fields parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const boost::optional<std::vector<StringData>> getField1() const& { if (_field1.is_initialized()) {
        return transformVector(_field1.get());
    } else {
        return boost::none;
    }
     }
    void getField1() && = delete;
    void setField1(boost::optional<std::vector<StringData>> value) & { if (value.is_initialized()) {
        auto _tmpValue = transformVector(value.get());
        
        _field1 = std::move(_tmpValue);
    } else {
        _field1 = boost::none;
    }
      }

    const boost::optional<std::vector<std::int32_t>>& getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(boost::optional<std::vector<std::int32_t>> value) & {  _field2 = std::move(value);  }

    const boost::optional<std::vector<double>>& getField3() const& { return _field3; }
    void getField3() && = delete;
    void setField3(boost::optional<std::vector<double>> value) & {  _field3 = std::move(value);  }

    const boost::optional<std::vector<ConstDataRange>> getField4() const& { if (_field4.is_initialized()) {
        return transformVector(_field4.get());
    } else {
        return boost::none;
    }
     }
    void getField4() && = delete;
    void setField4(boost::optional<std::vector<ConstDataRange>> value) & { if (value.is_initialized()) {
        auto _tmpValue = transformVector(value.get());
        
        _field4 = std::move(_tmpValue);
    } else {
        _field4 = boost::none;
    }
      }

    const boost::optional<std::vector<std::array<std::uint8_t, 16>>>& getField5() const& { return _field5; }
    void getField5() && = delete;
    void setField5(boost::optional<std::vector<std::array<std::uint8_t, 16>>> value) & {  _field5 = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    boost::optional<std::vector<std::string>> _field1;
    boost::optional<std::vector<std::int32_t>> _field2;
    boost::optional<std::vector<double>> _field3;
    boost::optional<std::vector<std::vector<std::uint8_t>>> _field4;
    boost::optional<std::vector<std::array<std::uint8_t, 16>>> _field5;
};

/**
 * UnitTest for arrays of complex optional and non-optional simple types
 */
class Complex_array_fields {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField1oFieldName = "field1o"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField2oFieldName = "field2o"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kField3oFieldName = "field3o"_sd;
    static constexpr auto kField4FieldName = "field4"_sd;
    static constexpr auto kField4oFieldName = "field4o"_sd;
    static constexpr auto kField5FieldName = "field5"_sd;
    static constexpr auto kField5oFieldName = "field5o"_sd;
    static constexpr auto kField6FieldName = "field6"_sd;
    static constexpr auto kField6oFieldName = "field6o"_sd;

    Complex_array_fields();
    Complex_array_fields(std::vector<std::int64_t> field1, std::vector<mongo::NamespaceString> field2, std::vector<mongo::AnyBasicType> field3, std::vector<mongo::ObjectBasicType> field4, std::vector<mongo::BSONObj> field5, std::vector<mongo::idl::import::One_string> field6);

    static Complex_array_fields parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const std::vector<std::int64_t>& getField1() const& { return _field1; }
    void getField1() && = delete;
    void setField1(std::vector<std::int64_t> value) & {  _field1 = std::move(value); _hasField1 = true; }

    const std::vector<mongo::NamespaceString>& getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(std::vector<mongo::NamespaceString> value) & {  _field2 = std::move(value); _hasField2 = true; }

    const std::vector<mongo::AnyBasicType>& getField3() const& { return _field3; }
    void getField3() && = delete;
    void setField3(std::vector<mongo::AnyBasicType> value) & {  _field3 = std::move(value); _hasField3 = true; }

    const std::vector<mongo::ObjectBasicType>& getField4() const& { return _field4; }
    void getField4() && = delete;
    void setField4(std::vector<mongo::ObjectBasicType> value) & {  _field4 = std::move(value); _hasField4 = true; }

    const std::vector<mongo::BSONObj>& getField5() const& { return _field5; }
    void getField5() && = delete;
    void setField5(std::vector<mongo::BSONObj> value) & {  _field5 = std::move(value); _hasField5 = true; }

    const std::vector<mongo::idl::import::One_string>& getField6() const& { return _field6; }
    void getField6() && = delete;
    void setField6(std::vector<mongo::idl::import::One_string> value) & {  _field6 = std::move(value); _hasField6 = true; }

    const boost::optional<std::vector<std::int64_t>>& getField1o() const& { return _field1o; }
    void getField1o() && = delete;
    void setField1o(boost::optional<std::vector<std::int64_t>> value) & {  _field1o = std::move(value);  }

    const boost::optional<std::vector<mongo::NamespaceString>>& getField2o() const& { return _field2o; }
    void getField2o() && = delete;
    void setField2o(boost::optional<std::vector<mongo::NamespaceString>> value) & {  _field2o = std::move(value);  }

    const boost::optional<std::vector<mongo::AnyBasicType>>& getField3o() const& { return _field3o; }
    void getField3o() && = delete;
    void setField3o(boost::optional<std::vector<mongo::AnyBasicType>> value) & {  _field3o = std::move(value);  }

    const boost::optional<std::vector<mongo::ObjectBasicType>>& getField4o() const& { return _field4o; }
    void getField4o() && = delete;
    void setField4o(boost::optional<std::vector<mongo::ObjectBasicType>> value) & {  _field4o = std::move(value);  }

    const boost::optional<std::vector<mongo::BSONObj>>& getField5o() const& { return _field5o; }
    void getField5o() && = delete;
    void setField5o(boost::optional<std::vector<mongo::BSONObj>> value) & {  _field5o = std::move(value);  }

    const boost::optional<std::vector<mongo::idl::import::One_string>>& getField6o() const& { return _field6o; }
    void getField6o() && = delete;
    void setField6o(boost::optional<std::vector<mongo::idl::import::One_string>> value) & {  _field6o = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::vector<std::int64_t> _field1;
    std::vector<mongo::NamespaceString> _field2;
    std::vector<mongo::AnyBasicType> _field3;
    std::vector<mongo::ObjectBasicType> _field4;
    std::vector<mongo::BSONObj> _field5;
    std::vector<mongo::idl::import::One_string> _field6;
    boost::optional<std::vector<std::int64_t>> _field1o;
    boost::optional<std::vector<mongo::NamespaceString>> _field2o;
    boost::optional<std::vector<mongo::AnyBasicType>> _field3o;
    boost::optional<std::vector<mongo::ObjectBasicType>> _field4o;
    boost::optional<std::vector<mongo::BSONObj>> _field5o;
    boost::optional<std::vector<mongo::idl::import::One_string>> _field6o;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasField3 : 1;
    bool _hasField4 : 1;
    bool _hasField5 : 1;
    bool _hasField6 : 1;
};

/**
 * Base struct type for a chained string
 */
class Chained_string_basic_type {
public:
    static constexpr auto kStringFieldFieldName = "stringField"_sd;

    Chained_string_basic_type();
    Chained_string_basic_type(std::string stringField);

    static Chained_string_basic_type parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getStringField() const& { return _stringField; }
    void getStringField() && = delete;
    void setStringField(StringData value) & { auto _tmpValue = value.toString();  _stringField = std::move(_tmpValue); _hasStringField = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _stringField;
    bool _hasStringField : 1;
};

/**
 * Base struct type for a chained any
 */
class Chained_any_basic_type {
public:
    static constexpr auto kAnyFieldFieldName = "anyField"_sd;

    Chained_any_basic_type();
    Chained_any_basic_type(mongo::AnyBasicType anyField);

    static Chained_any_basic_type parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::AnyBasicType& getAnyField() const { return _anyField; }
    void setAnyField(mongo::AnyBasicType value) & {  _anyField = std::move(value); _hasAnyField = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::AnyBasicType _anyField;
    bool _hasAnyField : 1;
};

/**
 * Base struct type for a chained object
 */
class Chained_object_basic_type {
public:
    static constexpr auto kObjectFieldFieldName = "objectField"_sd;

    Chained_object_basic_type();
    Chained_object_basic_type(mongo::ObjectBasicType objectField);

    static Chained_object_basic_type parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::ObjectBasicType& getObjectField() const { return _objectField; }
    void setObjectField(mongo::ObjectBasicType value) & {  _objectField = std::move(value); _hasObjectField = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::ObjectBasicType _objectField;
    bool _hasObjectField : 1;
};

/**
 * Base struct type for a chained enum type
 */
class Chained_enum_type {
public:
    static constexpr auto kEnumFieldFieldName = "enumField"_sd;

    Chained_enum_type();

    static Chained_enum_type parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    mongo::idl::test::StringEnumEnum getEnumField() const { return _enumField; }
    void setEnumField(mongo::idl::test::StringEnumEnum value) & {  _enumField = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::StringEnumEnum _enumField{mongo::idl::test::StringEnumEnum::s0};
};

/**
 * UnitTest for chained struct with only chained types
 */
class Chained_struct_only {
public:
    static constexpr auto kAnotherChainedTypeFieldName = "AnotherChainedType"_sd;
    static constexpr auto kChainedTypeFieldName = "ChainedType"_sd;

    Chained_struct_only();

    static Chained_struct_only parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * An Chain Type to test chaining
     */
    const mongo::ChainedType& getChainedType() const { return _chainedType; }
    void setChainedType(mongo::ChainedType value) & {  _chainedType = std::move(value);  }

    /**
     * Another Chain Type to test chaining
     */
    const mongo::AnotherChainedType& getAnotherChainedType() const { return _anotherChainedType; }
    void setAnotherChainedType(mongo::AnotherChainedType value) & {  _anotherChainedType = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::ChainedType _chainedType;
    mongo::AnotherChainedType _anotherChainedType;
};

/**
 * Chained struct with chained structs and fields
 */
class Chained_struct_mixed {
public:
    static constexpr auto kChainedObjectBasicTypeFieldName = "chained_object_basic_type"_sd;
    static constexpr auto kAnyFieldFieldName = "anyField"_sd;
    static constexpr auto kChained_any_basic_typeFieldName = "chained_any_basic_type"_sd;
    static constexpr auto kChained_enum_typeFieldName = "chained_enum_type"_sd;
    static constexpr auto kEnumFieldFieldName = "enumField"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kObjectFieldFieldName = "objectField"_sd;

    Chained_struct_mixed();
    Chained_struct_mixed(std::string field3);

    static Chained_struct_mixed parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * Base struct type for a chained any
     */
    const mongo::idl::test::Chained_any_basic_type& getChained_any_basic_type() const { return _chained_any_basic_type; }
    mongo::idl::test::Chained_any_basic_type& getChained_any_basic_type() { return _chained_any_basic_type; }
    void setChained_any_basic_type(mongo::idl::test::Chained_any_basic_type value) & {  _chained_any_basic_type = std::move(value);  }

    /**
     * Base struct type for a chained object
     */
    const mongo::idl::test::Chained_object_basic_type& getChainedObjectBasicType() const { return _chainedObjectBasicType; }
    mongo::idl::test::Chained_object_basic_type& getChainedObjectBasicType() { return _chainedObjectBasicType; }
    void setChainedObjectBasicType(mongo::idl::test::Chained_object_basic_type value) & {  _chainedObjectBasicType = std::move(value);  }

    /**
     * Base struct type for a chained enum type
     */
    const mongo::idl::test::Chained_enum_type& getChained_enum_type() const { return _chained_enum_type; }
    mongo::idl::test::Chained_enum_type& getChained_enum_type() { return _chained_enum_type; }
    void setChained_enum_type(mongo::idl::test::Chained_enum_type value) & {  _chained_enum_type = std::move(value);  }

    const StringData getField3() const& { return _field3; }
    void getField3() && = delete;
    void setField3(StringData value) & { auto _tmpValue = value.toString();  _field3 = std::move(_tmpValue); _hasField3 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::Chained_any_basic_type _chained_any_basic_type;
    mongo::idl::test::Chained_object_basic_type _chainedObjectBasicType;
    mongo::idl::test::Chained_enum_type _chained_enum_type;
    std::string _field3;
    bool _hasField3 : 1;
};

/**
 * Chained struct with chained types, structs, and fields
 */
class Chained_struct_type_mixed {
public:
    static constexpr auto kAnotherChainedTypeFieldName = "AnotherChainedType"_sd;
    static constexpr auto kChainedStringBasicTypeFieldName = "chained_string_basic_type"_sd;
    static constexpr auto kChained_typeFieldName = "ChainedType"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kStringFieldFieldName = "stringField"_sd;

    Chained_struct_type_mixed();
    Chained_struct_type_mixed(std::int32_t field3);

    static Chained_struct_type_mixed parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * An Chain Type to test chaining
     */
    const mongo::ChainedType& getChained_type() const { return _chained_type; }
    void setChained_type(mongo::ChainedType value) & {  _chained_type = std::move(value);  }

    /**
     * Another Chain Type to test chaining
     */
    const mongo::AnotherChainedType& getAnotherChainedType() const { return _anotherChainedType; }
    void setAnotherChainedType(mongo::AnotherChainedType value) & {  _anotherChainedType = std::move(value);  }

    /**
     * Base struct type for a chained string
     */
    const mongo::idl::test::Chained_string_basic_type& getChainedStringBasicType() const { return _chainedStringBasicType; }
    mongo::idl::test::Chained_string_basic_type& getChainedStringBasicType() { return _chainedStringBasicType; }
    void setChainedStringBasicType(mongo::idl::test::Chained_string_basic_type value) & {  _chainedStringBasicType = std::move(value);  }

    const  StringData getStringField() const { return _chainedStringBasicType.getStringField(); }
    std::int32_t getField3() const { return _field3; }
    void setField3(std::int32_t value) & {  _field3 = std::move(value); _hasField3 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::ChainedType _chained_type;
    mongo::AnotherChainedType _anotherChainedType;
    mongo::idl::test::Chained_string_basic_type _chainedStringBasicType;
    std::int32_t _field3;
    bool _hasField3 : 1;
};

/**
 * Base struct type for a chained string
 */
class Chained_string_inline_basic_type {
public:
    static constexpr auto kField1oFieldName = "field1o"_sd;
    static constexpr auto kField2oFieldName = "field2o"_sd;
    static constexpr auto kField3oFieldName = "field3o"_sd;
    static constexpr auto kField4oFieldName = "field4o"_sd;
    static constexpr auto kField5oFieldName = "field5o"_sd;
    static constexpr auto kStringFieldFieldName = "stringField"_sd;

    Chained_string_inline_basic_type();
    Chained_string_inline_basic_type(std::string stringField);

    static Chained_string_inline_basic_type parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getStringField() const& { return _stringField; }
    void getStringField() && = delete;
    void setStringField(StringData value) & { auto _tmpValue = value.toString();  _stringField = std::move(_tmpValue); _hasStringField = true; }

    const boost::optional<StringData> getField1o() const& { return boost::optional<StringData>{_field1o}; }
    void getField1o() && = delete;
    void setField1o(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _field1o = std::move(_tmpValue);
    } else {
        _field1o = boost::none;
    }
      }

    const boost::optional<std::int32_t> getField2o() const& { return _field2o; }
    void getField2o() && = delete;
    void setField2o(boost::optional<std::int32_t> value) & {  _field2o = std::move(value);  }

    const boost::optional<mongo::BSONObj>& getField3o() const& { return _field3o; }
    void getField3o() && = delete;
    void setField3o(boost::optional<mongo::BSONObj> value) & {  _field3o = std::move(value);  }

    const boost::optional<ConstDataRange> getField4o() const& { if (_field4o.is_initialized()) {
        return ConstDataRange(_field4o.get());;
    } else {
        return boost::none;
    }
     }
    void getField4o() && = delete;
    void setField4o(boost::optional<ConstDataRange> value) & { if (value.is_initialized()) {
        auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.get().data()), reinterpret_cast<const uint8_t*>(value.get().data()) + value.get().length());
        
        _field4o = std::move(_tmpValue);
    } else {
        _field4o = boost::none;
    }
      }

    const boost::optional<std::array<std::uint8_t, 16>> getField5o() const& { return _field5o; }
    void getField5o() && = delete;
    void setField5o(boost::optional<std::array<std::uint8_t, 16>> value) & {  _field5o = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _stringField;
    boost::optional<std::string> _field1o;
    boost::optional<std::int32_t> _field2o;
    boost::optional<mongo::BSONObj> _field3o;
    boost::optional<std::vector<std::uint8_t>> _field4o;
    boost::optional<std::array<std::uint8_t, 16>> _field5o;
    bool _hasStringField : 1;
};

/**
 * Chained struct with chained structs and fields
 */
class Chained_struct_inline {
public:
    static constexpr auto kChained_string_inline_basic_typeFieldName = "chained_string_inline_basic_type"_sd;
    static constexpr auto kField1oFieldName = "field1o"_sd;
    static constexpr auto kField2oFieldName = "field2o"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kField3oFieldName = "field3o"_sd;
    static constexpr auto kField4oFieldName = "field4o"_sd;
    static constexpr auto kField5oFieldName = "field5o"_sd;
    static constexpr auto kStringFieldFieldName = "stringField"_sd;

    Chained_struct_inline();
    Chained_struct_inline(std::string field3);

    static Chained_struct_inline parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * Base struct type for a chained string
     */
    const mongo::idl::test::Chained_string_inline_basic_type& getChained_string_inline_basic_type() const { return _chained_string_inline_basic_type; }
    mongo::idl::test::Chained_string_inline_basic_type& getChained_string_inline_basic_type() { return _chained_string_inline_basic_type; }
    void setChained_string_inline_basic_type(mongo::idl::test::Chained_string_inline_basic_type value) & {  _chained_string_inline_basic_type = std::move(value);  }

    const  StringData getStringField() const { return _chained_string_inline_basic_type.getStringField(); }
    const  boost::optional<StringData> getField1o() const { return _chained_string_inline_basic_type.getField1o(); }
    const  boost::optional<std::int32_t> getField2o() const { return _chained_string_inline_basic_type.getField2o(); }
    const  boost::optional<mongo::BSONObj>& getField3o() const { return _chained_string_inline_basic_type.getField3o(); }
    const  boost::optional<ConstDataRange> getField4o() const { return _chained_string_inline_basic_type.getField4o(); }
    const  boost::optional<std::array<std::uint8_t, 16>> getField5o() const { return _chained_string_inline_basic_type.getField5o(); }
    const StringData getField3() const& { return _field3; }
    void getField3() && = delete;
    void setField3(StringData value) & { auto _tmpValue = value.toString();  _field3 = std::move(_tmpValue); _hasField3 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::Chained_string_inline_basic_type _chained_string_inline_basic_type;
    std::string _field3;
    bool _hasField3 : 1;
};

/**
 * mock
 */
class One_int_enum {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_int_enum();
    One_int_enum(mongo::idl::import::IntEnum value);

    static One_int_enum parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    mongo::idl::import::IntEnum getValue() const { return _value; }
    void setValue(mongo::idl::import::IntEnum value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::import::IntEnum _value;
    bool _hasValue : 1;
};

/**
 * mock
 */
class One_string_enum {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_string_enum();
    One_string_enum(mongo::idl::test::StringEnumEnum value);

    static One_string_enum parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    mongo::idl::test::StringEnumEnum getValue() const { return _value; }
    void setValue(mongo::idl::test::StringEnumEnum value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::StringEnumEnum _value;
    bool _hasValue : 1;
};

/**
 * mock
 */
class StructWithEnum {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField1oFieldName = "field1o"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kField2oFieldName = "field2o"_sd;
    static constexpr auto kFieldDefaultFieldName = "fieldDefault"_sd;

    StructWithEnum();
    StructWithEnum(mongo::idl::import::IntEnum field1, mongo::idl::test::StringEnumEnum field2);

    static StructWithEnum parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    mongo::idl::import::IntEnum getField1() const { return _field1; }
    void setField1(mongo::idl::import::IntEnum value) & {  _field1 = std::move(value); _hasField1 = true; }

    mongo::idl::test::StringEnumEnum getField2() const { return _field2; }
    void setField2(mongo::idl::test::StringEnumEnum value) & {  _field2 = std::move(value); _hasField2 = true; }

    const boost::optional<mongo::idl::import::IntEnum> getField1o() const& { return _field1o; }
    void getField1o() && = delete;
    void setField1o(boost::optional<mongo::idl::import::IntEnum> value) & {  _field1o = std::move(value);  }

    const boost::optional<mongo::idl::test::StringEnumEnum> getField2o() const& { return _field2o; }
    void getField2o() && = delete;
    void setField2o(boost::optional<mongo::idl::test::StringEnumEnum> value) & {  _field2o = std::move(value);  }

    mongo::idl::test::StringEnumEnum getFieldDefault() const { return _fieldDefault; }
    void setFieldDefault(mongo::idl::test::StringEnumEnum value) & {  _fieldDefault = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::import::IntEnum _field1;
    mongo::idl::test::StringEnumEnum _field2;
    boost::optional<mongo::idl::import::IntEnum> _field1o;
    boost::optional<mongo::idl::test::StringEnumEnum> _field2o;
    mongo::idl::test::StringEnumEnum _fieldDefault{mongo::idl::test::StringEnumEnum::s1};
    bool _hasField1 : 1;
    bool _hasField2 : 1;
};

/**
 * UnitTest for a single variant which accepts int or string
 */
class One_variant {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_variant();
    One_variant(stdx::variant<std::int32_t, std::string> value);

    static One_variant parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const stdx::variant<std::int32_t, std::string>& getValue() const { return _value; }
    void setValue(stdx::variant<std::int32_t, std::string> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    stdx::variant<std::int32_t, std::string> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single variant with an alternative type which has multiple BSON serialization types
 */
class One_variant_safeInt {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_variant_safeInt();
    One_variant_safeInt(stdx::variant<std::int32_t, std::string> value);

    static One_variant_safeInt parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const stdx::variant<std::int32_t, std::string>& getValue() const { return _value; }
    void setValue(stdx::variant<std::int32_t, std::string> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    stdx::variant<std::int32_t, std::string> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single variant which accepts string, doc, or array of string
 */
class One_variant_compound {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_variant_compound();
    One_variant_compound(stdx::variant<std::string, mongo::BSONObj, std::vector<std::string>> value);

    static One_variant_compound parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const stdx::variant<std::string, mongo::BSONObj, std::vector<std::string>>& getValue() const { return _value; }
    void setValue(stdx::variant<std::string, mongo::BSONObj, std::vector<std::string>> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    stdx::variant<std::string, mongo::BSONObj, std::vector<std::string>> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single variant which accepts an int or a struct
 */
class One_variant_struct {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_variant_struct();
    One_variant_struct(stdx::variant<std::int32_t, mongo::idl::import::One_string> value);

    static One_variant_struct parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const stdx::variant<std::int32_t, mongo::idl::import::One_string>& getValue() const { return _value; }
    void setValue(stdx::variant<std::int32_t, mongo::idl::import::One_string> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    stdx::variant<std::int32_t, mongo::idl::import::One_string> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single variant which accepts a string or array of safeInt
 */
class One_variant_safeInt_array {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_variant_safeInt_array();
    One_variant_safeInt_array(stdx::variant<std::string, std::vector<std::int32_t>> value);

    static One_variant_safeInt_array parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const stdx::variant<std::string, std::vector<std::int32_t>>& getValue() const { return _value; }
    void setValue(stdx::variant<std::string, std::vector<std::int32_t>> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    stdx::variant<std::string, std::vector<std::int32_t>> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single variant which accepts an int or array of structs
 */
class One_variant_struct_array {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_variant_struct_array();
    One_variant_struct_array(stdx::variant<std::int32_t, std::vector<mongo::idl::import::One_string>> value);

    static One_variant_struct_array parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const stdx::variant<std::int32_t, std::vector<mongo::idl::import::One_string>>& getValue() const { return _value; }
    void setValue(stdx::variant<std::int32_t, std::vector<mongo::idl::import::One_string>> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    stdx::variant<std::int32_t, std::vector<mongo::idl::import::One_string>> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single variant which accepts array of int or array of string
 */
class One_variant_two_arrays {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_variant_two_arrays();
    One_variant_two_arrays(stdx::variant<std::vector<std::int32_t>, std::vector<std::string>> value);

    static One_variant_two_arrays parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const stdx::variant<std::vector<std::int32_t>, std::vector<std::string>>& getValue() const { return _value; }
    void setValue(stdx::variant<std::vector<std::int32_t>, std::vector<std::string>> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    stdx::variant<std::vector<std::int32_t>, std::vector<std::string>> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single optional variant
 */
class One_variant_optional {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_variant_optional();

    static One_variant_optional parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const boost::optional<stdx::variant<std::int32_t, std::string>>& getValue() const& { return _value; }
    void getValue() && = delete;
    void setValue(boost::optional<stdx::variant<std::int32_t, std::string>> value) & {  _value = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    boost::optional<stdx::variant<std::int32_t, std::string>> _value;
};

/**
 * UnitTest for a struct with two variant fields
 */
class Two_variants {
public:
    static constexpr auto kValue0FieldName = "value0"_sd;
    static constexpr auto kValue1FieldName = "value1"_sd;

    Two_variants();
    Two_variants(stdx::variant<std::int32_t, std::string> value0, stdx::variant<mongo::BSONObj, std::vector<std::string>> value1);

    static Two_variants parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const stdx::variant<std::int32_t, std::string>& getValue0() const { return _value0; }
    void setValue0(stdx::variant<std::int32_t, std::string> value) & {  _value0 = std::move(value); _hasValue0 = true; }

    const stdx::variant<mongo::BSONObj, std::vector<std::string>>& getValue1() const { return _value1; }
    void setValue1(stdx::variant<mongo::BSONObj, std::vector<std::string>> value) & {  _value1 = std::move(value); _hasValue1 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    stdx::variant<std::int32_t, std::string> _value0;
    stdx::variant<mongo::BSONObj, std::vector<std::string>> _value1;
    bool _hasValue0 : 1;
    bool _hasValue1 : 1;
};

/**
 * Struct with chained variant
 */
class Chained_struct_variant {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kOne_variant_compoundFieldName = "one_variant_compound"_sd;
    static constexpr auto kValueFieldName = "value"_sd;

    Chained_struct_variant();
    Chained_struct_variant(std::string field1);

    static Chained_struct_variant parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * UnitTest for a single variant which accepts string, doc, or array of string
     */
    const mongo::idl::test::One_variant_compound& getOne_variant_compound() const { return _one_variant_compound; }
    mongo::idl::test::One_variant_compound& getOne_variant_compound() { return _one_variant_compound; }
    void setOne_variant_compound(mongo::idl::test::One_variant_compound value) & {  _one_variant_compound = std::move(value);  }

    const StringData getField1() const& { return _field1; }
    void getField1() && = delete;
    void setField1(StringData value) & { auto _tmpValue = value.toString();  _field1 = std::move(_tmpValue); _hasField1 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::One_variant_compound _one_variant_compound;
    std::string _field1;
    bool _hasField1 : 1;
};

/**
 * Struct with inline chained variant
 */
class Chained_struct_variant_inline {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kOne_variant_compoundFieldName = "one_variant_compound"_sd;
    static constexpr auto kValueFieldName = "value"_sd;

    Chained_struct_variant_inline();
    Chained_struct_variant_inline(std::string field1);

    static Chained_struct_variant_inline parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * UnitTest for a single variant which accepts string, doc, or array of string
     */
    const mongo::idl::test::One_variant_compound& getOne_variant_compound() const { return _one_variant_compound; }
    mongo::idl::test::One_variant_compound& getOne_variant_compound() { return _one_variant_compound; }
    void setOne_variant_compound(mongo::idl::test::One_variant_compound value) & {  _one_variant_compound = std::move(value);  }

    const  stdx::variant<std::string, mongo::BSONObj, std::vector<std::string>>& getValue() const { return _one_variant_compound.getValue(); }
    const StringData getField1() const& { return _field1; }
    void getField1() && = delete;
    void setField1(StringData value) & { auto _tmpValue = value.toString();  _field1 = std::move(_tmpValue); _hasField1 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::One_variant_compound _one_variant_compound;
    std::string _field1;
    bool _hasField1 : 1;
};

/**
 * Struct with chained variant that has a struct alternative type
 */
class Chained_struct_variant_struct {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kOne_variant_structFieldName = "one_variant_struct"_sd;
    static constexpr auto kValueFieldName = "value"_sd;

    Chained_struct_variant_struct();
    Chained_struct_variant_struct(std::string field1);

    static Chained_struct_variant_struct parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * UnitTest for a single variant which accepts an int or a struct
     */
    const mongo::idl::test::One_variant_struct& getOne_variant_struct() const { return _one_variant_struct; }
    mongo::idl::test::One_variant_struct& getOne_variant_struct() { return _one_variant_struct; }
    void setOne_variant_struct(mongo::idl::test::One_variant_struct value) & {  _one_variant_struct = std::move(value);  }

    const StringData getField1() const& { return _field1; }
    void getField1() && = delete;
    void setField1(StringData value) & { auto _tmpValue = value.toString();  _field1 = std::move(_tmpValue); _hasField1 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::One_variant_struct _one_variant_struct;
    std::string _field1;
    bool _hasField1 : 1;
};

/**
 * Struct with inline chained variant that has a struct alternative type
 */
class Chained_struct_variant_struct_inline {
public:
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kOne_variant_structFieldName = "one_variant_struct"_sd;
    static constexpr auto kValueFieldName = "value"_sd;

    Chained_struct_variant_struct_inline();
    Chained_struct_variant_struct_inline(std::string field1);

    static Chained_struct_variant_struct_inline parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * UnitTest for a single variant which accepts an int or a struct
     */
    const mongo::idl::test::One_variant_struct& getOne_variant_struct() const { return _one_variant_struct; }
    mongo::idl::test::One_variant_struct& getOne_variant_struct() { return _one_variant_struct; }
    void setOne_variant_struct(mongo::idl::test::One_variant_struct value) & {  _one_variant_struct = std::move(value);  }

    const  stdx::variant<std::int32_t, mongo::idl::import::One_string>& getValue() const { return _one_variant_struct.getValue(); }
    const StringData getField1() const& { return _field1; }
    void getField1() && = delete;
    void setField1(StringData value) & { auto _tmpValue = value.toString();  _field1 = std::move(_tmpValue); _hasField1 = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::idl::test::One_variant_struct _one_variant_struct;
    std::string _field1;
    bool _hasField1 : 1;
};

/**
 * Struct using basic range validators on ints
 */
class Int_basic_ranges {
public:
    static constexpr auto kByte_range_intFieldName = "byte_range_int"_sd;
    static constexpr auto kNegative_intFieldName = "negative_int"_sd;
    static constexpr auto kNon_negative_intFieldName = "non_negative_int"_sd;
    static constexpr auto kNon_positive_intFieldName = "non_positive_int"_sd;
    static constexpr auto kPositive_intFieldName = "positive_int"_sd;
    static constexpr auto kRange_intFieldName = "range_int"_sd;

    Int_basic_ranges();
    Int_basic_ranges(std::int32_t positive_int, std::int32_t negative_int, std::int32_t non_negative_int, std::int32_t non_positive_int, std::int32_t byte_range_int, std::int32_t range_int);

    static Int_basic_ranges parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getPositive_int() const { return _positive_int; }
    void setPositive_int(std::int32_t value) & { validatePositive_int(value); _positive_int = std::move(value); _hasPositive_int = true; }

    std::int32_t getNegative_int() const { return _negative_int; }
    void setNegative_int(std::int32_t value) & { validateNegative_int(value); _negative_int = std::move(value); _hasNegative_int = true; }

    std::int32_t getNon_negative_int() const { return _non_negative_int; }
    void setNon_negative_int(std::int32_t value) & { validateNon_negative_int(value); _non_negative_int = std::move(value); _hasNon_negative_int = true; }

    std::int32_t getNon_positive_int() const { return _non_positive_int; }
    void setNon_positive_int(std::int32_t value) & { validateNon_positive_int(value); _non_positive_int = std::move(value); _hasNon_positive_int = true; }

    std::int32_t getByte_range_int() const { return _byte_range_int; }
    void setByte_range_int(std::int32_t value) & { validateByte_range_int(value); _byte_range_int = std::move(value); _hasByte_range_int = true; }

    std::int32_t getRange_int() const { return _range_int; }
    void setRange_int(std::int32_t value) & { validateRange_int(value); _range_int = std::move(value); _hasRange_int = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    void validatePositive_int(std::int32_t value);
    void validatePositive_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateNegative_int(std::int32_t value);
    void validateNegative_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateNon_negative_int(std::int32_t value);
    void validateNon_negative_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateNon_positive_int(std::int32_t value);
    void validateNon_positive_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateByte_range_int(std::int32_t value);
    void validateByte_range_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateRange_int(std::int32_t value);
    void validateRange_int(IDLParserErrorContext& ctxt, std::int32_t value);

private:
    std::int32_t _positive_int;
    std::int32_t _negative_int;
    std::int32_t _non_negative_int;
    std::int32_t _non_positive_int;
    std::int32_t _byte_range_int;
    std::int32_t _range_int;
    bool _hasPositive_int : 1;
    bool _hasNegative_int : 1;
    bool _hasNon_negative_int : 1;
    bool _hasNon_positive_int : 1;
    bool _hasByte_range_int : 1;
    bool _hasRange_int : 1;
};

/**
 * Struct using basic range validators on doubles
 */
class Double_basic_ranges {
public:
    static constexpr auto kNegative_doubleFieldName = "negative_double"_sd;
    static constexpr auto kNon_negative_doubleFieldName = "non_negative_double"_sd;
    static constexpr auto kNon_positive_doubleFieldName = "non_positive_double"_sd;
    static constexpr auto kPositive_doubleFieldName = "positive_double"_sd;
    static constexpr auto kRange_doubleFieldName = "range_double"_sd;

    Double_basic_ranges();
    Double_basic_ranges(double positive_double, double negative_double, double non_negative_double, double non_positive_double, double range_double);

    static Double_basic_ranges parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    double getPositive_double() const { return _positive_double; }
    void setPositive_double(double value) & { validatePositive_double(value); _positive_double = std::move(value); _hasPositive_double = true; }

    double getNegative_double() const { return _negative_double; }
    void setNegative_double(double value) & { validateNegative_double(value); _negative_double = std::move(value); _hasNegative_double = true; }

    double getNon_negative_double() const { return _non_negative_double; }
    void setNon_negative_double(double value) & { validateNon_negative_double(value); _non_negative_double = std::move(value); _hasNon_negative_double = true; }

    double getNon_positive_double() const { return _non_positive_double; }
    void setNon_positive_double(double value) & { validateNon_positive_double(value); _non_positive_double = std::move(value); _hasNon_positive_double = true; }

    double getRange_double() const { return _range_double; }
    void setRange_double(double value) & { validateRange_double(value); _range_double = std::move(value); _hasRange_double = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    void validatePositive_double(double value);
    void validatePositive_double(IDLParserErrorContext& ctxt, double value);

    void validateNegative_double(double value);
    void validateNegative_double(IDLParserErrorContext& ctxt, double value);

    void validateNon_negative_double(double value);
    void validateNon_negative_double(IDLParserErrorContext& ctxt, double value);

    void validateNon_positive_double(double value);
    void validateNon_positive_double(IDLParserErrorContext& ctxt, double value);

    void validateRange_double(double value);
    void validateRange_double(IDLParserErrorContext& ctxt, double value);

private:
    double _positive_double;
    double _negative_double;
    double _non_negative_double;
    double _non_positive_double;
    double _range_double;
    bool _hasPositive_double : 1;
    bool _hasNegative_double : 1;
    bool _hasNon_negative_double : 1;
    bool _hasNon_positive_double : 1;
    bool _hasRange_double : 1;
};

/**
 * Struct using fields with callback validators
 */
class Callback_validators {
public:
    static constexpr auto kDouble_nearly_intFieldName = "double_nearly_int"_sd;
    static constexpr auto kInt_evenFieldName = "int_even"_sd;
    static constexpr auto kString_starts_with_xFieldName = "string_starts_with_x"_sd;
    static constexpr auto kString_starts_with_x2FieldName = "string_starts_with_x2"_sd;

    Callback_validators();
    Callback_validators(std::int32_t int_even, double double_nearly_int, std::string string_starts_with_x);

    static Callback_validators parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getInt_even() const { return _int_even; }
    void setInt_even(std::int32_t value) & { validateInt_even(value); _int_even = std::move(value); _hasInt_even = true; }

    double getDouble_nearly_int() const { return _double_nearly_int; }
    void setDouble_nearly_int(double value) & { validateDouble_nearly_int(value); _double_nearly_int = std::move(value); _hasDouble_nearly_int = true; }

    const StringData getString_starts_with_x() const& { return _string_starts_with_x; }
    void getString_starts_with_x() && = delete;
    void setString_starts_with_x(StringData value) & { auto _tmpValue = value.toString(); validateString_starts_with_x(_tmpValue); _string_starts_with_x = std::move(_tmpValue); _hasString_starts_with_x = true; }

    const boost::optional<StringData> getString_starts_with_x2() const& { return boost::optional<StringData>{_string_starts_with_x2}; }
    void getString_starts_with_x2() && = delete;
    void setString_starts_with_x2(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        validateString_starts_with_x2(_tmpValue);
        _string_starts_with_x2 = std::move(_tmpValue);
    } else {
        _string_starts_with_x2 = boost::none;
    }
      }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    void validateInt_even(std::int32_t value);
    void validateInt_even(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateDouble_nearly_int(double value);
    void validateDouble_nearly_int(IDLParserErrorContext& ctxt, double value);

    void validateString_starts_with_x(const std::string& value);
    void validateString_starts_with_x(IDLParserErrorContext& ctxt, const std::string& value);

    void validateString_starts_with_x2(const std::string& value);
    void validateString_starts_with_x2(IDLParserErrorContext& ctxt, const std::string& value);

private:
    std::int32_t _int_even;
    double _double_nearly_int;
    std::string _string_starts_with_x;
    boost::optional<std::string> _string_starts_with_x2;
    bool _hasInt_even : 1;
    bool _hasDouble_nearly_int : 1;
    bool _hasString_starts_with_x : 1;
};

/**
 * Uses a chained struct that includes fields with validators
 */
class Chained_validators {
public:
    static constexpr auto kByte_range_intFieldName = "byte_range_int"_sd;
    static constexpr auto kInt_basic_rangesFieldName = "int_basic_ranges"_sd;
    static constexpr auto kNegative_intFieldName = "negative_int"_sd;
    static constexpr auto kNon_negative_intFieldName = "non_negative_int"_sd;
    static constexpr auto kNon_positive_intFieldName = "non_positive_int"_sd;
    static constexpr auto kPositive_intFieldName = "positive_int"_sd;
    static constexpr auto kRange_intFieldName = "range_int"_sd;

    Chained_validators();

    static Chained_validators parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * Struct using basic range validators on ints
     */
    const mongo::idl::test::Int_basic_ranges& getInt_basic_ranges() const { return _int_basic_ranges; }
    mongo::idl::test::Int_basic_ranges& getInt_basic_ranges() { return _int_basic_ranges; }
    void setInt_basic_ranges(mongo::idl::test::Int_basic_ranges value) & {  _int_basic_ranges = std::move(value);  }

     std::int32_t getPositive_int() const { return _int_basic_ranges.getPositive_int(); }
     std::int32_t getNegative_int() const { return _int_basic_ranges.getNegative_int(); }
     std::int32_t getNon_negative_int() const { return _int_basic_ranges.getNon_negative_int(); }
     std::int32_t getNon_positive_int() const { return _int_basic_ranges.getNon_positive_int(); }
     std::int32_t getByte_range_int() const { return _int_basic_ranges.getByte_range_int(); }
     std::int32_t getRange_int() const { return _int_basic_ranges.getRange_int(); }
protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    void validatePositive_int(std::int32_t value);
    void validatePositive_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateNegative_int(std::int32_t value);
    void validateNegative_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateNon_negative_int(std::int32_t value);
    void validateNon_negative_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateNon_positive_int(std::int32_t value);
    void validateNon_positive_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateByte_range_int(std::int32_t value);
    void validateByte_range_int(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateRange_int(std::int32_t value);
    void validateRange_int(IDLParserErrorContext& ctxt, std::int32_t value);

private:
    mongo::idl::test::Int_basic_ranges _int_basic_ranges;
};

/**
 * Struct using fields with unusual callback validators
 */
class Unusual_callback_validators {
public:
    static constexpr auto kArray_of_intFieldName = "array_of_int"_sd;
    static constexpr auto kArray_of_int_optionalFieldName = "array_of_int_optional"_sd;
    static constexpr auto kInt_evenFieldName = "int_even"_sd;
    static constexpr auto kOne_intFieldName = "one_int"_sd;
    static constexpr auto kOne_int_arrayFieldName = "one_int_array"_sd;
    static constexpr auto kOne_int_optionalFieldName = "one_int_optional"_sd;
    static constexpr auto kString_starts_with_xFieldName = "string_starts_with_x"_sd;

    Unusual_callback_validators();
    Unusual_callback_validators(std::vector<std::int32_t> array_of_int, mongo::idl::import::One_int one_int, std::vector<mongo::idl::import::One_int> one_int_array);

    static Unusual_callback_validators parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const boost::optional<std::int32_t> getInt_even() const& { return _int_even; }
    void getInt_even() && = delete;
    void setInt_even(boost::optional<std::int32_t> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get();
        validateInt_even(_tmpValue);
        _int_even = std::move(_tmpValue);
    } else {
        _int_even = boost::none;
    }
      }

    const boost::optional<StringData> getString_starts_with_x() const& { return boost::optional<StringData>{_string_starts_with_x}; }
    void getString_starts_with_x() && = delete;
    void setString_starts_with_x(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        validateString_starts_with_x(_tmpValue);
        _string_starts_with_x = std::move(_tmpValue);
    } else {
        _string_starts_with_x = boost::none;
    }
      }

    const std::vector<std::int32_t>& getArray_of_int() const& { return _array_of_int; }
    void getArray_of_int() && = delete;
    void setArray_of_int(std::vector<std::int32_t> value) & { validateArray_of_int(value); _array_of_int = std::move(value); _hasArray_of_int = true; }

    const boost::optional<std::vector<std::int32_t>>& getArray_of_int_optional() const& { return _array_of_int_optional; }
    void getArray_of_int_optional() && = delete;
    void setArray_of_int_optional(boost::optional<std::vector<std::int32_t>> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get();
        validateArray_of_int_optional(_tmpValue);
        _array_of_int_optional = std::move(_tmpValue);
    } else {
        _array_of_int_optional = boost::none;
    }
      }

    const mongo::idl::import::One_int& getOne_int() const { return _one_int; }
    mongo::idl::import::One_int& getOne_int() { return _one_int; }
    void setOne_int(mongo::idl::import::One_int value) & { validateOne_int(value); _one_int = std::move(value); _hasOne_int = true; }

    const boost::optional<mongo::idl::import::One_int>& getOne_int_optional() const& { return _one_int_optional; }
    void getOne_int_optional() && = delete;
    void setOne_int_optional(boost::optional<mongo::idl::import::One_int> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get();
        validateOne_int_optional(_tmpValue);
        _one_int_optional = std::move(_tmpValue);
    } else {
        _one_int_optional = boost::none;
    }
      }

    const std::vector<mongo::idl::import::One_int>& getOne_int_array() const& { return _one_int_array; }
    void getOne_int_array() && = delete;
    void setOne_int_array(std::vector<mongo::idl::import::One_int> value) & { validateOne_int_array(value); _one_int_array = std::move(value); _hasOne_int_array = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    void validateInt_even(std::int32_t value);
    void validateInt_even(IDLParserErrorContext& ctxt, std::int32_t value);

    void validateString_starts_with_x(const std::string& value);
    void validateString_starts_with_x(IDLParserErrorContext& ctxt, const std::string& value);

    void validateArray_of_int(const std::vector<std::int32_t>& value);
    void validateArray_of_int(IDLParserErrorContext& ctxt, const std::vector<std::int32_t>& value);

    void validateArray_of_int_optional(const std::vector<std::int32_t>& value);
    void validateArray_of_int_optional(IDLParserErrorContext& ctxt, const std::vector<std::int32_t>& value);

    void validateOne_int(const mongo::idl::import::One_int& value);
    void validateOne_int(IDLParserErrorContext& ctxt, const mongo::idl::import::One_int& value);

    void validateOne_int_optional(const mongo::idl::import::One_int& value);
    void validateOne_int_optional(IDLParserErrorContext& ctxt, const mongo::idl::import::One_int& value);

    void validateOne_int_array(const std::vector<mongo::idl::import::One_int>& value);
    void validateOne_int_array(IDLParserErrorContext& ctxt, const std::vector<mongo::idl::import::One_int>& value);

private:
    boost::optional<std::int32_t> _int_even;
    boost::optional<std::string> _string_starts_with_x;
    std::vector<std::int32_t> _array_of_int;
    boost::optional<std::vector<std::int32_t>> _array_of_int_optional;
    mongo::idl::import::One_int _one_int;
    boost::optional<mongo::idl::import::One_int> _one_int_optional;
    std::vector<mongo::idl::import::One_int> _one_int_array;
    bool _hasArray_of_int : 1;
    bool _hasOne_int : 1;
    bool _hasOne_int_array : 1;
};

/**
 * UnitTest for a basic ignored command
 */
class BasicIgnoredCommand {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kCommandName = "BasicIgnoredCommand"_sd;

    BasicIgnoredCommand();
    BasicIgnoredCommand(std::int32_t field1, std::string field2);

    static BasicIgnoredCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static BasicIgnoredCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(StringData value) & { auto _tmpValue = value.toString();  _field2 = std::move(_tmpValue); _hasField2 = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::int32_t _field1;
    std::string _field2;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasDbName : 1;
};

/**
 * UnitTest for a basic concatenate_with_db command
 */
class BasicConcatenateWithDbCommand {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kCommandName = "BasicConcatenateWithDbCommand"_sd;

    explicit BasicConcatenateWithDbCommand(NamespaceString nss);
    BasicConcatenateWithDbCommand(NamespaceString nss, std::int32_t field1, std::string field2);

    static BasicConcatenateWithDbCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static BasicConcatenateWithDbCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceString& getNamespace() const { return _nss; }

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(StringData value) & { auto _tmpValue = value.toString();  _field2 = std::move(_tmpValue); _hasField2 = true; }

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

    std::int32_t _field1;
    std::string _field2;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasDbName : 1;
};

/**
 * UnitTest for a basic concatenate_with_db_or_uuid command
 */
class BasicConcatenateWithDbOrUUIDCommand {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kCommandName = "BasicConcatenateWithDbOrUUIDCommand"_sd;

    explicit BasicConcatenateWithDbOrUUIDCommand(NamespaceStringOrUUID nssOrUUID);
    BasicConcatenateWithDbOrUUIDCommand(NamespaceStringOrUUID nssOrUUID, std::int32_t field1, std::string field2);

    static BasicConcatenateWithDbOrUUIDCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static BasicConcatenateWithDbOrUUIDCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceStringOrUUID& getNamespaceOrUUID() const { return _nssOrUUID; }

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(StringData value) & { auto _tmpValue = value.toString();  _field2 = std::move(_tmpValue); _hasField2 = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    NamespaceStringOrUUID _nssOrUUID;

    std::int32_t _field1;
    std::string _field2;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasDbName : 1;
};

/**
 * UnitTest for a basic concatenate_with_db_or_uuid command
 */
class BasicNamespaceConstGetterCommand {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kCommandName = "BasicNamespaceConstGetterCommand"_sd;

    explicit BasicNamespaceConstGetterCommand(NamespaceStringOrUUID nssOrUUID);
    BasicNamespaceConstGetterCommand(NamespaceStringOrUUID nssOrUUID, std::int32_t field1);

    static BasicNamespaceConstGetterCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static BasicNamespaceConstGetterCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceStringOrUUID& getNamespaceOrUUID() const { return _nssOrUUID; }
    NamespaceStringOrUUID& getNamespaceOrUUID() { return _nssOrUUID; }

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    NamespaceStringOrUUID _nssOrUUID;

    std::int32_t _field1;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasDbName : 1;
};

/**
 * UnitTest for a command that has a field that is special known generic command field
 */
class KnownFieldCommand {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kMaxTimeMSFieldName = "maxTimeMS"_sd;
    static constexpr auto kCommandName = "KnownFieldCommand"_sd;

    explicit KnownFieldCommand(NamespaceString nss);
    KnownFieldCommand(NamespaceString nss, std::int32_t field1, std::int32_t maxTimeMS);

    static KnownFieldCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static KnownFieldCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceString& getNamespace() const { return _nss; }

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    std::int32_t getMaxTimeMS() const { return _maxTimeMS; }
    void setMaxTimeMS(std::int32_t value) & {  _maxTimeMS = std::move(value); _hasMaxTimeMS = true; }

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

    std::int32_t _field1;
    std::int32_t _maxTimeMS;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasMaxTimeMS : 1;
    bool _hasDbName : 1;
};

/**
 * UnitTest for a basic command with fields marked with supports_doc_sequence
 */
class DocSequenceCommand {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kObjectsFieldName = "objects"_sd;
    static constexpr auto kObjects_customFieldName = "objects_custom"_sd;
    static constexpr auto kStructsFieldName = "structs"_sd;
    static constexpr auto kCommandName = "DocSequenceCommand"_sd;

    explicit DocSequenceCommand(NamespaceString nss);
    DocSequenceCommand(NamespaceString nss, std::int32_t field1, std::string field2, std::vector<mongo::idl::import::One_string> structs, std::vector<mongo::BSONObj> objects);

    static DocSequenceCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static DocSequenceCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceString& getNamespace() const { return _nss; }

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(StringData value) & { auto _tmpValue = value.toString();  _field2 = std::move(_tmpValue); _hasField2 = true; }

    const std::vector<mongo::idl::import::One_string>& getStructs() const& { return _structs; }
    void getStructs() && = delete;
    void setStructs(std::vector<mongo::idl::import::One_string> value) & {  _structs = std::move(value); _hasStructs = true; }

    const std::vector<mongo::BSONObj>& getObjects() const& { return _objects; }
    void getObjects() && = delete;
    void setObjects(std::vector<mongo::BSONObj> value) & {  _objects = std::move(value); _hasObjects = true; }

    const boost::optional<std::vector<mongo::ObjectBasicType>>& getObjects_custom() const& { return _objects_custom; }
    void getObjects_custom() && = delete;
    void setObjects_custom(boost::optional<std::vector<mongo::ObjectBasicType>> value) & {  _objects_custom = std::move(value);  }

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

    std::int32_t _field1;
    std::string _field2;
    std::vector<mongo::idl::import::One_string> _structs;
    std::vector<mongo::BSONObj> _objects;
    boost::optional<std::vector<mongo::ObjectBasicType>> _objects_custom;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasStructs : 1;
    bool _hasObjects : 1;
    bool _hasDbName : 1;
};

/**
 * UnitTest for a basic command with fields marked with supports_doc_sequence and non-strict parsing
 */
class DocSequenceCommandNonStrict {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kField2FieldName = "field2"_sd;
    static constexpr auto kObjectsFieldName = "objects"_sd;
    static constexpr auto kObjects_customFieldName = "objects_custom"_sd;
    static constexpr auto kStructsFieldName = "structs"_sd;
    static constexpr auto kCommandName = "DocSequenceCommandNonStrict"_sd;

    explicit DocSequenceCommandNonStrict(NamespaceString nss);
    DocSequenceCommandNonStrict(NamespaceString nss, std::int32_t field1, std::string field2, std::vector<mongo::idl::import::One_string> structs, std::vector<mongo::BSONObj> objects);

    static DocSequenceCommandNonStrict parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static DocSequenceCommandNonStrict parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceString& getNamespace() const { return _nss; }

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getField2() const& { return _field2; }
    void getField2() && = delete;
    void setField2(StringData value) & { auto _tmpValue = value.toString();  _field2 = std::move(_tmpValue); _hasField2 = true; }

    const std::vector<mongo::idl::import::One_string>& getStructs() const& { return _structs; }
    void getStructs() && = delete;
    void setStructs(std::vector<mongo::idl::import::One_string> value) & {  _structs = std::move(value); _hasStructs = true; }

    const std::vector<mongo::BSONObj>& getObjects() const& { return _objects; }
    void getObjects() && = delete;
    void setObjects(std::vector<mongo::BSONObj> value) & {  _objects = std::move(value); _hasObjects = true; }

    const boost::optional<std::vector<mongo::ObjectBasicType>>& getObjects_custom() const& { return _objects_custom; }
    void getObjects_custom() && = delete;
    void setObjects_custom(boost::optional<std::vector<mongo::ObjectBasicType>> value) & {  _objects_custom = std::move(value);  }

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

    std::int32_t _field1;
    std::string _field2;
    std::vector<mongo::idl::import::One_string> _structs;
    std::vector<mongo::BSONObj> _objects;
    boost::optional<std::vector<mongo::ObjectBasicType>> _objects_custom;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasField2 : 1;
    bool _hasStructs : 1;
    bool _hasObjects : 1;
    bool _hasDbName : 1;
};

/**
 * Chained command with chained types, structs, and fields
 */
class Chained_command_type_mixed {
public:
    using Reply = void;
    static constexpr auto kAnotherChainedTypeFieldName = "AnotherChainedType"_sd;
    static constexpr auto kChainedStringBasicTypeFieldName = "chained_string_basic_type"_sd;
    static constexpr auto kChained_typeFieldName = "ChainedType"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField3FieldName = "field3"_sd;
    static constexpr auto kStringFieldFieldName = "stringField"_sd;
    static constexpr auto kCommandName = "chained_command_type_mixed"_sd;

    explicit Chained_command_type_mixed(NamespaceString nss);
    Chained_command_type_mixed(NamespaceString nss, std::int32_t field3);

    static Chained_command_type_mixed parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static Chained_command_type_mixed parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const NamespaceString& getNamespace() const { return _nss; }

    /**
     * An Chain Type to test chaining
     */
    const mongo::ChainedType& getChained_type() const { return _chained_type; }
    void setChained_type(mongo::ChainedType value) & {  _chained_type = std::move(value);  }

    /**
     * Another Chain Type to test chaining
     */
    const mongo::AnotherChainedType& getAnotherChainedType() const { return _anotherChainedType; }
    void setAnotherChainedType(mongo::AnotherChainedType value) & {  _anotherChainedType = std::move(value);  }

    /**
     * Base struct type for a chained string
     */
    const mongo::idl::test::Chained_string_basic_type& getChainedStringBasicType() const { return _chainedStringBasicType; }
    mongo::idl::test::Chained_string_basic_type& getChainedStringBasicType() { return _chainedStringBasicType; }
    void setChainedStringBasicType(mongo::idl::test::Chained_string_basic_type value) & {  _chainedStringBasicType = std::move(value);  }

    const  StringData getStringField() const { return _chainedStringBasicType.getStringField(); }
    std::int32_t getField3() const { return _field3; }
    void setField3(std::int32_t value) & {  _field3 = std::move(value); _hasField3 = true; }

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

    mongo::ChainedType _chained_type;
    mongo::AnotherChainedType _anotherChainedType;
    mongo::idl::test::Chained_string_basic_type _chainedStringBasicType;
    std::int32_t _field3;
    std::string _dbName;
    bool _hasField3 : 1;
    bool _hasDbName : 1;
};

/**
 * Command with custom type string
 */
class CommandTypeStringCommand {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "CommandTypeStringCommand"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kCommandName = "CommandTypeStringCommand"_sd;

    explicit CommandTypeStringCommand(std::string commandParameter);
    explicit CommandTypeStringCommand(std::string commandParameter, std::int32_t field1);

    static CommandTypeStringCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandTypeStringCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const StringData getCommandParameter() const& { return _commandParameter; }
    void getCommandParameter() && = delete;

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    std::string _commandParameter;

    std::int32_t _field1;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasDbName : 1;
};

/**
 * Command with just an array of object parameter
 */
class CommandTypeArrayObjectCommand {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "CommandTypeArrayObjectCommand"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandTypeArrayObjectCommand"_sd;

    explicit CommandTypeArrayObjectCommand(std::vector<mongo::BSONObj> commandParameter);

    static CommandTypeArrayObjectCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandTypeArrayObjectCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const std::vector<mongo::BSONObj>& getCommandParameter() const& { return _commandParameter; }
    void getCommandParameter() && = delete;

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    std::vector<mongo::BSONObj> _commandParameter;

    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * Command with just a struct parameter
 */
class CommandTypeStructCommand {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "CommandTypeStructCommand"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandTypeStructCommand"_sd;

    explicit CommandTypeStructCommand(mongo::idl::import::One_string commandParameter);

    static CommandTypeStructCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandTypeStructCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const mongo::idl::import::One_string& getCommandParameter() const { return _commandParameter; }
    mongo::idl::import::One_string& getCommandParameter() { return _commandParameter; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    mongo::idl::import::One_string _commandParameter;

    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * Command with just an array of struct parameter
 */
class CommandTypeArrayStructCommand {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "CommandTypeArrayStructCommand"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandTypeArrayStructCommand"_sd;

    explicit CommandTypeArrayStructCommand(std::vector<mongo::idl::import::One_string> commandParameter);

    static CommandTypeArrayStructCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandTypeArrayStructCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const std::vector<mongo::idl::import::One_string>& getCommandParameter() const& { return _commandParameter; }
    void getCommandParameter() && = delete;

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    std::vector<mongo::idl::import::One_string> _commandParameter;

    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * Command with a struct type that has a validator
 */
class CommandTypeStructValidatorCommand {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "CommandTypeStructValidatorCommand"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandTypeStructValidatorCommand"_sd;

    explicit CommandTypeStructValidatorCommand(mongo::idl::test::Int_basic_ranges commandParameter);

    static CommandTypeStructValidatorCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandTypeStructValidatorCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const mongo::idl::test::Int_basic_ranges& getCommandParameter() const { return _commandParameter; }
    mongo::idl::test::Int_basic_ranges& getCommandParameter() { return _commandParameter; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    mongo::idl::test::Int_basic_ranges _commandParameter;

    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * Command with a variant parameter
 */
class CommandTypeVariantCommand {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "CommandTypeVariantCommand"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandTypeVariantCommand"_sd;

    explicit CommandTypeVariantCommand(stdx::variant<std::int32_t, std::string, std::vector<std::string>> commandParameter);

    static CommandTypeVariantCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandTypeVariantCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const stdx::variant<std::int32_t, std::string, std::vector<std::string>>& getCommandParameter() const { return _commandParameter; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    stdx::variant<std::int32_t, std::string, std::vector<std::string>> _commandParameter;

    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * Command with a variant parameter that can be a struct
 */
class CommandTypeVariantStructCommand {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "CommandTypeVariantStructCommand"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandTypeVariantStructCommand"_sd;

    explicit CommandTypeVariantStructCommand(stdx::variant<bool, mongo::idl::import::One_string> commandParameter);

    static CommandTypeVariantStructCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandTypeVariantStructCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const stdx::variant<bool, mongo::idl::import::One_string>& getCommandParameter() const { return _commandParameter; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    stdx::variant<bool, mongo::idl::import::One_string> _commandParameter;

    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * Command with custom type string
 */
class WellNamedCommand {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "_underscore_command"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kCommandName = "_underscore_command"_sd;

    explicit WellNamedCommand(std::string commandParameter);
    explicit WellNamedCommand(std::string commandParameter, std::int32_t field1);

    static WellNamedCommand parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static WellNamedCommand parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const StringData getCommandParameter() const& { return _commandParameter; }
    void getCommandParameter() && = delete;

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    std::string _commandParameter;

    std::int32_t _field1;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasDbName : 1;
};

/**
 * Command with custom type int
 */
class Int_type_command {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "int_type_command"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kCommandName = "int_type_command"_sd;

    explicit Int_type_command(std::int32_t commandParameter);
    explicit Int_type_command(std::int32_t commandParameter, std::int32_t field1);

    static Int_type_command parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static Int_type_command parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    std::int32_t getCommandParameter() const { return _commandParameter; }

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    std::int32_t _commandParameter;

    std::int32_t _field1;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasDbName : 1;
};

/**
 * Command with custom type for array of int
 */
class Int_array_type_command {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "int_array_type_command"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kField1FieldName = "field1"_sd;
    static constexpr auto kCommandName = "int_array_type_command"_sd;

    explicit Int_array_type_command(std::vector<std::int32_t> commandParameter);
    explicit Int_array_type_command(std::vector<std::int32_t> commandParameter, std::int32_t field1);

    static Int_array_type_command parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static Int_array_type_command parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const std::vector<std::int32_t>& getCommandParameter() const& { return _commandParameter; }
    void getCommandParameter() && = delete;

    std::int32_t getField1() const { return _field1; }
    void setField1(std::int32_t value) & {  _field1 = std::move(value); _hasField1 = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    std::vector<std::int32_t> _commandParameter;

    std::int32_t _field1;
    std::string _dbName;
    bool _hasField1 : 1;
    bool _hasDbName : 1;
};

/**
 * Renamed command with validator
 */
class DoubleBasicRanges {
public:
    using Reply = void;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kNegative_doubleFieldName = "negative_double"_sd;
    static constexpr auto kPositive_doubleFieldName = "positive_double"_sd;
    static constexpr auto kCommandName = "validated_command"_sd;

    DoubleBasicRanges();
    DoubleBasicRanges(double positive_double, double negative_double);

    static DoubleBasicRanges parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static DoubleBasicRanges parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    double getPositive_double() const { return _positive_double; }
    void setPositive_double(double value) & { validatePositive_double(value); _positive_double = std::move(value); _hasPositive_double = true; }

    double getNegative_double() const { return _negative_double; }
    void setNegative_double(double value) & { validateNegative_double(value); _negative_double = std::move(value); _hasNegative_double = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    void validatePositive_double(double value);
    void validatePositive_double(IDLParserErrorContext& ctxt, double value);

    void validateNegative_double(double value);
    void validateNegative_double(IDLParserErrorContext& ctxt, double value);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    double _positive_double;
    double _negative_double;
    std::string _dbName;
    bool _hasPositive_double : 1;
    bool _hasNegative_double : 1;
    bool _hasDbName : 1;
};

/**
 * A command with its reply type specified by an IDL struct
 */
class CommandWithReplyType {
public:
    using Reply = mongo::idl::test::Reply_type_struct;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandWithReplyType"_sd;

    CommandWithReplyType();

    static CommandWithReplyType parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandWithReplyType parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * A mock command that replies with only {ok: 1}
 */
class CommandWithOkReply {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandWithOkReply"_sd;

    CommandWithOkReply();

    static CommandWithOkReply parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandWithOkReply parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * A mock command to test IDLAnyType
 */
class CommandWithAnyTypeMember {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kAnyTypeFieldFieldName = "anyTypeField"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandWithValueTypeMember"_sd;

    CommandWithAnyTypeMember();
    CommandWithAnyTypeMember(mongo::IDLAnyType anyTypeField);

    static CommandWithAnyTypeMember parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandWithAnyTypeMember parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const mongo::IDLAnyType& getAnyTypeField() const { return _anyTypeField; }
    void setAnyTypeField(mongo::IDLAnyType value) & {  _anyTypeField = std::move(value); _hasAnyTypeField = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    mongo::IDLAnyType _anyTypeField;
    std::string _dbName;
    bool _hasAnyTypeField : 1;
    bool _hasDbName : 1;
};

/**
 * A mock command to test IDLAnyTypeOwned
 */
class CommandWithAnyTypeOwnedMember {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kAnyTypeFieldFieldName = "anyTypeField"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "CommandWithAnyTypeOwnedMember"_sd;

    CommandWithAnyTypeOwnedMember();
    CommandWithAnyTypeOwnedMember(mongo::IDLAnyTypeOwned anyTypeField);

    static CommandWithAnyTypeOwnedMember parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static CommandWithAnyTypeOwnedMember parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const mongo::IDLAnyTypeOwned& getAnyTypeField() const { return _anyTypeField; }
    void setAnyTypeField(mongo::IDLAnyTypeOwned value) & {  _anyTypeField = std::move(value); _hasAnyTypeField = true; }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    mongo::IDLAnyTypeOwned _anyTypeField;
    std::string _dbName;
    bool _hasAnyTypeField : 1;
    bool _hasDbName : 1;
};

/**
 * A versioned API command with access_check and none
 */
class AccessCheckNone {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "AccessCheckNoneCommandName"_sd;

    static AuthorizationContract kAuthorizationContract;

    AccessCheckNone();

    static AccessCheckNone parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static AccessCheckNone parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * A versioned API command with access_check and simple check
 */
class AccessCheckSimpleAccessCheck {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "AccessCheckSimpleAccessCheckCommandName"_sd;

    static AuthorizationContract kAuthorizationContract;

    AccessCheckSimpleAccessCheck();

    static AccessCheckSimpleAccessCheck parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static AccessCheckSimpleAccessCheck parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * A versioned API command with access_check and privilege
 */
class AccessCheckSimplePrivilege {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "AccessCheckSimplePrivilegeCommandName"_sd;

    static AuthorizationContract kAuthorizationContract;

    AccessCheckSimplePrivilege();

    static AccessCheckSimplePrivilege parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static AccessCheckSimplePrivilege parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * A versioned API command with access_check complex
 */
class AccessCheckComplexPrivilege {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "AccessCheckComplexPrivilegeCommandName"_sd;

    static AuthorizationContract kAuthorizationContract;

    AccessCheckComplexPrivilege();

    static AccessCheckComplexPrivilege parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static AccessCheckComplexPrivilege parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * A versioned API command
 */
class APIVersion1CommandIDLName {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "APIVersion1CommandRuntimeName"_sd;

    static AuthorizationContract kAuthorizationContract;

    APIVersion1CommandIDLName();

    static APIVersion1CommandIDLName parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static APIVersion1CommandIDLName parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * A versioned API command
 */
class APIVersion1CommandCPPName2 {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "APIVersion1CommandRuntimeName2"_sd;

    static AuthorizationContract kAuthorizationContract;

    APIVersion1CommandCPPName2();

    static APIVersion1CommandCPPName2 parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static APIVersion1CommandCPPName2 parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * A versioned API command with alias
 */
class APIVersion1CommandWithAlias {
public:
    using Reply = mongo::OkReply;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "NewCommandName"_sd;
    static constexpr auto kCommandAlias = "OldCommandName"_sd;

    static AuthorizationContract kAuthorizationContract;

    APIVersion1CommandWithAlias();

    static APIVersion1CommandWithAlias parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static APIVersion1CommandWithAlias parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;


    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;



    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * UnitTest for generic arguments list
 */
class My_generic_args_list {
public:
    static bool hasField(StringData fieldName);
    static bool shouldForwardToShards(StringData fieldName);

private:
    // Map: fieldName -> shouldForwardToShards
    static const stdx::unordered_map<std::string, bool> _genericFields;

};

/**
 * UnitTest for generic reply fields list
 */
class My_generic_reply_field_list {
public:
    static bool hasField(StringData fieldName);
    static bool shouldForwardFromShards(StringData fieldName);

private:
    // Map: fieldName -> shouldForwardFromShards
    static const stdx::unordered_map<std::string, bool> _genericFields;

};


template <typename Derived>
class AccessCheckNoneCommandNameCmdVersion1Gen : public TypedCommand<Derived> {
    using _TypedCommandInvocationBase = typename TypedCommand<Derived>::InvocationBase;

public:
    using Request = AccessCheckNone;
    using Reply = mongo::OkReply;

    virtual ~AccessCheckNoneCommandNameCmdVersion1Gen() = default;

    virtual const std::set<std::string>& apiVersions() const final {
        return kApiVersions1;
    }
    virtual const std::set<std::string>& deprecatedApiVersions() const final {
        return kNoApiVersions;
    }
    const AuthorizationContract* getAuthorizationContract() const final { return &Request::kAuthorizationContract; } 

    class InvocationBaseGen : public _TypedCommandInvocationBase {
    public:
        using _TypedCommandInvocationBase::_TypedCommandInvocationBase;
        virtual Reply typedRun(OperationContext* opCtx) = 0;
        void doCheckAuthorization(OperationContext* opCtx) const final {}
    };
};

template <typename Derived>
class AccessCheckSimpleAccessCheckCommandNameCmdVersion1Gen : public TypedCommand<Derived> {
    using _TypedCommandInvocationBase = typename TypedCommand<Derived>::InvocationBase;

public:
    using Request = AccessCheckSimpleAccessCheck;
    using Reply = mongo::OkReply;

    virtual ~AccessCheckSimpleAccessCheckCommandNameCmdVersion1Gen() = default;

    virtual const std::set<std::string>& apiVersions() const final {
        return kApiVersions1;
    }
    virtual const std::set<std::string>& deprecatedApiVersions() const final {
        return kNoApiVersions;
    }
    const AuthorizationContract* getAuthorizationContract() const final { return &Request::kAuthorizationContract; } 

    class InvocationBaseGen : public _TypedCommandInvocationBase {
    public:
        using _TypedCommandInvocationBase::_TypedCommandInvocationBase;
        virtual Reply typedRun(OperationContext* opCtx) = 0;
    };
};

template <typename Derived>
class AccessCheckSimplePrivilegeCommandNameCmdVersion1Gen : public TypedCommand<Derived> {
    using _TypedCommandInvocationBase = typename TypedCommand<Derived>::InvocationBase;

public:
    using Request = AccessCheckSimplePrivilege;
    using Reply = mongo::OkReply;

    virtual ~AccessCheckSimplePrivilegeCommandNameCmdVersion1Gen() = default;

    virtual const std::set<std::string>& apiVersions() const final {
        return kApiVersions1;
    }
    virtual const std::set<std::string>& deprecatedApiVersions() const final {
        return kNoApiVersions;
    }
    const AuthorizationContract* getAuthorizationContract() const final { return &Request::kAuthorizationContract; } 

    class InvocationBaseGen : public _TypedCommandInvocationBase {
    public:
        using _TypedCommandInvocationBase::_TypedCommandInvocationBase;
        virtual Reply typedRun(OperationContext* opCtx) = 0;
    };
};

template <typename Derived>
class AccessCheckComplexPrivilegeCommandNameCmdVersion1Gen : public TypedCommand<Derived> {
    using _TypedCommandInvocationBase = typename TypedCommand<Derived>::InvocationBase;

public:
    using Request = AccessCheckComplexPrivilege;
    using Reply = mongo::OkReply;

    virtual ~AccessCheckComplexPrivilegeCommandNameCmdVersion1Gen() = default;

    virtual const std::set<std::string>& apiVersions() const final {
        return kApiVersions1;
    }
    virtual const std::set<std::string>& deprecatedApiVersions() const final {
        return kNoApiVersions;
    }
    const AuthorizationContract* getAuthorizationContract() const final { return &Request::kAuthorizationContract; } 

    class InvocationBaseGen : public _TypedCommandInvocationBase {
    public:
        using _TypedCommandInvocationBase::_TypedCommandInvocationBase;
        virtual Reply typedRun(OperationContext* opCtx) = 0;
    };
};

template <typename Derived>
class APIVersion1CommandRuntimeNameCmdVersion1Gen : public TypedCommand<Derived> {
    using _TypedCommandInvocationBase = typename TypedCommand<Derived>::InvocationBase;

public:
    using Request = APIVersion1CommandIDLName;
    using Reply = mongo::OkReply;

    virtual ~APIVersion1CommandRuntimeNameCmdVersion1Gen() = default;

    virtual const std::set<std::string>& apiVersions() const final {
        return kApiVersions1;
    }
    virtual const std::set<std::string>& deprecatedApiVersions() const final {
        return kNoApiVersions;
    }
    const AuthorizationContract* getAuthorizationContract() const final { return &Request::kAuthorizationContract; } 

    class InvocationBaseGen : public _TypedCommandInvocationBase {
    public:
        using _TypedCommandInvocationBase::_TypedCommandInvocationBase;
        virtual Reply typedRun(OperationContext* opCtx) = 0;
        void doCheckAuthorization(OperationContext* opCtx) const final {}
    };
};

template <typename Derived>
class APIVersion1CommandRuntimeName2CmdVersion1Gen : public TypedCommand<Derived> {
    using _TypedCommandInvocationBase = typename TypedCommand<Derived>::InvocationBase;

public:
    using Request = APIVersion1CommandCPPName2;
    using Reply = mongo::OkReply;

    virtual ~APIVersion1CommandRuntimeName2CmdVersion1Gen() = default;

    virtual const std::set<std::string>& apiVersions() const final {
        return kApiVersions1;
    }
    virtual const std::set<std::string>& deprecatedApiVersions() const final {
        return kNoApiVersions;
    }
    const AuthorizationContract* getAuthorizationContract() const final { return &Request::kAuthorizationContract; } 

    class InvocationBaseGen : public _TypedCommandInvocationBase {
    public:
        using _TypedCommandInvocationBase::_TypedCommandInvocationBase;
        virtual Reply typedRun(OperationContext* opCtx) = 0;
        void doCheckAuthorization(OperationContext* opCtx) const final {}
    };
};

template <typename Derived>
class NewCommandNameCmdVersion1Gen : public TypedCommand<Derived> {
    using _TypedCommandInvocationBase = typename TypedCommand<Derived>::InvocationBase;

public:
    using Request = APIVersion1CommandWithAlias;
    using Reply = mongo::OkReply;

    NewCommandNameCmdVersion1Gen(): TypedCommand<Derived>(Request::kCommandName, Request::kCommandAlias) {}

    virtual ~NewCommandNameCmdVersion1Gen() = default;

    virtual const std::set<std::string>& apiVersions() const final {
        return kApiVersions1;
    }
    virtual const std::set<std::string>& deprecatedApiVersions() const final {
        return kNoApiVersions;
    }
    const AuthorizationContract* getAuthorizationContract() const final { return &Request::kAuthorizationContract; } 

    class InvocationBaseGen : public _TypedCommandInvocationBase {
    public:
        using _TypedCommandInvocationBase::_TypedCommandInvocationBase;
        virtual Reply typedRun(OperationContext* opCtx) = 0;
        void doCheckAuthorization(OperationContext* opCtx) const final {}
    };
};
}  // namespace test
}  // namespace idl
}  // namespace mongo
