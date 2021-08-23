/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/unittest_import_gen.h --output build/opt/mongo/idl/unittest_import_gen.cpp src/mongo/idl/unittest_import.idl
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
namespace idl {
namespace import {

/**
 * An example int enum
 */
enum class IntEnum : std::int32_t {
    a0  = 0,
    b1  = 1,
    c2  = 2,
};
static constexpr uint32_t kNumIntEnum = 3;

IntEnum IntEnum_parse(const IDLParserErrorContext& ctxt, std::int32_t value);
std::int32_t IntEnum_serializer(IntEnum value);

/**
 * UnitTest for a single string
 */
class One_string {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_string();
    One_string(std::string value);

    static One_string parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getValue() const& { return _value; }
    void getValue() && = delete;
    void setValue(StringData value) & { auto _tmpValue = value.toString();  _value = std::move(_tmpValue); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_string& a, const One_string& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_string& a, const One_string& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_string& a, const One_string& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_string& a, const One_string& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_string& a, const One_string& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_string& a, const One_string& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::string _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single int
 */
class One_int {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_int();
    One_int(std::int32_t value);

    static One_int parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getValue() const { return _value; }
    void setValue(std::int32_t value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_int& a, const One_int& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_int& a, const One_int& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_int& a, const One_int& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_int& a, const One_int& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_int& a, const One_int& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_int& a, const One_int& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::int32_t _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single long
 */
class One_long {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_long();
    One_long(std::int64_t value);

    static One_long parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int64_t getValue() const { return _value; }
    void setValue(std::int64_t value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_long& a, const One_long& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_long& a, const One_long& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_long& a, const One_long& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_long& a, const One_long& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_long& a, const One_long& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_long& a, const One_long& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::int64_t _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single double
 */
class One_double {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_double();
    One_double(double value);

    static One_double parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    double getValue() const { return _value; }
    void setValue(double value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_double& a, const One_double& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_double& a, const One_double& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_double& a, const One_double& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_double& a, const One_double& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_double& a, const One_double& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_double& a, const One_double& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    double _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single decimal
 */
class One_decimal {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_decimal();
    One_decimal(mongo::Decimal128 value);

    static One_decimal parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::Decimal128& getValue() const { return _value; }
    void setValue(mongo::Decimal128 value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::Decimal128 _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single bool
 */
class One_bool {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_bool();
    One_bool(bool value);

    static One_bool parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    bool getValue() const { return _value; }
    void setValue(bool value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_bool& a, const One_bool& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_bool& a, const One_bool& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_bool& a, const One_bool& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_bool& a, const One_bool& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_bool& a, const One_bool& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_bool& a, const One_bool& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    bool _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single bindata_generic
 */
class One_bindata {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_bindata();
    One_bindata(std::vector<std::uint8_t> value);

    static One_bindata parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const ConstDataRange getValue() const& { return ConstDataRange(_value); }
    void getValue() && = delete;
    void setValue(ConstDataRange value) & { auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.data()), reinterpret_cast<const uint8_t*>(value.data()) + value.length());  _value = std::move(_tmpValue); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_bindata& a, const One_bindata& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_bindata& a, const One_bindata& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_bindata& a, const One_bindata& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_bindata& a, const One_bindata& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_bindata& a, const One_bindata& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_bindata& a, const One_bindata& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::vector<std::uint8_t> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single bindata_function
 */
class One_function {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_function();
    One_function(std::vector<std::uint8_t> value);

    static One_function parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const ConstDataRange getValue() const& { return ConstDataRange(_value); }
    void getValue() && = delete;
    void setValue(ConstDataRange value) & { auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.data()), reinterpret_cast<const uint8_t*>(value.data()) + value.length());  _value = std::move(_tmpValue); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_function& a, const One_function& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_function& a, const One_function& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_function& a, const One_function& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_function& a, const One_function& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_function& a, const One_function& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_function& a, const One_function& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::vector<std::uint8_t> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single bindata_uuid
 */
class One_uuid {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_uuid();
    One_uuid(std::array<std::uint8_t, 16> value);

    static One_uuid parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const std::array<std::uint8_t, 16> getValue() const { return _value; }
    void setValue(std::array<std::uint8_t, 16> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_uuid& a, const One_uuid& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_uuid& a, const One_uuid& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_uuid& a, const One_uuid& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_uuid& a, const One_uuid& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_uuid& a, const One_uuid& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_uuid& a, const One_uuid& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::array<std::uint8_t, 16> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single bindata_md5
 */
class One_md5 {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_md5();
    One_md5(std::array<std::uint8_t, 16> value);

    static One_md5 parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const std::array<std::uint8_t, 16> getValue() const { return _value; }
    void setValue(std::array<std::uint8_t, 16> value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_md5& a, const One_md5& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_md5& a, const One_md5& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_md5& a, const One_md5& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_md5& a, const One_md5& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_md5& a, const One_md5& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_md5& a, const One_md5& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    std::array<std::uint8_t, 16> _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single objectid
 */
class One_objectid {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_objectid();
    One_objectid(mongo::OID value);

    static One_objectid parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::OID& getValue() const { return _value; }
    void setValue(mongo::OID value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_objectid& a, const One_objectid& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_objectid& a, const One_objectid& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_objectid& a, const One_objectid& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_objectid& a, const One_objectid& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_objectid& a, const One_objectid& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_objectid& a, const One_objectid& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    mongo::OID _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single date
 */
class One_date {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_date();
    One_date(mongo::Date_t value);

    static One_date parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::Date_t& getValue() const { return _value; }
    void setValue(mongo::Date_t value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_date& a, const One_date& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_date& a, const One_date& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_date& a, const One_date& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_date& a, const One_date& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_date& a, const One_date& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_date& a, const One_date& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    mongo::Date_t _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single timestamp
 */
class One_timestamp {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_timestamp();
    One_timestamp(mongo::Timestamp value);

    static One_timestamp parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::Timestamp& getValue() const { return _value; }
    void setValue(mongo::Timestamp value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_timestamp& a, const One_timestamp& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_timestamp& a, const One_timestamp& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_timestamp& a, const One_timestamp& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_timestamp& a, const One_timestamp& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_timestamp& a, const One_timestamp& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_timestamp& a, const One_timestamp& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    mongo::Timestamp _value;
    bool _hasValue : 1;
};

/**
 * UnitTest for a single UUID
 */
class One_UUID {
public:
    static constexpr auto kValueFieldName = "value"_sd;

    One_UUID();
    One_UUID(mongo::UUID value);

    static One_UUID parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::UUID& getValue() const { return _value; }
    void setValue(mongo::UUID value) & {  _value = std::move(value); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{_value});
    }
    friend bool operator==(const One_UUID& a, const One_UUID& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const One_UUID& a, const One_UUID& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const One_UUID& a, const One_UUID& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const One_UUID& a, const One_UUID& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const One_UUID& a, const One_UUID& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const One_UUID& a, const One_UUID& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    mongo::UUID _value;
    bool _hasValue : 1;
};

}  // namespace import
}  // namespace idl
}  // namespace mongo
