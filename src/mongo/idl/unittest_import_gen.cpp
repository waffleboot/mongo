/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/unittest_import_gen.h --output build/opt/mongo/idl/unittest_import_gen.cpp src/mongo/idl/unittest_import.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/idl/unittest_import_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {
namespace idl {
namespace import {

/**
 * An example int enum
 */
IntEnum IntEnum_parse(const IDLParserErrorContext& ctxt, std::int32_t value) {
    
    if (!(value >= static_cast<std::underlying_type<IntEnum>::type>(
        IntEnum::a0) &&
        value <= static_cast<std::underlying_type<IntEnum>::type>(
            IntEnum::c2))) {
        ctxt.throwBadEnumValue(value);
    } else {
        return static_cast<IntEnum>(value);
    }
}

std::int32_t IntEnum_serializer(IntEnum value) {
    return static_cast<std::int32_t>(value);
}

constexpr StringData One_string::kValueFieldName;


One_string::One_string() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_string::One_string(std::string value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_string One_string::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_string>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_string::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_string::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_string::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_int::kValueFieldName;


One_int::One_int() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_int::One_int(std::int32_t value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_int One_int::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_int>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_int::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element._numberInt();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_int::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_int::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_long::kValueFieldName;


One_long::One_long() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_long::One_long(std::int64_t value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_long One_long::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_long>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_long::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberLong))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element._numberLong();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_long::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_long::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_double::kValueFieldName;


One_double::One_double() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_double::One_double(double value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_double One_double::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_double>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_double::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element._numberDouble();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_double::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_double::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_decimal::kValueFieldName;


One_decimal::One_decimal() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_decimal::One_decimal(mongo::Decimal128 value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_decimal One_decimal::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_decimal>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_decimal::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element._numberDecimal();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_decimal::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_decimal::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_bool::kValueFieldName;


One_bool::One_bool() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_bool::One_bool(bool value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_bool One_bool::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_bool>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_bool::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.boolean();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_bool::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_bool::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_bindata::kValueFieldName;


One_bindata::One_bindata() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_bindata::One_bindata(std::vector<std::uint8_t> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_bindata One_bindata::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_bindata>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_bindata::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element._binDataVector();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_bindata::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        ConstDataRange tempCDR(_value);
        builder->append(kValueFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

}


BSONObj One_bindata::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_function::kValueFieldName;


One_function::One_function() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_function::One_function(std::vector<std::uint8_t> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_function One_function::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_function>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_function::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, Function))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element._binDataVector();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_function::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        ConstDataRange tempCDR(_value);
        builder->append(kValueFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), Function));
    }

}


BSONObj One_function::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_uuid::kValueFieldName;


One_uuid::One_uuid() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_uuid::One_uuid(std::array<std::uint8_t, 16> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_uuid One_uuid::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_uuid>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_uuid::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, newUUID))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.uuid();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_uuid::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        ConstDataRange tempCDR(_value);
        builder->append(kValueFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), newUUID));
    }

}


BSONObj One_uuid::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_md5::kValueFieldName;


One_md5::One_md5() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_md5::One_md5(std::array<std::uint8_t, 16> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_md5 One_md5::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_md5>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_md5::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, MD5Type))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.md5();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_md5::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        ConstDataRange tempCDR(_value);
        builder->append(kValueFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), MD5Type));
    }

}


BSONObj One_md5::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_objectid::kValueFieldName;


One_objectid::One_objectid() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_objectid::One_objectid(mongo::OID value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_objectid One_objectid::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_objectid>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_objectid::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, jstOID))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.OID();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_objectid::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_objectid::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_date::kValueFieldName;


One_date::One_date() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_date::One_date(mongo::Date_t value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_date One_date::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_date>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_date::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Date))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.date();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_date::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_date::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_timestamp::kValueFieldName;


One_timestamp::One_timestamp() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_timestamp::One_timestamp(mongo::Timestamp value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_timestamp One_timestamp::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_timestamp>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_timestamp::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, bsonTimestamp))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.timestamp();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_timestamp::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_timestamp::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_UUID::kValueFieldName;


One_UUID::One_UUID() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_UUID::One_UUID(mongo::UUID value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_UUID One_UUID::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_UUID>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_UUID::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, newUUID))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = UUID(uassertStatusOK(UUID::parse(element)));
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_UUID::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        ConstDataRange tempCDR = _value.toCDR();
        builder->append(kValueFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), newUUID));
    }

}


BSONObj One_UUID::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

}  // namespace import
}  // namespace idl
}  // namespace mongo
