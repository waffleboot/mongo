/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/unittest_gen.h --output build/opt/mongo/idl/unittest_gen.cpp src/mongo/idl/unittest.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/idl/unittest_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {
namespace idl {
namespace test {

/**
 * An example string enum
 */
namespace  {
constexpr StringData kStringEnum_s0 = "zero"_sd;
constexpr StringData kStringEnum_s1 = "one"_sd;
constexpr StringData kStringEnum_s2 = "two"_sd;
}  // namespace 

StringEnumEnum StringEnum_parse(const IDLParserErrorContext& ctxt, StringData value) {
    if (value == kStringEnum_s0) {
        return StringEnumEnum::s0;
    }
    if (value == kStringEnum_s1) {
        return StringEnumEnum::s1;
    }
    if (value == kStringEnum_s2) {
        return StringEnumEnum::s2;
    }
    ctxt.throwBadEnumValue(value);
}

StringData StringEnum_serializer(StringEnumEnum value) {
    if (value == StringEnumEnum::s0) {
        return kStringEnum_s0;
    }
    if (value == StringEnumEnum::s1) {
        return kStringEnum_s1;
    }
    if (value == StringEnumEnum::s2) {
        return kStringEnum_s2;
    }
    MONGO_UNREACHABLE;
    return StringData();
}

constexpr StringData One_plain_object::kValueFieldName;


One_plain_object::One_plain_object() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_plain_object::One_plain_object(mongo::BSONObj value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_plain_object One_plain_object::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_plain_object>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_plain_object::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.Obj();
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


void One_plain_object::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_plain_object::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_plain_optional_object::kOpt_valueFieldName;
constexpr StringData One_plain_optional_object::kOpt_value2FieldName;
constexpr StringData One_plain_optional_object::kValueFieldName;
constexpr StringData One_plain_optional_object::kValue2FieldName;


One_plain_optional_object::One_plain_optional_object() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _value2(mongo::idl::preparsedValue<decltype(_value2)>()), _hasValue(false), _hasValue2(false) {
    // Used for initialization only
}
One_plain_optional_object::One_plain_optional_object(mongo::BSONObj value, mongo::BSONObj value2) : _value(std::move(value)), _value2(std::move(value2)), _hasValue(true), _hasValue2(true) {
    // Used for initialization only
}


One_plain_optional_object One_plain_optional_object::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_plain_optional_object>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_plain_optional_object::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kValueBit = 0;
    const size_t kValue2Bit = 1;
    const size_t kOpt_valueBit = 2;
    const size_t kOpt_value2Bit = 3;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.Obj();
            }
        }
        else if (fieldName == kValue2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kValue2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValue2Bit);

                _hasValue2 = true;
                _value2 = element.Obj();
            }
        }
        else if (fieldName == kOpt_valueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kOpt_valueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kOpt_valueBit);

                _opt_value = element.Obj();
            }
        }
        else if (fieldName == kOpt_value2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kOpt_value2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kOpt_value2Bit);

                _opt_value2 = element.Obj();
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
        if (!usedFields[kValue2Bit]) {
            ctxt.throwMissingField(kValue2FieldName);
        }
    }

}


void One_plain_optional_object::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue && _hasValue2);

    builder->append(kValueFieldName, _value);

    builder->append(kValue2FieldName, _value2);

    if (_opt_value.is_initialized()) {
        builder->append(kOpt_valueFieldName, _opt_value.get());
    }

    if (_opt_value2.is_initialized()) {
        builder->append(kOpt_value2FieldName, _opt_value2.get());
    }

}


BSONObj One_plain_optional_object::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Reply_type_struct::kReply_fieldFieldName;


Reply_type_struct::Reply_type_struct() : _reply_field(mongo::idl::preparsedValue<decltype(_reply_field)>()), _hasReply_field(false) {
    // Used for initialization only
}
Reply_type_struct::Reply_type_struct(std::int32_t reply_field) : _reply_field(std::move(reply_field)), _hasReply_field(true) {
    // Used for initialization only
}


Reply_type_struct Reply_type_struct::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Reply_type_struct>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Reply_type_struct::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kReply_fieldBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kReply_fieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kReply_fieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kReply_fieldBit);

                _hasReply_field = true;
                _reply_field = element._numberInt();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kReply_fieldBit]) {
            ctxt.throwMissingField(kReply_fieldFieldName);
        }
    }

}


void Reply_type_struct::serialize(BSONObjBuilder* builder) const {
    invariant(_hasReply_field);

    builder->append(kReply_fieldFieldName, _reply_field);

}


BSONObj Reply_type_struct::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData DerivedBaseStruct::kField1FieldName;
constexpr StringData DerivedBaseStruct::kField2FieldName;


DerivedBaseStruct::DerivedBaseStruct() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _hasField1(false), _hasField2(false) {
    // Used for initialization only
}
DerivedBaseStruct::DerivedBaseStruct(std::int32_t field1, std::int32_t field2) : _field1(std::move(field1)), _field2(std::move(field2)), _hasField1(true), _hasField2(true) {
    // Used for initialization only
}


DerivedBaseStruct DerivedBaseStruct::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<DerivedBaseStruct>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void DerivedBaseStruct::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element._numberInt();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
    }

}


void DerivedBaseStruct::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2);

    builder->append(kField1FieldName, _field1);

    builder->append(kField2FieldName, _field2);

}


BSONObj DerivedBaseStruct::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData RequiredStrictField3::kField1FieldName;
constexpr StringData RequiredStrictField3::kField2FieldName;
constexpr StringData RequiredStrictField3::kField3FieldName;


RequiredStrictField3::RequiredStrictField3() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _field3(mongo::idl::preparsedValue<decltype(_field3)>()), _hasField1(false), _hasField2(false), _hasField3(false) {
    // Used for initialization only
}
RequiredStrictField3::RequiredStrictField3(std::int32_t field1, std::int32_t field2, std::int32_t field3) : _field1(std::move(field1)), _field2(std::move(field2)), _field3(std::move(field3)), _hasField1(true), _hasField2(true), _hasField3(true) {
    // Used for initialization only
}


RequiredStrictField3 RequiredStrictField3::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<RequiredStrictField3>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void RequiredStrictField3::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField3Bit = 2;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element._numberInt();
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                _field3 = element._numberInt();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
    }

}


void RequiredStrictField3::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasField3);

    builder->append(kField1FieldName, _field1);

    builder->append(kField2FieldName, _field2);

    builder->append(kField3FieldName, _field3);

}


BSONObj RequiredStrictField3::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData RequiredNonStrictField3::kCppField1FieldName;
constexpr StringData RequiredNonStrictField3::kCppField2FieldName;
constexpr StringData RequiredNonStrictField3::kCppField3FieldName;


RequiredNonStrictField3::RequiredNonStrictField3() : _cppField1(mongo::idl::preparsedValue<decltype(_cppField1)>()), _cppField2(mongo::idl::preparsedValue<decltype(_cppField2)>()), _cppField3(mongo::idl::preparsedValue<decltype(_cppField3)>()), _hasCppField1(false), _hasCppField2(false), _hasCppField3(false) {
    // Used for initialization only
}
RequiredNonStrictField3::RequiredNonStrictField3(std::int32_t cppField1, std::int32_t cppField2, std::int32_t cppField3) : _cppField1(std::move(cppField1)), _cppField2(std::move(cppField2)), _cppField3(std::move(cppField3)), _hasCppField1(true), _hasCppField2(true), _hasCppField3(true) {
    // Used for initialization only
}


RequiredNonStrictField3 RequiredNonStrictField3::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<RequiredNonStrictField3>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void RequiredNonStrictField3::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kCppField1Bit = 0;
    const size_t kCppField2Bit = 1;
    const size_t kCppField3Bit = 2;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kCppField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kCppField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCppField1Bit);

                _hasCppField1 = true;
                _cppField1 = element._numberInt();
            }
        }
        else if (fieldName == kCppField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kCppField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCppField2Bit);

                _hasCppField2 = true;
                _cppField2 = element._numberInt();
            }
        }
        else if (fieldName == kCppField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kCppField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCppField3Bit);

                _hasCppField3 = true;
                _cppField3 = element._numberInt();
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
        if (!usedFields[kCppField1Bit]) {
            ctxt.throwMissingField(kCppField1FieldName);
        }
        if (!usedFields[kCppField2Bit]) {
            ctxt.throwMissingField(kCppField2FieldName);
        }
        if (!usedFields[kCppField3Bit]) {
            ctxt.throwMissingField(kCppField3FieldName);
        }
    }

}


void RequiredNonStrictField3::serialize(BSONObjBuilder* builder) const {
    invariant(_hasCppField1 && _hasCppField2 && _hasCppField3);

    builder->append(kCppField1FieldName, _cppField1);

    builder->append(kCppField2FieldName, _cppField2);

    builder->append(kCppField3FieldName, _cppField3);

}


BSONObj RequiredNonStrictField3::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData CompareAllField3::kField1FieldName;
constexpr StringData CompareAllField3::kField2FieldName;
constexpr StringData CompareAllField3::kField3FieldName;


CompareAllField3::CompareAllField3() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _field3(mongo::idl::preparsedValue<decltype(_field3)>()), _hasField1(false), _hasField2(false), _hasField3(false) {
    // Used for initialization only
}
CompareAllField3::CompareAllField3(std::int32_t field1, std::int32_t field2, std::int32_t field3) : _field1(std::move(field1)), _field2(std::move(field2)), _field3(std::move(field3)), _hasField1(true), _hasField2(true), _hasField3(true) {
    // Used for initialization only
}


CompareAllField3 CompareAllField3::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<CompareAllField3>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CompareAllField3::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField3Bit = 2;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element._numberInt();
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                _field3 = element._numberInt();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
    }

}


void CompareAllField3::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasField3);

    builder->append(kField1FieldName, _field1);

    builder->append(kField2FieldName, _field2);

    builder->append(kField3FieldName, _field3);

}


BSONObj CompareAllField3::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData CompareSomeField3::kField1FieldName;
constexpr StringData CompareSomeField3::kField2FieldName;
constexpr StringData CompareSomeField3::kField3FieldName;


CompareSomeField3::CompareSomeField3() : _field3(mongo::idl::preparsedValue<decltype(_field3)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField3(false), _hasField2(false), _hasField1(false) {
    // Used for initialization only
}
CompareSomeField3::CompareSomeField3(std::int32_t field3, std::int32_t field2, std::int32_t field1) : _field3(std::move(field3)), _field2(std::move(field2)), _field1(std::move(field1)), _hasField3(true), _hasField2(true), _hasField1(true) {
    // Used for initialization only
}


CompareSomeField3 CompareSomeField3::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<CompareSomeField3>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CompareSomeField3::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kField3Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField1Bit = 2;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                _field3 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element._numberInt();
            }
        }
        else if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
    }

}


void CompareSomeField3::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField3 && _hasField2 && _hasField1);

    builder->append(kField3FieldName, _field3);

    builder->append(kField2FieldName, _field2);

    builder->append(kField1FieldName, _field1);

}


BSONObj CompareSomeField3::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData NestedWithDuplicateTypes::kField1FieldName;
constexpr StringData NestedWithDuplicateTypes::kField2FieldName;
constexpr StringData NestedWithDuplicateTypes::kField3FieldName;


NestedWithDuplicateTypes::NestedWithDuplicateTypes() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field3(mongo::idl::preparsedValue<decltype(_field3)>()), _hasField1(false), _hasField3(false) {
    // Used for initialization only
}
NestedWithDuplicateTypes::NestedWithDuplicateTypes(mongo::idl::test::RequiredStrictField3 field1, mongo::idl::test::RequiredStrictField3 field3) : _field1(std::move(field1)), _field3(std::move(field3)), _hasField1(true), _hasField3(true) {
    // Used for initialization only
}


NestedWithDuplicateTypes NestedWithDuplicateTypes::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<NestedWithDuplicateTypes>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void NestedWithDuplicateTypes::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField3Bit = 2;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                IDLParserErrorContext tempContext(kField1FieldName, &ctxt);
                const auto localObject = element.Obj();
                _field1 = mongo::idl::test::RequiredStrictField3::parse(tempContext, localObject);
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                IDLParserErrorContext tempContext(kField2FieldName, &ctxt);
                const auto localObject = element.Obj();
                _field2 = mongo::idl::test::RequiredNonStrictField3::parse(tempContext, localObject);
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                IDLParserErrorContext tempContext(kField3FieldName, &ctxt);
                const auto localObject = element.Obj();
                _field3 = mongo::idl::test::RequiredStrictField3::parse(tempContext, localObject);
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
    }

}


void NestedWithDuplicateTypes::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField3);

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kField1FieldName));
        _field1.serialize(&subObjBuilder);
    }

    if (_field2.is_initialized()) {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kField2FieldName));
        _field2.get().serialize(&subObjBuilder);
    }

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kField3FieldName));
        _field3.serialize(&subObjBuilder);
    }

}


BSONObj NestedWithDuplicateTypes::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData IgnoredField::kIgnored_fieldFieldName;
constexpr StringData IgnoredField::kRequired_fieldFieldName;


IgnoredField::IgnoredField() : _required_field(mongo::idl::preparsedValue<decltype(_required_field)>()), _hasRequired_field(false) {
    // Used for initialization only
}
IgnoredField::IgnoredField(std::int32_t required_field) : _required_field(std::move(required_field)), _hasRequired_field(true) {
    // Used for initialization only
}


IgnoredField IgnoredField::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<IgnoredField>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void IgnoredField::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kRequired_fieldBit = 0;
    const size_t kIgnored_fieldBit = 1;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kRequired_fieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kRequired_fieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kRequired_fieldBit);

                _hasRequired_field = true;
                _required_field = element._numberInt();
            }
        }
        else if (fieldName == kIgnored_fieldFieldName) {
            if (MONGO_unlikely(usedFields[kIgnored_fieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kIgnored_fieldBit);

            // ignore field
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kRequired_fieldBit]) {
            ctxt.throwMissingField(kRequired_fieldFieldName);
        }
    }

}


void IgnoredField::serialize(BSONObjBuilder* builder) const {
    invariant(_hasRequired_field);

    builder->append(kRequired_fieldFieldName, _required_field);

}


BSONObj IgnoredField::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_namespacestring::kValueFieldName;


One_namespacestring::One_namespacestring() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_namespacestring::One_namespacestring(mongo::NamespaceString value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_namespacestring One_namespacestring::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_namespacestring>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_namespacestring::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
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
                _value = NamespaceString(element.valueStringData());
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


void One_namespacestring::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        builder->append(kValueFieldName, _value.toString());
    }

}


BSONObj One_namespacestring::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_bindata_custom::kValueFieldName;


One_bindata_custom::One_bindata_custom() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_bindata_custom::One_bindata_custom(mongo::BinDataCustomType value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_bindata_custom One_bindata_custom::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_bindata_custom>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_bindata_custom::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
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
                _value = BinDataCustomType::parseFromBSON(element._binDataVector());
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


void One_bindata_custom::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        ConstDataRange tempCDR = _value.serializeToBSON();
        builder->append(kValueFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

}


BSONObj One_bindata_custom::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_any_basic_type::kValueFieldName;


One_any_basic_type::One_any_basic_type() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_any_basic_type::One_any_basic_type(mongo::AnyBasicType value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_any_basic_type One_any_basic_type::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_any_basic_type>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_any_basic_type::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            _hasValue = true;
            _value = AnyBasicType::parseFromBSON(element);
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


void One_any_basic_type::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        _value.serializeToBSON(kValueFieldName, builder);
    }

}


BSONObj One_any_basic_type::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_object_basic_type::kValueFieldName;


One_object_basic_type::One_object_basic_type() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_object_basic_type::One_object_basic_type(mongo::ObjectBasicType value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_object_basic_type One_object_basic_type::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_object_basic_type>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_object_basic_type::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                const BSONObj localObject = element.Obj();
                _value = ObjectBasicType::parseFromBSON(localObject);
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


void One_object_basic_type::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        const BSONObj localObject = _value.serializeToBSON();
        builder->append(kValueFieldName, localObject);
    }

}


BSONObj One_object_basic_type::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_safeint64::kValueFieldName;


One_safeint64::One_safeint64() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_safeint64::One_safeint64(std::int64_t value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_safeint64 One_safeint64::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_safeint64>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_safeint64::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertTypes(element, {NumberLong, NumberInt, NumberDecimal, NumberDouble}))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.safeNumberLong();
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


void One_safeint64::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    builder->append(kValueFieldName, _value);

}


BSONObj One_safeint64::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Default_values::kV_boolFieldName;
constexpr StringData Default_values::kV_doubleFieldName;
constexpr StringData Default_values::kV_intFieldName;
constexpr StringData Default_values::kV_longFieldName;
constexpr StringData Default_values::kV_stringFieldName;


Default_values::Default_values()  {
    // Used for initialization only
}


Default_values Default_values::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Default_values>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Default_values::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kV_stringBit = 0;
    const size_t kV_intBit = 1;
    const size_t kV_longBit = 2;
    const size_t kV_doubleBit = 3;
    const size_t kV_boolBit = 4;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kV_stringFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kV_stringBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kV_stringBit);

                _v_string = element.str();
            }
        }
        else if (fieldName == kV_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kV_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kV_intBit);

                _v_int = element._numberInt();
            }
        }
        else if (fieldName == kV_longFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberLong))) {
                if (MONGO_unlikely(usedFields[kV_longBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kV_longBit);

                _v_long = element._numberLong();
            }
        }
        else if (fieldName == kV_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kV_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kV_doubleBit);

                _v_double = element._numberDouble();
            }
        }
        else if (fieldName == kV_boolFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kV_boolBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kV_boolBit);

                _v_bool = element.boolean();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kV_stringBit]) {
            _v_string = "a default";
        }
        if (!usedFields[kV_intBit]) {
            _v_int = 42;
        }
        if (!usedFields[kV_longBit]) {
            _v_long = 423;
        }
        if (!usedFields[kV_doubleBit]) {
            _v_double = 3.14159;
        }
        if (!usedFields[kV_boolBit]) {
            _v_bool = true;
        }
    }

}


void Default_values::serialize(BSONObjBuilder* builder) const {
    builder->append(kV_stringFieldName, _v_string);

    builder->append(kV_intFieldName, _v_int);

    builder->append(kV_longFieldName, _v_long);

    builder->append(kV_doubleFieldName, _v_double);

    builder->append(kV_boolFieldName, _v_bool);

}


BSONObj Default_values::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Optional_field::kField1FieldName;
constexpr StringData Optional_field::kField2FieldName;
constexpr StringData Optional_field::kField3FieldName;
constexpr StringData Optional_field::kField4FieldName;
constexpr StringData Optional_field::kField5FieldName;


Optional_field::Optional_field()  {
    // Used for initialization only
}


Optional_field Optional_field::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Optional_field>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Optional_field::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField3Bit = 2;
    const size_t kField4Bit = 3;
    const size_t kField5Bit = 4;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _field1 = element.str();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _field2 = element._numberInt();
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _field3 = element.Obj();
            }
        }
        else if (fieldName == kField4FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kField4Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField4Bit);

                _field4 = element._binDataVector();
            }
        }
        else if (fieldName == kField5FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, newUUID))) {
                if (MONGO_unlikely(usedFields[kField5Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField5Bit);

                _field5 = element.uuid();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
    }

}


void Optional_field::serialize(BSONObjBuilder* builder) const {
    if (_field1.is_initialized()) {
        builder->append(kField1FieldName, _field1.get());
    }

    if (_field2.is_initialized()) {
        builder->append(kField2FieldName, _field2.get());
    }

    if (_field3.is_initialized()) {
        builder->append(kField3FieldName, _field3.get());
    }

    if (_field4.is_initialized()) {
        ConstDataRange tempCDR(_field4.get());
        builder->append(kField4FieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

    if (_field5.is_initialized()) {
        ConstDataRange tempCDR(_field5.get());
        builder->append(kField5FieldName, BSONBinData(tempCDR.data(), tempCDR.length(), newUUID));
    }

}


BSONObj Optional_field::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Always_serialize_field::kField1FieldName;
constexpr StringData Always_serialize_field::kField2FieldName;
constexpr StringData Always_serialize_field::kField3FieldName;
constexpr StringData Always_serialize_field::kField4FieldName;
constexpr StringData Always_serialize_field::kField5FieldName;


Always_serialize_field::Always_serialize_field()  {
    // Used for initialization only
}


Always_serialize_field Always_serialize_field::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Always_serialize_field>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Always_serialize_field::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField3Bit = 2;
    const size_t kField4Bit = 3;
    const size_t kField5Bit = 4;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _field1 = element.str();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _field2 = element._numberInt();
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _field3 = element.Obj();
            }
        }
        else if (fieldName == kField4FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField4Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField4Bit);

                _field4 = element.Obj();
            }
        }
        else if (fieldName == kField5FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField5Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField5Bit);

                _field5 = element.Obj();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
    }

}


void Always_serialize_field::serialize(BSONObjBuilder* builder) const {
    if (_field1.is_initialized()) {
        builder->append(kField1FieldName, _field1.get());
    }
    else {
        builder->appendNull(kField1FieldName);
    }

    if (_field2.is_initialized()) {
        builder->append(kField2FieldName, _field2.get());
    }
    else {
        builder->appendNull(kField2FieldName);
    }

    if (_field3.is_initialized()) {
        builder->append(kField3FieldName, _field3.get());
    }
    else {
        builder->appendNull(kField3FieldName);
    }

    if (_field4.is_initialized()) {
        builder->append(kField4FieldName, _field4.get());
    }
    else {
        builder->appendNull(kField4FieldName);
    }

    if (_field5.is_initialized()) {
        builder->append(kField5FieldName, _field5.get());
    }

}


BSONObj Always_serialize_field::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Simple_int_array::kField1FieldName;


Simple_int_array::Simple_int_array() : _hasField1(false) {
    // Used for initialization only
}
Simple_int_array::Simple_int_array(std::vector<std::int32_t> field1) : _field1(std::move(field1)), _hasField1(true) {
    // Used for initialization only
}


Simple_int_array Simple_int_array::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Simple_int_array>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Simple_int_array::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kField1Bit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField1FieldName, &ctxt);
            std::vector<std::int32_t> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                        values.emplace_back(arrayElement._numberInt());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field1 = std::move(values);
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
    }

}


void Simple_int_array::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1);

    {
        builder->append(kField1FieldName, _field1);
    }

}


BSONObj Simple_int_array::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Simple_array_fields::kField1FieldName;
constexpr StringData Simple_array_fields::kField2FieldName;
constexpr StringData Simple_array_fields::kField3FieldName;
constexpr StringData Simple_array_fields::kField4FieldName;
constexpr StringData Simple_array_fields::kField5FieldName;


Simple_array_fields::Simple_array_fields() : _hasField1(false), _hasField2(false), _hasField3(false), _hasField4(false), _hasField5(false) {
    // Used for initialization only
}
Simple_array_fields::Simple_array_fields(std::vector<std::string> field1, std::vector<std::int32_t> field2, std::vector<double> field3, std::vector<std::vector<std::uint8_t>> field4, std::vector<std::array<std::uint8_t, 16>> field5) : _field1(std::move(field1)), _field2(std::move(field2)), _field3(std::move(field3)), _field4(std::move(field4)), _field5(std::move(field5)), _hasField1(true), _hasField2(true), _hasField3(true), _hasField4(true), _hasField5(true) {
    // Used for initialization only
}


Simple_array_fields Simple_array_fields::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Simple_array_fields>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Simple_array_fields::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField3Bit = 2;
    const size_t kField4Bit = 3;
    const size_t kField5Bit = 4;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField1FieldName, &ctxt);
            std::vector<std::string> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                        values.emplace_back(arrayElement.str());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field1 = std::move(values);
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField2FieldName, &ctxt);
            std::vector<std::int32_t> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                        values.emplace_back(arrayElement._numberInt());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field2 = std::move(values);
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField3FieldName, &ctxt);
            std::vector<double> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, NumberDouble)) {
                        values.emplace_back(arrayElement._numberDouble());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field3 = std::move(values);
        }
        else if (fieldName == kField4FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField4Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField4Bit);

                _hasField4 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField4FieldName, &ctxt);
            std::vector<std::vector<std::uint8_t>> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertBinDataType(arrayElement, BinDataGeneral)) {
                        values.emplace_back(arrayElement._binDataVector());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field4 = std::move(values);
        }
        else if (fieldName == kField5FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField5Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField5Bit);

                _hasField5 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField5FieldName, &ctxt);
            std::vector<std::array<std::uint8_t, 16>> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertBinDataType(arrayElement, newUUID)) {
                        values.emplace_back(arrayElement.uuid());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field5 = std::move(values);
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
        if (!usedFields[kField4Bit]) {
            ctxt.throwMissingField(kField4FieldName);
        }
        if (!usedFields[kField5Bit]) {
            ctxt.throwMissingField(kField5FieldName);
        }
    }

}


void Simple_array_fields::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasField3 && _hasField4 && _hasField5);

    {
        builder->append(kField1FieldName, _field1);
    }

    {
        builder->append(kField2FieldName, _field2);
    }

    {
        builder->append(kField3FieldName, _field3);
    }

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField4FieldName));
        for (const auto& item : _field4) {
            ConstDataRange tempCDR(item);
            arrayBuilder.append(BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
        }
    }

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField5FieldName));
        for (const auto& item : _field5) {
            ConstDataRange tempCDR(item);
            arrayBuilder.append(BSONBinData(tempCDR.data(), tempCDR.length(), newUUID));
        }
    }

}


BSONObj Simple_array_fields::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Optional_array_fields::kField1FieldName;
constexpr StringData Optional_array_fields::kField2FieldName;
constexpr StringData Optional_array_fields::kField3FieldName;
constexpr StringData Optional_array_fields::kField4FieldName;
constexpr StringData Optional_array_fields::kField5FieldName;


Optional_array_fields::Optional_array_fields()  {
    // Used for initialization only
}


Optional_array_fields Optional_array_fields::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Optional_array_fields>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Optional_array_fields::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField3Bit = 2;
    const size_t kField4Bit = 3;
    const size_t kField5Bit = 4;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField1FieldName, &ctxt);
            std::vector<std::string> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                        values.emplace_back(arrayElement.str());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field1 = std::move(values);
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField2FieldName, &ctxt);
            std::vector<std::int32_t> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                        values.emplace_back(arrayElement._numberInt());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field2 = std::move(values);
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField3FieldName, &ctxt);
            std::vector<double> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, NumberDouble)) {
                        values.emplace_back(arrayElement._numberDouble());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field3 = std::move(values);
        }
        else if (fieldName == kField4FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField4Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField4Bit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField4FieldName, &ctxt);
            std::vector<std::vector<std::uint8_t>> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertBinDataType(arrayElement, BinDataGeneral)) {
                        values.emplace_back(arrayElement._binDataVector());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field4 = std::move(values);
        }
        else if (fieldName == kField5FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField5Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField5Bit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField5FieldName, &ctxt);
            std::vector<std::array<std::uint8_t, 16>> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertBinDataType(arrayElement, newUUID)) {
                        values.emplace_back(arrayElement.uuid());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field5 = std::move(values);
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
    }

}


void Optional_array_fields::serialize(BSONObjBuilder* builder) const {
    if (_field1.is_initialized()) {
        builder->append(kField1FieldName, _field1.get());
    }

    if (_field2.is_initialized()) {
        builder->append(kField2FieldName, _field2.get());
    }

    if (_field3.is_initialized()) {
        builder->append(kField3FieldName, _field3.get());
    }

    if (_field4.is_initialized()) {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField4FieldName));
        for (const auto& item : _field4.get()) {
            ConstDataRange tempCDR(item);
            arrayBuilder.append(BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
        }
    }

    if (_field5.is_initialized()) {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField5FieldName));
        for (const auto& item : _field5.get()) {
            ConstDataRange tempCDR(item);
            arrayBuilder.append(BSONBinData(tempCDR.data(), tempCDR.length(), newUUID));
        }
    }

}


BSONObj Optional_array_fields::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Complex_array_fields::kField1FieldName;
constexpr StringData Complex_array_fields::kField1oFieldName;
constexpr StringData Complex_array_fields::kField2FieldName;
constexpr StringData Complex_array_fields::kField2oFieldName;
constexpr StringData Complex_array_fields::kField3FieldName;
constexpr StringData Complex_array_fields::kField3oFieldName;
constexpr StringData Complex_array_fields::kField4FieldName;
constexpr StringData Complex_array_fields::kField4oFieldName;
constexpr StringData Complex_array_fields::kField5FieldName;
constexpr StringData Complex_array_fields::kField5oFieldName;
constexpr StringData Complex_array_fields::kField6FieldName;
constexpr StringData Complex_array_fields::kField6oFieldName;


Complex_array_fields::Complex_array_fields() : _hasField1(false), _hasField2(false), _hasField3(false), _hasField4(false), _hasField5(false), _hasField6(false) {
    // Used for initialization only
}
Complex_array_fields::Complex_array_fields(std::vector<std::int64_t> field1, std::vector<mongo::NamespaceString> field2, std::vector<mongo::AnyBasicType> field3, std::vector<mongo::ObjectBasicType> field4, std::vector<mongo::BSONObj> field5, std::vector<mongo::idl::import::One_string> field6) : _field1(std::move(field1)), _field2(std::move(field2)), _field3(std::move(field3)), _field4(std::move(field4)), _field5(std::move(field5)), _field6(std::move(field6)), _hasField1(true), _hasField2(true), _hasField3(true), _hasField4(true), _hasField5(true), _hasField6(true) {
    // Used for initialization only
}


Complex_array_fields Complex_array_fields::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Complex_array_fields>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Complex_array_fields::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<12> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField3Bit = 2;
    const size_t kField4Bit = 3;
    const size_t kField5Bit = 4;
    const size_t kField6Bit = 5;
    const size_t kField1oBit = 6;
    const size_t kField2oBit = 7;
    const size_t kField3oBit = 8;
    const size_t kField4oBit = 9;
    const size_t kField5oBit = 10;
    const size_t kField6oBit = 11;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField1FieldName, &ctxt);
            std::vector<std::int64_t> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertTypes(arrayElement, {NumberLong, NumberInt, NumberDecimal, NumberDouble})) {
                        values.emplace_back(arrayElement.safeNumberLong());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field1 = std::move(values);
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField2FieldName, &ctxt);
            std::vector<mongo::NamespaceString> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                        values.emplace_back(NamespaceString(arrayElement.valueStringData()));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field2 = std::move(values);
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField3FieldName, &ctxt);
            std::vector<mongo::AnyBasicType> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    values.emplace_back(AnyBasicType::parseFromBSON(arrayElement));
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field3 = std::move(values);
        }
        else if (fieldName == kField4FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField4Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField4Bit);

                _hasField4 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField4FieldName, &ctxt);
            std::vector<mongo::ObjectBasicType> values;

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
                        values.emplace_back(ObjectBasicType::parseFromBSON(localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field4 = std::move(values);
        }
        else if (fieldName == kField5FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField5Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField5Bit);

                _hasField5 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField5FieldName, &ctxt);
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
                        values.emplace_back(arrayElement.Obj());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field5 = std::move(values);
        }
        else if (fieldName == kField6FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField6Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField6Bit);

                _hasField6 = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField6FieldName, &ctxt);
            std::vector<mongo::idl::import::One_string> values;

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
                        IDLParserErrorContext tempContext(kField6FieldName, &ctxt);
                        const auto localObject = arrayElement.Obj();
                        values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field6 = std::move(values);
        }
        else if (fieldName == kField1oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField1oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1oBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField1oFieldName, &ctxt);
            std::vector<std::int64_t> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertTypes(arrayElement, {NumberLong, NumberInt, NumberDecimal, NumberDouble})) {
                        values.emplace_back(arrayElement.safeNumberLong());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field1o = std::move(values);
        }
        else if (fieldName == kField2oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField2oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2oBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField2oFieldName, &ctxt);
            std::vector<mongo::NamespaceString> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                        values.emplace_back(NamespaceString(arrayElement.valueStringData()));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field2o = std::move(values);
        }
        else if (fieldName == kField3oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField3oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3oBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField3oFieldName, &ctxt);
            std::vector<mongo::AnyBasicType> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    values.emplace_back(AnyBasicType::parseFromBSON(arrayElement));
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field3o = std::move(values);
        }
        else if (fieldName == kField4oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField4oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField4oBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField4oFieldName, &ctxt);
            std::vector<mongo::ObjectBasicType> values;

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
                        values.emplace_back(ObjectBasicType::parseFromBSON(localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field4o = std::move(values);
        }
        else if (fieldName == kField5oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField5oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField5oBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField5oFieldName, &ctxt);
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
                        values.emplace_back(arrayElement.Obj());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field5o = std::move(values);
        }
        else if (fieldName == kField6oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kField6oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField6oBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kField6oFieldName, &ctxt);
            std::vector<mongo::idl::import::One_string> values;

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
                        IDLParserErrorContext tempContext(kField6oFieldName, &ctxt);
                        const auto localObject = arrayElement.Obj();
                        values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _field6o = std::move(values);
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
        if (!usedFields[kField4Bit]) {
            ctxt.throwMissingField(kField4FieldName);
        }
        if (!usedFields[kField5Bit]) {
            ctxt.throwMissingField(kField5FieldName);
        }
        if (!usedFields[kField6Bit]) {
            ctxt.throwMissingField(kField6FieldName);
        }
    }

}


void Complex_array_fields::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasField3 && _hasField4 && _hasField5 && _hasField6);

    {
        builder->append(kField1FieldName, _field1);
    }

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField2FieldName));
        for (const auto& item : _field2) {
            arrayBuilder.append(item.toString());
        }
    }

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField3FieldName));
        for (const auto& item : _field3) {
            item.serializeToBSON(&arrayBuilder);
        }
    }

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField4FieldName));
        for (const auto& item : _field4) {
            const BSONObj localObject = item.serializeToBSON();
            arrayBuilder.append(localObject);
        }
    }

    {
        builder->append(kField5FieldName, _field5);
    }

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField6FieldName));
        for (const auto& item : _field6) {
            BSONObjBuilder subObjBuilder(arrayBuilder.subobjStart());
            item.serialize(&subObjBuilder);
        }
    }

    if (_field1o.is_initialized()) {
        builder->append(kField1oFieldName, _field1o.get());
    }

    if (_field2o.is_initialized()) {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField2oFieldName));
        for (const auto& item : _field2o.get()) {
            arrayBuilder.append(item.toString());
        }
    }

    if (_field3o.is_initialized()) {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField3oFieldName));
        for (const auto& item : _field3o.get()) {
            item.serializeToBSON(&arrayBuilder);
        }
    }

    if (_field4o.is_initialized()) {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField4oFieldName));
        for (const auto& item : _field4o.get()) {
            const BSONObj localObject = item.serializeToBSON();
            arrayBuilder.append(localObject);
        }
    }

    if (_field5o.is_initialized()) {
        builder->append(kField5oFieldName, _field5o.get());
    }

    if (_field6o.is_initialized()) {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kField6oFieldName));
        for (const auto& item : _field6o.get()) {
            BSONObjBuilder subObjBuilder(arrayBuilder.subobjStart());
            item.serialize(&subObjBuilder);
        }
    }

}


BSONObj Complex_array_fields::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_string_basic_type::kStringFieldFieldName;


Chained_string_basic_type::Chained_string_basic_type() : _stringField(mongo::idl::preparsedValue<decltype(_stringField)>()), _hasStringField(false) {
    // Used for initialization only
}
Chained_string_basic_type::Chained_string_basic_type(std::string stringField) : _stringField(std::move(stringField)), _hasStringField(true) {
    // Used for initialization only
}


Chained_string_basic_type Chained_string_basic_type::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_string_basic_type>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_string_basic_type::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kStringFieldBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kStringFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kStringFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStringFieldBit);

                _hasStringField = true;
                _stringField = element.str();
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
        if (!usedFields[kStringFieldBit]) {
            ctxt.throwMissingField(kStringFieldFieldName);
        }
    }

}


void Chained_string_basic_type::serialize(BSONObjBuilder* builder) const {
    invariant(_hasStringField);

    builder->append(kStringFieldFieldName, _stringField);

}


BSONObj Chained_string_basic_type::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_any_basic_type::kAnyFieldFieldName;


Chained_any_basic_type::Chained_any_basic_type() : _anyField(mongo::idl::preparsedValue<decltype(_anyField)>()), _hasAnyField(false) {
    // Used for initialization only
}
Chained_any_basic_type::Chained_any_basic_type(mongo::AnyBasicType anyField) : _anyField(std::move(anyField)), _hasAnyField(true) {
    // Used for initialization only
}


Chained_any_basic_type Chained_any_basic_type::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_any_basic_type>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_any_basic_type::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kAnyFieldBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kAnyFieldFieldName) {
            if (MONGO_unlikely(usedFields[kAnyFieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kAnyFieldBit);

            _hasAnyField = true;
            _anyField = AnyBasicType::parseFromBSON(element);
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kAnyFieldBit]) {
            ctxt.throwMissingField(kAnyFieldFieldName);
        }
    }

}


void Chained_any_basic_type::serialize(BSONObjBuilder* builder) const {
    invariant(_hasAnyField);

    {
        _anyField.serializeToBSON(kAnyFieldFieldName, builder);
    }

}


BSONObj Chained_any_basic_type::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_object_basic_type::kObjectFieldFieldName;


Chained_object_basic_type::Chained_object_basic_type() : _objectField(mongo::idl::preparsedValue<decltype(_objectField)>()), _hasObjectField(false) {
    // Used for initialization only
}
Chained_object_basic_type::Chained_object_basic_type(mongo::ObjectBasicType objectField) : _objectField(std::move(objectField)), _hasObjectField(true) {
    // Used for initialization only
}


Chained_object_basic_type Chained_object_basic_type::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_object_basic_type>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_object_basic_type::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kObjectFieldBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kObjectFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kObjectFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjectFieldBit);

                _hasObjectField = true;
                const BSONObj localObject = element.Obj();
                _objectField = ObjectBasicType::parseFromBSON(localObject);
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
        if (!usedFields[kObjectFieldBit]) {
            ctxt.throwMissingField(kObjectFieldFieldName);
        }
    }

}


void Chained_object_basic_type::serialize(BSONObjBuilder* builder) const {
    invariant(_hasObjectField);

    {
        const BSONObj localObject = _objectField.serializeToBSON();
        builder->append(kObjectFieldFieldName, localObject);
    }

}


BSONObj Chained_object_basic_type::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_enum_type::kEnumFieldFieldName;


Chained_enum_type::Chained_enum_type()  {
    // Used for initialization only
}


Chained_enum_type Chained_enum_type::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_enum_type>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_enum_type::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kEnumFieldBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kEnumFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kEnumFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEnumFieldBit);

                IDLParserErrorContext tempContext(kEnumFieldFieldName, &ctxt);
                _enumField = idl::test::StringEnum_parse(tempContext, element.valueStringData());
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
        if (!usedFields[kEnumFieldBit]) {
            _enumField = mongo::idl::test::StringEnumEnum::s0;
        }
    }

}


void Chained_enum_type::serialize(BSONObjBuilder* builder) const {
    {
        builder->append(kEnumFieldFieldName, ::mongo::idl::test::StringEnum_serializer(_enumField));
    }

}


BSONObj Chained_enum_type::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_struct_only::kAnotherChainedTypeFieldName;
constexpr StringData Chained_struct_only::kChainedTypeFieldName;


Chained_struct_only::Chained_struct_only()  {
    // Used for initialization only
}


Chained_struct_only Chained_struct_only::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_struct_only>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_struct_only::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        auto push_result = usedFieldSet.insert(fieldName);
        if (MONGO_unlikely(push_result.second == false)) {
            ctxt.throwDuplicateField(fieldName);
        }
    }
    _chainedType = ChainedType::parseFromBSON(bsonObject);

    _anotherChainedType = AnotherChainedType::parseFromBSON(bsonObject);


    if (MONGO_unlikely(!usedFields.all())) {
    }

}


void Chained_struct_only::serialize(BSONObjBuilder* builder) const {
    {
        _chainedType.serializeToBSON(builder);
    }

    {
        _anotherChainedType.serializeToBSON(builder);
    }

}


BSONObj Chained_struct_only::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_struct_mixed::kChainedObjectBasicTypeFieldName;
constexpr StringData Chained_struct_mixed::kAnyFieldFieldName;
constexpr StringData Chained_struct_mixed::kChained_any_basic_typeFieldName;
constexpr StringData Chained_struct_mixed::kChained_enum_typeFieldName;
constexpr StringData Chained_struct_mixed::kEnumFieldFieldName;
constexpr StringData Chained_struct_mixed::kField3FieldName;
constexpr StringData Chained_struct_mixed::kObjectFieldFieldName;


Chained_struct_mixed::Chained_struct_mixed() : _field3(mongo::idl::preparsedValue<decltype(_field3)>()), _hasField3(false) {
    // Used for initialization only
}
Chained_struct_mixed::Chained_struct_mixed(std::string field3) : _field3(std::move(field3)), _hasField3(true) {
    // Used for initialization only
}


Chained_struct_mixed Chained_struct_mixed::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_struct_mixed>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_struct_mixed::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<7> usedFields;
    const size_t kAnyFieldBit = 0;
    const size_t kObjectFieldBit = 1;
    const size_t kEnumFieldBit = 2;
    const size_t kField3Bit = 3;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kAnyFieldFieldName) {
            if (MONGO_unlikely(usedFields[kAnyFieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kAnyFieldBit);

            // ignore field
        }
        else if (fieldName == kObjectFieldFieldName) {
            if (MONGO_unlikely(usedFields[kObjectFieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kObjectFieldBit);

            // ignore field
        }
        else if (fieldName == kEnumFieldFieldName) {
            if (MONGO_unlikely(usedFields[kEnumFieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kEnumFieldBit);

            // ignore field
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                _field3 = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }
    _chained_any_basic_type = mongo::idl::test::Chained_any_basic_type::parse(ctxt, bsonObject);

    _chainedObjectBasicType = mongo::idl::test::Chained_object_basic_type::parse(ctxt, bsonObject);

    _chained_enum_type = mongo::idl::test::Chained_enum_type::parse(ctxt, bsonObject);


    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
    }

}


void Chained_struct_mixed::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField3);

    {
        _chained_any_basic_type.serialize(builder);
    }

    {
        _chainedObjectBasicType.serialize(builder);
    }

    {
        _chained_enum_type.serialize(builder);
    }

    builder->append(kField3FieldName, _field3);

}


BSONObj Chained_struct_mixed::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_struct_type_mixed::kAnotherChainedTypeFieldName;
constexpr StringData Chained_struct_type_mixed::kChainedStringBasicTypeFieldName;
constexpr StringData Chained_struct_type_mixed::kChained_typeFieldName;
constexpr StringData Chained_struct_type_mixed::kField3FieldName;
constexpr StringData Chained_struct_type_mixed::kStringFieldFieldName;


Chained_struct_type_mixed::Chained_struct_type_mixed() : _field3(mongo::idl::preparsedValue<decltype(_field3)>()), _hasField3(false) {
    // Used for initialization only
}
Chained_struct_type_mixed::Chained_struct_type_mixed(std::int32_t field3) : _field3(std::move(field3)), _hasField3(true) {
    // Used for initialization only
}


Chained_struct_type_mixed Chained_struct_type_mixed::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_struct_type_mixed>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_struct_type_mixed::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kStringFieldBit = 0;
    const size_t kField3Bit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kStringFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kStringFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStringFieldBit);

                _chainedStringBasicType.setStringField(element.str());
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                _field3 = element._numberInt();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }
    _chained_type = ChainedType::parseFromBSON(bsonObject);

    _anotherChainedType = AnotherChainedType::parseFromBSON(bsonObject);


    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kStringFieldBit]) {
            ctxt.throwMissingField(kStringFieldFieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
    }

}


void Chained_struct_type_mixed::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField3);

    {
        _chained_type.serializeToBSON(builder);
    }

    {
        _anotherChainedType.serializeToBSON(builder);
    }

    {
        _chainedStringBasicType.serialize(builder);
    }

    builder->append(kField3FieldName, _field3);

}


BSONObj Chained_struct_type_mixed::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_string_inline_basic_type::kField1oFieldName;
constexpr StringData Chained_string_inline_basic_type::kField2oFieldName;
constexpr StringData Chained_string_inline_basic_type::kField3oFieldName;
constexpr StringData Chained_string_inline_basic_type::kField4oFieldName;
constexpr StringData Chained_string_inline_basic_type::kField5oFieldName;
constexpr StringData Chained_string_inline_basic_type::kStringFieldFieldName;


Chained_string_inline_basic_type::Chained_string_inline_basic_type() : _stringField(mongo::idl::preparsedValue<decltype(_stringField)>()), _hasStringField(false) {
    // Used for initialization only
}
Chained_string_inline_basic_type::Chained_string_inline_basic_type(std::string stringField) : _stringField(std::move(stringField)), _hasStringField(true) {
    // Used for initialization only
}


Chained_string_inline_basic_type Chained_string_inline_basic_type::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_string_inline_basic_type>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_string_inline_basic_type::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<6> usedFields;
    const size_t kStringFieldBit = 0;
    const size_t kField1oBit = 1;
    const size_t kField2oBit = 2;
    const size_t kField3oBit = 3;
    const size_t kField4oBit = 4;
    const size_t kField5oBit = 5;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kStringFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kStringFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStringFieldBit);

                _hasStringField = true;
                _stringField = element.str();
            }
        }
        else if (fieldName == kField1oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField1oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1oBit);

                _field1o = element.str();
            }
        }
        else if (fieldName == kField2oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField2oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2oBit);

                _field2o = element._numberInt();
            }
        }
        else if (fieldName == kField3oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField3oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3oBit);

                _field3o = element.Obj();
            }
        }
        else if (fieldName == kField4oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kField4oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField4oBit);

                _field4o = element._binDataVector();
            }
        }
        else if (fieldName == kField5oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, newUUID))) {
                if (MONGO_unlikely(usedFields[kField5oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField5oBit);

                _field5o = element.uuid();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kStringFieldBit]) {
            ctxt.throwMissingField(kStringFieldFieldName);
        }
    }

}


void Chained_string_inline_basic_type::serialize(BSONObjBuilder* builder) const {
    invariant(_hasStringField);

    builder->append(kStringFieldFieldName, _stringField);

    if (_field1o.is_initialized()) {
        builder->append(kField1oFieldName, _field1o.get());
    }

    if (_field2o.is_initialized()) {
        builder->append(kField2oFieldName, _field2o.get());
    }

    if (_field3o.is_initialized()) {
        builder->append(kField3oFieldName, _field3o.get());
    }

    if (_field4o.is_initialized()) {
        ConstDataRange tempCDR(_field4o.get());
        builder->append(kField4oFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

    if (_field5o.is_initialized()) {
        ConstDataRange tempCDR(_field5o.get());
        builder->append(kField5oFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), newUUID));
    }

}


BSONObj Chained_string_inline_basic_type::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_struct_inline::kChained_string_inline_basic_typeFieldName;
constexpr StringData Chained_struct_inline::kField1oFieldName;
constexpr StringData Chained_struct_inline::kField2oFieldName;
constexpr StringData Chained_struct_inline::kField3FieldName;
constexpr StringData Chained_struct_inline::kField3oFieldName;
constexpr StringData Chained_struct_inline::kField4oFieldName;
constexpr StringData Chained_struct_inline::kField5oFieldName;
constexpr StringData Chained_struct_inline::kStringFieldFieldName;


Chained_struct_inline::Chained_struct_inline() : _field3(mongo::idl::preparsedValue<decltype(_field3)>()), _hasField3(false) {
    // Used for initialization only
}
Chained_struct_inline::Chained_struct_inline(std::string field3) : _field3(std::move(field3)), _hasField3(true) {
    // Used for initialization only
}


Chained_struct_inline Chained_struct_inline::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_struct_inline>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_struct_inline::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<8> usedFields;
    const size_t kStringFieldBit = 0;
    const size_t kField1oBit = 1;
    const size_t kField2oBit = 2;
    const size_t kField3oBit = 3;
    const size_t kField4oBit = 4;
    const size_t kField5oBit = 5;
    const size_t kField3Bit = 6;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kStringFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kStringFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStringFieldBit);

                _chained_string_inline_basic_type.setStringField(element.str());
            }
        }
        else if (fieldName == kField1oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField1oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1oBit);

                _chained_string_inline_basic_type.setField1o(boost::optional<StringData>(element.str()));
            }
        }
        else if (fieldName == kField2oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField2oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2oBit);

                _chained_string_inline_basic_type.setField2o(boost::optional<std::int32_t>(element._numberInt()));
            }
        }
        else if (fieldName == kField3oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kField3oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3oBit);

                _chained_string_inline_basic_type.setField3o(boost::optional<mongo::BSONObj>(element.Obj()));
            }
        }
        else if (fieldName == kField4oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kField4oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField4oBit);

                _chained_string_inline_basic_type.setField4o(boost::optional<ConstDataRange>(element._binDataVector()));
            }
        }
        else if (fieldName == kField5oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, newUUID))) {
                if (MONGO_unlikely(usedFields[kField5oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField5oBit);

                _chained_string_inline_basic_type.setField5o(boost::optional<std::array<std::uint8_t, 16>>(element.uuid()));
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                _field3 = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kStringFieldBit]) {
            ctxt.throwMissingField(kStringFieldFieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
    }

}


void Chained_struct_inline::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField3);

    {
        _chained_string_inline_basic_type.serialize(builder);
    }

    builder->append(kField3FieldName, _field3);

}


BSONObj Chained_struct_inline::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_int_enum::kValueFieldName;


One_int_enum::One_int_enum() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_int_enum::One_int_enum(mongo::idl::import::IntEnum value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_int_enum One_int_enum::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_int_enum>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_int_enum::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
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
                IDLParserErrorContext tempContext(kValueFieldName, &ctxt);
                _value = idl::import::IntEnum_parse(tempContext, element._numberInt());
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


void One_int_enum::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        builder->append(kValueFieldName, ::mongo::idl::import::IntEnum_serializer(_value));
    }

}


BSONObj One_int_enum::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_string_enum::kValueFieldName;


One_string_enum::One_string_enum() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_string_enum::One_string_enum(mongo::idl::test::StringEnumEnum value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_string_enum One_string_enum::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_string_enum>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_string_enum::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
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
                IDLParserErrorContext tempContext(kValueFieldName, &ctxt);
                _value = idl::test::StringEnum_parse(tempContext, element.valueStringData());
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


void One_string_enum::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    {
        builder->append(kValueFieldName, ::mongo::idl::test::StringEnum_serializer(_value));
    }

}


BSONObj One_string_enum::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData StructWithEnum::kField1FieldName;
constexpr StringData StructWithEnum::kField1oFieldName;
constexpr StringData StructWithEnum::kField2FieldName;
constexpr StringData StructWithEnum::kField2oFieldName;
constexpr StringData StructWithEnum::kFieldDefaultFieldName;


StructWithEnum::StructWithEnum() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _hasField1(false), _hasField2(false) {
    // Used for initialization only
}
StructWithEnum::StructWithEnum(mongo::idl::import::IntEnum field1, mongo::idl::test::StringEnumEnum field2) : _field1(std::move(field1)), _field2(std::move(field2)), _hasField1(true), _hasField2(true) {
    // Used for initialization only
}


StructWithEnum StructWithEnum::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<StructWithEnum>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void StructWithEnum::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kField1oBit = 2;
    const size_t kField2oBit = 3;
    const size_t kFieldDefaultBit = 4;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                IDLParserErrorContext tempContext(kField1FieldName, &ctxt);
                _field1 = idl::import::IntEnum_parse(tempContext, element._numberInt());
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                IDLParserErrorContext tempContext(kField2FieldName, &ctxt);
                _field2 = idl::test::StringEnum_parse(tempContext, element.valueStringData());
            }
        }
        else if (fieldName == kField1oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1oBit);

                IDLParserErrorContext tempContext(kField1oFieldName, &ctxt);
                _field1o = idl::import::IntEnum_parse(tempContext, element._numberInt());
            }
        }
        else if (fieldName == kField2oFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2oBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2oBit);

                IDLParserErrorContext tempContext(kField2oFieldName, &ctxt);
                _field2o = idl::test::StringEnum_parse(tempContext, element.valueStringData());
            }
        }
        else if (fieldName == kFieldDefaultFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kFieldDefaultBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kFieldDefaultBit);

                IDLParserErrorContext tempContext(kFieldDefaultFieldName, &ctxt);
                _fieldDefault = idl::test::StringEnum_parse(tempContext, element.valueStringData());
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kFieldDefaultBit]) {
            _fieldDefault = mongo::idl::test::StringEnumEnum::s1;
        }
    }

}


void StructWithEnum::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2);

    {
        builder->append(kField1FieldName, ::mongo::idl::import::IntEnum_serializer(_field1));
    }

    {
        builder->append(kField2FieldName, ::mongo::idl::test::StringEnum_serializer(_field2));
    }

    if (_field1o.is_initialized()) {
        builder->append(kField1oFieldName, ::mongo::idl::import::IntEnum_serializer(_field1o.get()));
    }

    if (_field2o.is_initialized()) {
        builder->append(kField2oFieldName, ::mongo::idl::test::StringEnum_serializer(_field2o.get()));
    }

    {
        builder->append(kFieldDefaultFieldName, ::mongo::idl::test::StringEnum_serializer(_fieldDefault));
    }

}


BSONObj StructWithEnum::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_variant::kValueFieldName;


One_variant::One_variant() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_variant::One_variant(stdx::variant<std::int32_t, std::string> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_variant One_variant::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_variant>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_variant::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            _hasValue = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case NumberInt:
            {
                _value = element._numberInt();
                break;
            }
            case String:
            {
                _value = element.str();
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::NumberInt, BSONType::String});
                break;
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_variant::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValueFieldName, arg);
    }, _value);

}


BSONObj One_variant::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_variant_safeInt::kValueFieldName;


One_variant_safeInt::One_variant_safeInt() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_variant_safeInt::One_variant_safeInt(stdx::variant<std::int32_t, std::string> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_variant_safeInt One_variant_safeInt::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_variant_safeInt>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_variant_safeInt::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            _hasValue = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case NumberLong:
            {
                _value = element.safeNumberInt();
                break;
            }
            case NumberInt:
            {
                _value = element.safeNumberInt();
                break;
            }
            case NumberDecimal:
            {
                _value = element.safeNumberInt();
                break;
            }
            case NumberDouble:
            {
                _value = element.safeNumberInt();
                break;
            }
            case String:
            {
                _value = element.str();
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::NumberLong, BSONType::String});
                break;
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_variant_safeInt::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValueFieldName, arg);
    }, _value);

}


BSONObj One_variant_safeInt::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_variant_compound::kValueFieldName;


One_variant_compound::One_variant_compound() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_variant_compound::One_variant_compound(stdx::variant<std::string, mongo::BSONObj, std::vector<std::string>> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_variant_compound One_variant_compound::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_variant_compound>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_variant_compound::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            _hasValue = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case Array:
                if (element.Obj().isEmpty()) {
                    std::uint32_t expectedFieldNumber{0};
                    const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                    std::vector<std::string> values;

                    const BSONObj arrayObject = element.Obj();
                    for (const auto& arrayElement : arrayObject) {
                        const auto arrayFieldName = arrayElement.fieldNameStringData();
                        std::uint32_t fieldNumber;

                        Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                        if (status.isOK()) {
                            if (fieldNumber != expectedFieldNumber) {
                                arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                            }

                            if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                values.emplace_back(arrayElement.str());
                            }
                        }
                        else {
                            arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                        }
                        ++expectedFieldNumber;
                    }
                    _value = std::move(values);
                }
                else {
                    const BSONType elemType = element.Obj().firstElement().type();
                    switch (elemType) {
                    case String:
                    {
                        std::uint32_t expectedFieldNumber{0};
                        const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                        std::vector<std::string> values;

                        const BSONObj arrayObject = element.Obj();
                        for (const auto& arrayElement : arrayObject) {
                            const auto arrayFieldName = arrayElement.fieldNameStringData();
                            std::uint32_t fieldNumber;

                            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                            if (status.isOK()) {
                                if (fieldNumber != expectedFieldNumber) {
                                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                                }

                                if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                    values.emplace_back(arrayElement.str());
                                }
                            }
                            else {
                                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                            }
                            ++expectedFieldNumber;
                        }
                        _value = std::move(values);
                        break;
                    }
                    default:
                        ctxt.throwBadType(element, {BSONType::String});
                        break;
                    }
                }
                break;
            case String:
            {
                _value = element.str();
                break;
            }
            case Object:
            {
                _value = element.Obj();
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::String, BSONType::Object});
                break;
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_variant_compound::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValueFieldName, arg);
    }, _value);

}


BSONObj One_variant_compound::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_variant_struct::kValueFieldName;


One_variant_struct::One_variant_struct() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_variant_struct::One_variant_struct(stdx::variant<std::int32_t, mongo::idl::import::One_string> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_variant_struct One_variant_struct::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_variant_struct>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_variant_struct::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            _hasValue = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case NumberInt:
            {
                _value = element._numberInt();
                break;
            }
            case Object:
                _value = mongo::idl::import::One_string::parse(ctxt, element.Obj());
                break;
            default:
                ctxt.throwBadType(element, {BSONType::NumberInt});
                break;
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_variant_struct::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValueFieldName, arg);
    }, _value);

}


BSONObj One_variant_struct::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_variant_safeInt_array::kValueFieldName;


One_variant_safeInt_array::One_variant_safeInt_array() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_variant_safeInt_array::One_variant_safeInt_array(stdx::variant<std::string, std::vector<std::int32_t>> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_variant_safeInt_array One_variant_safeInt_array::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_variant_safeInt_array>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_variant_safeInt_array::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            _hasValue = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case Array:
                if (element.Obj().isEmpty()) {
                    std::uint32_t expectedFieldNumber{0};
                    const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                    std::vector<std::int32_t> values;

                    const BSONObj arrayObject = element.Obj();
                    for (const auto& arrayElement : arrayObject) {
                        const auto arrayFieldName = arrayElement.fieldNameStringData();
                        std::uint32_t fieldNumber;

                        Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                        if (status.isOK()) {
                            if (fieldNumber != expectedFieldNumber) {
                                arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                            }

                            if (arrayCtxt.checkAndAssertTypes(arrayElement, {NumberLong, NumberInt, NumberDecimal, NumberDouble})) {
                                values.emplace_back(arrayElement.safeNumberInt());
                            }
                        }
                        else {
                            arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                        }
                        ++expectedFieldNumber;
                    }
                    _value = std::move(values);
                }
                else {
                    const BSONType elemType = element.Obj().firstElement().type();
                    switch (elemType) {
                    case NumberLong:
                    case NumberInt:
                    case NumberDecimal:
                    case NumberDouble:
                    {
                        std::uint32_t expectedFieldNumber{0};
                        const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                        std::vector<std::int32_t> values;

                        const BSONObj arrayObject = element.Obj();
                        for (const auto& arrayElement : arrayObject) {
                            const auto arrayFieldName = arrayElement.fieldNameStringData();
                            std::uint32_t fieldNumber;

                            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                            if (status.isOK()) {
                                if (fieldNumber != expectedFieldNumber) {
                                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                                }

                                if (arrayCtxt.checkAndAssertTypes(arrayElement, {NumberLong, NumberInt, NumberDecimal, NumberDouble})) {
                                    values.emplace_back(arrayElement.safeNumberInt());
                                }
                            }
                            else {
                                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                            }
                            ++expectedFieldNumber;
                        }
                        _value = std::move(values);
                        break;
                    }
                    default:
                        ctxt.throwBadType(element, {BSONType::NumberLong});
                        break;
                    }
                }
                break;
            case String:
            {
                _value = element.str();
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::String});
                break;
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_variant_safeInt_array::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValueFieldName, arg);
    }, _value);

}


BSONObj One_variant_safeInt_array::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_variant_struct_array::kValueFieldName;


One_variant_struct_array::One_variant_struct_array() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_variant_struct_array::One_variant_struct_array(stdx::variant<std::int32_t, std::vector<mongo::idl::import::One_string>> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_variant_struct_array One_variant_struct_array::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_variant_struct_array>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_variant_struct_array::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            _hasValue = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case Array:
                if (element.Obj().isEmpty()) {
                    std::uint32_t expectedFieldNumber{0};
                    const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                    std::vector<mongo::idl::import::One_string> values;

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
                                IDLParserErrorContext tempContext(kValueFieldName, &ctxt);
                                const auto localObject = arrayElement.Obj();
                                values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                            }
                        }
                        else {
                            arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                        }
                        ++expectedFieldNumber;
                    }
                    _value = std::move(values);
                }
                else {
                    const BSONType elemType = element.Obj().firstElement().type();
                    switch (elemType) {
                    case Object:
                    {
                        std::uint32_t expectedFieldNumber{0};
                        const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                        std::vector<mongo::idl::import::One_string> values;

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
                                    IDLParserErrorContext tempContext(kValueFieldName, &ctxt);
                                    const auto localObject = arrayElement.Obj();
                                    values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                                }
                            }
                            else {
                                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                            }
                            ++expectedFieldNumber;
                        }
                        _value = std::move(values);
                        break;
                    }
                    default:
                        ctxt.throwBadType(element, {BSONType::Object});
                        break;
                    }
                }
                break;
            case NumberInt:
            {
                _value = element._numberInt();
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::NumberInt});
                break;
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_variant_struct_array::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValueFieldName, arg);
    }, _value);

}


BSONObj One_variant_struct_array::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_variant_two_arrays::kValueFieldName;


One_variant_two_arrays::One_variant_two_arrays() : _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasValue(false) {
    // Used for initialization only
}
One_variant_two_arrays::One_variant_two_arrays(stdx::variant<std::vector<std::int32_t>, std::vector<std::string>> value) : _value(std::move(value)), _hasValue(true) {
    // Used for initialization only
}


One_variant_two_arrays One_variant_two_arrays::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_variant_two_arrays>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_variant_two_arrays::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            _hasValue = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case Array:
                if (element.Obj().isEmpty()) {
                    std::uint32_t expectedFieldNumber{0};
                    const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                    std::vector<std::int32_t> values;

                    const BSONObj arrayObject = element.Obj();
                    for (const auto& arrayElement : arrayObject) {
                        const auto arrayFieldName = arrayElement.fieldNameStringData();
                        std::uint32_t fieldNumber;

                        Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                        if (status.isOK()) {
                            if (fieldNumber != expectedFieldNumber) {
                                arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                            }

                            if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                                values.emplace_back(arrayElement._numberInt());
                            }
                        }
                        else {
                            arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                        }
                        ++expectedFieldNumber;
                    }
                    _value = std::move(values);
                }
                else {
                    const BSONType elemType = element.Obj().firstElement().type();
                    switch (elemType) {
                    case NumberInt:
                    {
                        std::uint32_t expectedFieldNumber{0};
                        const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                        std::vector<std::int32_t> values;

                        const BSONObj arrayObject = element.Obj();
                        for (const auto& arrayElement : arrayObject) {
                            const auto arrayFieldName = arrayElement.fieldNameStringData();
                            std::uint32_t fieldNumber;

                            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                            if (status.isOK()) {
                                if (fieldNumber != expectedFieldNumber) {
                                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                                }

                                if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                                    values.emplace_back(arrayElement._numberInt());
                                }
                            }
                            else {
                                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                            }
                            ++expectedFieldNumber;
                        }
                        _value = std::move(values);
                        break;
                    }
                    case String:
                    {
                        std::uint32_t expectedFieldNumber{0};
                        const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                        std::vector<std::string> values;

                        const BSONObj arrayObject = element.Obj();
                        for (const auto& arrayElement : arrayObject) {
                            const auto arrayFieldName = arrayElement.fieldNameStringData();
                            std::uint32_t fieldNumber;

                            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                            if (status.isOK()) {
                                if (fieldNumber != expectedFieldNumber) {
                                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                                }

                                if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                    values.emplace_back(arrayElement.str());
                                }
                            }
                            else {
                                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                            }
                            ++expectedFieldNumber;
                        }
                        _value = std::move(values);
                        break;
                    }
                    default:
                        ctxt.throwBadType(element, {BSONType::NumberInt, BSONType::String});
                        break;
                    }
                }
                break;
            default:
                ctxt.throwBadType(element, {});
                break;
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void One_variant_two_arrays::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValueFieldName, arg);
    }, _value);

}


BSONObj One_variant_two_arrays::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData One_variant_optional::kValueFieldName;


One_variant_optional::One_variant_optional()  {
    // Used for initialization only
}


One_variant_optional One_variant_optional::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<One_variant_optional>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void One_variant_optional::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kValueBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);


            const BSONType variantType = element.type();
            switch (variantType) {
            case NumberInt:
            {
                _value = element._numberInt();
                break;
            }
            case String:
            {
                _value = element.str();
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::NumberInt, BSONType::String});
                break;
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
    }

}


void One_variant_optional::serialize(BSONObjBuilder* builder) const {
    if (_value.is_initialized()) {
        stdx::visit([builder](auto&& arg) {
            idl::idlSerialize(builder, kValueFieldName, arg);
        }, _value.get());
    }

}


BSONObj One_variant_optional::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Two_variants::kValue0FieldName;
constexpr StringData Two_variants::kValue1FieldName;


Two_variants::Two_variants() : _value0(mongo::idl::preparsedValue<decltype(_value0)>()), _value1(mongo::idl::preparsedValue<decltype(_value1)>()), _hasValue0(false), _hasValue1(false) {
    // Used for initialization only
}
Two_variants::Two_variants(stdx::variant<std::int32_t, std::string> value0, stdx::variant<mongo::BSONObj, std::vector<std::string>> value1) : _value0(std::move(value0)), _value1(std::move(value1)), _hasValue0(true), _hasValue1(true) {
    // Used for initialization only
}


Two_variants Two_variants::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Two_variants>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Two_variants::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kValue0Bit = 0;
    const size_t kValue1Bit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValue0FieldName) {
            if (MONGO_unlikely(usedFields[kValue0Bit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValue0Bit);

            _hasValue0 = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case NumberInt:
            {
                _value0 = element._numberInt();
                break;
            }
            case String:
            {
                _value0 = element.str();
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::NumberInt, BSONType::String});
                break;
            }
        }
        else if (fieldName == kValue1FieldName) {
            if (MONGO_unlikely(usedFields[kValue1Bit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValue1Bit);

            _hasValue1 = true;

            const BSONType variantType = element.type();
            switch (variantType) {
            case Array:
                if (element.Obj().isEmpty()) {
                    std::uint32_t expectedFieldNumber{0};
                    const IDLParserErrorContext arrayCtxt(kValue1FieldName, &ctxt);
                    std::vector<std::string> values;

                    const BSONObj arrayObject = element.Obj();
                    for (const auto& arrayElement : arrayObject) {
                        const auto arrayFieldName = arrayElement.fieldNameStringData();
                        std::uint32_t fieldNumber;

                        Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                        if (status.isOK()) {
                            if (fieldNumber != expectedFieldNumber) {
                                arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                            }

                            if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                values.emplace_back(arrayElement.str());
                            }
                        }
                        else {
                            arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                        }
                        ++expectedFieldNumber;
                    }
                    _value1 = std::move(values);
                }
                else {
                    const BSONType elemType = element.Obj().firstElement().type();
                    switch (elemType) {
                    case String:
                    {
                        std::uint32_t expectedFieldNumber{0};
                        const IDLParserErrorContext arrayCtxt(kValue1FieldName, &ctxt);
                        std::vector<std::string> values;

                        const BSONObj arrayObject = element.Obj();
                        for (const auto& arrayElement : arrayObject) {
                            const auto arrayFieldName = arrayElement.fieldNameStringData();
                            std::uint32_t fieldNumber;

                            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                            if (status.isOK()) {
                                if (fieldNumber != expectedFieldNumber) {
                                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                                }

                                if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                    values.emplace_back(arrayElement.str());
                                }
                            }
                            else {
                                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                            }
                            ++expectedFieldNumber;
                        }
                        _value1 = std::move(values);
                        break;
                    }
                    default:
                        ctxt.throwBadType(element, {BSONType::String});
                        break;
                    }
                }
                break;
            case Object:
            {
                _value1 = element.Obj();
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::Object});
                break;
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
        if (!usedFields[kValue0Bit]) {
            ctxt.throwMissingField(kValue0FieldName);
        }
        if (!usedFields[kValue1Bit]) {
            ctxt.throwMissingField(kValue1FieldName);
        }
    }

}


void Two_variants::serialize(BSONObjBuilder* builder) const {
    invariant(_hasValue0 && _hasValue1);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValue0FieldName, arg);
    }, _value0);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kValue1FieldName, arg);
    }, _value1);

}


BSONObj Two_variants::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_struct_variant::kField1FieldName;
constexpr StringData Chained_struct_variant::kOne_variant_compoundFieldName;
constexpr StringData Chained_struct_variant::kValueFieldName;


Chained_struct_variant::Chained_struct_variant() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField1(false) {
    // Used for initialization only
}
Chained_struct_variant::Chained_struct_variant(std::string field1) : _field1(std::move(field1)), _hasField1(true) {
    // Used for initialization only
}


Chained_struct_variant Chained_struct_variant::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_struct_variant>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_struct_variant::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kValueBit = 0;
    const size_t kField1Bit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            // ignore field
        }
        else if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }
    _one_variant_compound = mongo::idl::test::One_variant_compound::parse(ctxt, bsonObject);


    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
    }

}


void Chained_struct_variant::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1);

    {
        _one_variant_compound.serialize(builder);
    }

    builder->append(kField1FieldName, _field1);

}


BSONObj Chained_struct_variant::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_struct_variant_inline::kField1FieldName;
constexpr StringData Chained_struct_variant_inline::kOne_variant_compoundFieldName;
constexpr StringData Chained_struct_variant_inline::kValueFieldName;


Chained_struct_variant_inline::Chained_struct_variant_inline() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField1(false) {
    // Used for initialization only
}
Chained_struct_variant_inline::Chained_struct_variant_inline(std::string field1) : _field1(std::move(field1)), _hasField1(true) {
    // Used for initialization only
}


Chained_struct_variant_inline Chained_struct_variant_inline::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_struct_variant_inline>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_struct_variant_inline::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kValueBit = 0;
    const size_t kField1Bit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);


            const BSONType variantType = element.type();
            switch (variantType) {
            case Array:
                if (element.Obj().isEmpty()) {
                    std::uint32_t expectedFieldNumber{0};
                    const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                    std::vector<std::string> values;

                    const BSONObj arrayObject = element.Obj();
                    for (const auto& arrayElement : arrayObject) {
                        const auto arrayFieldName = arrayElement.fieldNameStringData();
                        std::uint32_t fieldNumber;

                        Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                        if (status.isOK()) {
                            if (fieldNumber != expectedFieldNumber) {
                                arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                            }

                            if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                values.emplace_back(arrayElement.str());
                            }
                        }
                        else {
                            arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                        }
                        ++expectedFieldNumber;
                    }
                    _one_variant_compound.setValue(std::move(values));
                }
                else {
                    const BSONType elemType = element.Obj().firstElement().type();
                    switch (elemType) {
                    case String:
                    {
                        std::uint32_t expectedFieldNumber{0};
                        const IDLParserErrorContext arrayCtxt(kValueFieldName, &ctxt);
                        std::vector<std::string> values;

                        const BSONObj arrayObject = element.Obj();
                        for (const auto& arrayElement : arrayObject) {
                            const auto arrayFieldName = arrayElement.fieldNameStringData();
                            std::uint32_t fieldNumber;

                            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                            if (status.isOK()) {
                                if (fieldNumber != expectedFieldNumber) {
                                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                                }

                                if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                    values.emplace_back(arrayElement.str());
                                }
                            }
                            else {
                                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                            }
                            ++expectedFieldNumber;
                        }
                        _one_variant_compound.setValue(std::move(values));
                        break;
                    }
                    default:
                        ctxt.throwBadType(element, {BSONType::String});
                        break;
                    }
                }
                break;
            case String:
            {
                _one_variant_compound.setValue(element.str());
                break;
            }
            case Object:
            {
                _one_variant_compound.setValue(element.Obj());
                break;
            }
            default:
                ctxt.throwBadType(element, {BSONType::String, BSONType::Object});
                break;
            }
        }
        else if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element.str();
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
    }

}


void Chained_struct_variant_inline::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1);

    {
        _one_variant_compound.serialize(builder);
    }

    builder->append(kField1FieldName, _field1);

}


BSONObj Chained_struct_variant_inline::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_struct_variant_struct::kField1FieldName;
constexpr StringData Chained_struct_variant_struct::kOne_variant_structFieldName;
constexpr StringData Chained_struct_variant_struct::kValueFieldName;


Chained_struct_variant_struct::Chained_struct_variant_struct() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField1(false) {
    // Used for initialization only
}
Chained_struct_variant_struct::Chained_struct_variant_struct(std::string field1) : _field1(std::move(field1)), _hasField1(true) {
    // Used for initialization only
}


Chained_struct_variant_struct Chained_struct_variant_struct::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_struct_variant_struct>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_struct_variant_struct::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kValueBit = 0;
    const size_t kField1Bit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);

            // ignore field
        }
        else if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }
    _one_variant_struct = mongo::idl::test::One_variant_struct::parse(ctxt, bsonObject);


    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
    }

}


void Chained_struct_variant_struct::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1);

    {
        _one_variant_struct.serialize(builder);
    }

    builder->append(kField1FieldName, _field1);

}


BSONObj Chained_struct_variant_struct::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_struct_variant_struct_inline::kField1FieldName;
constexpr StringData Chained_struct_variant_struct_inline::kOne_variant_structFieldName;
constexpr StringData Chained_struct_variant_struct_inline::kValueFieldName;


Chained_struct_variant_struct_inline::Chained_struct_variant_struct_inline() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField1(false) {
    // Used for initialization only
}
Chained_struct_variant_struct_inline::Chained_struct_variant_struct_inline(std::string field1) : _field1(std::move(field1)), _hasField1(true) {
    // Used for initialization only
}


Chained_struct_variant_struct_inline Chained_struct_variant_struct_inline::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_struct_variant_struct_inline>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_struct_variant_struct_inline::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kValueBit = 0;
    const size_t kField1Bit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kValueFieldName) {
            if (MONGO_unlikely(usedFields[kValueBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kValueBit);


            const BSONType variantType = element.type();
            switch (variantType) {
            case NumberInt:
            {
                _one_variant_struct.setValue(element._numberInt());
                break;
            }
            case Object:
                _one_variant_struct.setValue(mongo::idl::import::One_string::parse(ctxt, element.Obj()));
                break;
            default:
                ctxt.throwBadType(element, {BSONType::NumberInt});
                break;
            }
        }
        else if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element.str();
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
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
    }

}


void Chained_struct_variant_struct_inline::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField1);

    {
        _one_variant_struct.serialize(builder);
    }

    builder->append(kField1FieldName, _field1);

}


BSONObj Chained_struct_variant_struct_inline::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Int_basic_ranges::kByte_range_intFieldName;
constexpr StringData Int_basic_ranges::kNegative_intFieldName;
constexpr StringData Int_basic_ranges::kNon_negative_intFieldName;
constexpr StringData Int_basic_ranges::kNon_positive_intFieldName;
constexpr StringData Int_basic_ranges::kPositive_intFieldName;
constexpr StringData Int_basic_ranges::kRange_intFieldName;


Int_basic_ranges::Int_basic_ranges() : _positive_int(mongo::idl::preparsedValue<decltype(_positive_int)>()), _negative_int(mongo::idl::preparsedValue<decltype(_negative_int)>()), _non_negative_int(mongo::idl::preparsedValue<decltype(_non_negative_int)>()), _non_positive_int(mongo::idl::preparsedValue<decltype(_non_positive_int)>()), _byte_range_int(mongo::idl::preparsedValue<decltype(_byte_range_int)>()), _range_int(mongo::idl::preparsedValue<decltype(_range_int)>()), _hasPositive_int(false), _hasNegative_int(false), _hasNon_negative_int(false), _hasNon_positive_int(false), _hasByte_range_int(false), _hasRange_int(false) {
    // Used for initialization only
}
Int_basic_ranges::Int_basic_ranges(std::int32_t positive_int, std::int32_t negative_int, std::int32_t non_negative_int, std::int32_t non_positive_int, std::int32_t byte_range_int, std::int32_t range_int) : _positive_int(std::move(positive_int)), _negative_int(std::move(negative_int)), _non_negative_int(std::move(non_negative_int)), _non_positive_int(std::move(non_positive_int)), _byte_range_int(std::move(byte_range_int)), _range_int(std::move(range_int)), _hasPositive_int(true), _hasNegative_int(true), _hasNon_negative_int(true), _hasNon_positive_int(true), _hasByte_range_int(true), _hasRange_int(true) {
    // Used for initialization only
}

void Int_basic_ranges::validatePositive_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value > 0)) {
        throwComparisonError<std::int32_t>(ctxt, "positive_int", ">"_sd, value, 0);
    }
}

void Int_basic_ranges::validatePositive_int(const std::int32_t value)
{
    if (!(value > 0)) {
        throwComparisonError<std::int32_t>("positive_int", ">"_sd, value, 0);
    }
}

void Int_basic_ranges::validateNegative_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value < 0)) {
        throwComparisonError<std::int32_t>(ctxt, "negative_int", "<"_sd, value, 0);
    }
}

void Int_basic_ranges::validateNegative_int(const std::int32_t value)
{
    if (!(value < 0)) {
        throwComparisonError<std::int32_t>("negative_int", "<"_sd, value, 0);
    }
}

void Int_basic_ranges::validateNon_negative_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value >= 0)) {
        throwComparisonError<std::int32_t>(ctxt, "non_negative_int", ">="_sd, value, 0);
    }
}

void Int_basic_ranges::validateNon_negative_int(const std::int32_t value)
{
    if (!(value >= 0)) {
        throwComparisonError<std::int32_t>("non_negative_int", ">="_sd, value, 0);
    }
}

void Int_basic_ranges::validateNon_positive_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value <= 0)) {
        throwComparisonError<std::int32_t>(ctxt, "non_positive_int", "<="_sd, value, 0);
    }
}

void Int_basic_ranges::validateNon_positive_int(const std::int32_t value)
{
    if (!(value <= 0)) {
        throwComparisonError<std::int32_t>("non_positive_int", "<="_sd, value, 0);
    }
}

void Int_basic_ranges::validateByte_range_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value >= 0)) {
        throwComparisonError<std::int32_t>(ctxt, "byte_range_int", ">="_sd, value, 0);
    }
    if (!(value < 256)) {
        throwComparisonError<std::int32_t>(ctxt, "byte_range_int", "<"_sd, value, 256);
    }
}

void Int_basic_ranges::validateByte_range_int(const std::int32_t value)
{
    if (!(value >= 0)) {
        throwComparisonError<std::int32_t>("byte_range_int", ">="_sd, value, 0);
    }
    if (!(value < 256)) {
        throwComparisonError<std::int32_t>("byte_range_int", "<"_sd, value, 256);
    }
}

void Int_basic_ranges::validateRange_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value >= -2147483647)) {
        throwComparisonError<std::int32_t>(ctxt, "range_int", ">="_sd, value, -2147483647);
    }
    if (!(value <= 2147483647)) {
        throwComparisonError<std::int32_t>(ctxt, "range_int", "<="_sd, value, 2147483647);
    }
}

void Int_basic_ranges::validateRange_int(const std::int32_t value)
{
    if (!(value >= -2147483647)) {
        throwComparisonError<std::int32_t>("range_int", ">="_sd, value, -2147483647);
    }
    if (!(value <= 2147483647)) {
        throwComparisonError<std::int32_t>("range_int", "<="_sd, value, 2147483647);
    }
}


Int_basic_ranges Int_basic_ranges::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Int_basic_ranges>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Int_basic_ranges::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<6> usedFields;
    const size_t kPositive_intBit = 0;
    const size_t kNegative_intBit = 1;
    const size_t kNon_negative_intBit = 2;
    const size_t kNon_positive_intBit = 3;
    const size_t kByte_range_intBit = 4;
    const size_t kRange_intBit = 5;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kPositive_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kPositive_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPositive_intBit);

                _hasPositive_int = true;
                {
                    auto value = element._numberInt();
                    validatePositive_int(value);
                    _positive_int = std::move(value);
                }
            }
        }
        else if (fieldName == kNegative_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kNegative_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNegative_intBit);

                _hasNegative_int = true;
                {
                    auto value = element._numberInt();
                    validateNegative_int(value);
                    _negative_int = std::move(value);
                }
            }
        }
        else if (fieldName == kNon_negative_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kNon_negative_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNon_negative_intBit);

                _hasNon_negative_int = true;
                {
                    auto value = element._numberInt();
                    validateNon_negative_int(value);
                    _non_negative_int = std::move(value);
                }
            }
        }
        else if (fieldName == kNon_positive_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kNon_positive_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNon_positive_intBit);

                _hasNon_positive_int = true;
                {
                    auto value = element._numberInt();
                    validateNon_positive_int(value);
                    _non_positive_int = std::move(value);
                }
            }
        }
        else if (fieldName == kByte_range_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kByte_range_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kByte_range_intBit);

                _hasByte_range_int = true;
                {
                    auto value = element._numberInt();
                    validateByte_range_int(value);
                    _byte_range_int = std::move(value);
                }
            }
        }
        else if (fieldName == kRange_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kRange_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kRange_intBit);

                _hasRange_int = true;
                {
                    auto value = element._numberInt();
                    validateRange_int(value);
                    _range_int = std::move(value);
                }
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kPositive_intBit]) {
            ctxt.throwMissingField(kPositive_intFieldName);
        }
        if (!usedFields[kNegative_intBit]) {
            ctxt.throwMissingField(kNegative_intFieldName);
        }
        if (!usedFields[kNon_negative_intBit]) {
            ctxt.throwMissingField(kNon_negative_intFieldName);
        }
        if (!usedFields[kNon_positive_intBit]) {
            ctxt.throwMissingField(kNon_positive_intFieldName);
        }
        if (!usedFields[kByte_range_intBit]) {
            ctxt.throwMissingField(kByte_range_intFieldName);
        }
        if (!usedFields[kRange_intBit]) {
            ctxt.throwMissingField(kRange_intFieldName);
        }
    }

}


void Int_basic_ranges::serialize(BSONObjBuilder* builder) const {
    invariant(_hasPositive_int && _hasNegative_int && _hasNon_negative_int && _hasNon_positive_int && _hasByte_range_int && _hasRange_int);

    builder->append(kPositive_intFieldName, _positive_int);

    builder->append(kNegative_intFieldName, _negative_int);

    builder->append(kNon_negative_intFieldName, _non_negative_int);

    builder->append(kNon_positive_intFieldName, _non_positive_int);

    builder->append(kByte_range_intFieldName, _byte_range_int);

    builder->append(kRange_intFieldName, _range_int);

}


BSONObj Int_basic_ranges::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Double_basic_ranges::kNegative_doubleFieldName;
constexpr StringData Double_basic_ranges::kNon_negative_doubleFieldName;
constexpr StringData Double_basic_ranges::kNon_positive_doubleFieldName;
constexpr StringData Double_basic_ranges::kPositive_doubleFieldName;
constexpr StringData Double_basic_ranges::kRange_doubleFieldName;


Double_basic_ranges::Double_basic_ranges() : _positive_double(mongo::idl::preparsedValue<decltype(_positive_double)>()), _negative_double(mongo::idl::preparsedValue<decltype(_negative_double)>()), _non_negative_double(mongo::idl::preparsedValue<decltype(_non_negative_double)>()), _non_positive_double(mongo::idl::preparsedValue<decltype(_non_positive_double)>()), _range_double(mongo::idl::preparsedValue<decltype(_range_double)>()), _hasPositive_double(false), _hasNegative_double(false), _hasNon_negative_double(false), _hasNon_positive_double(false), _hasRange_double(false) {
    // Used for initialization only
}
Double_basic_ranges::Double_basic_ranges(double positive_double, double negative_double, double non_negative_double, double non_positive_double, double range_double) : _positive_double(std::move(positive_double)), _negative_double(std::move(negative_double)), _non_negative_double(std::move(non_negative_double)), _non_positive_double(std::move(non_positive_double)), _range_double(std::move(range_double)), _hasPositive_double(true), _hasNegative_double(true), _hasNon_negative_double(true), _hasNon_positive_double(true), _hasRange_double(true) {
    // Used for initialization only
}

void Double_basic_ranges::validatePositive_double(IDLParserErrorContext& ctxt, const double value)
{
    if (!(value > 0.0)) {
        throwComparisonError<double>(ctxt, "positive_double", ">"_sd, value, 0.0);
    }
}

void Double_basic_ranges::validatePositive_double(const double value)
{
    if (!(value > 0.0)) {
        throwComparisonError<double>("positive_double", ">"_sd, value, 0.0);
    }
}

void Double_basic_ranges::validateNegative_double(IDLParserErrorContext& ctxt, const double value)
{
    if (!(value < 0.0)) {
        throwComparisonError<double>(ctxt, "negative_double", "<"_sd, value, 0.0);
    }
}

void Double_basic_ranges::validateNegative_double(const double value)
{
    if (!(value < 0.0)) {
        throwComparisonError<double>("negative_double", "<"_sd, value, 0.0);
    }
}

void Double_basic_ranges::validateNon_negative_double(IDLParserErrorContext& ctxt, const double value)
{
    if (!(value >= 0.0)) {
        throwComparisonError<double>(ctxt, "non_negative_double", ">="_sd, value, 0.0);
    }
}

void Double_basic_ranges::validateNon_negative_double(const double value)
{
    if (!(value >= 0.0)) {
        throwComparisonError<double>("non_negative_double", ">="_sd, value, 0.0);
    }
}

void Double_basic_ranges::validateNon_positive_double(IDLParserErrorContext& ctxt, const double value)
{
    if (!(value <= 0.0)) {
        throwComparisonError<double>(ctxt, "non_positive_double", "<="_sd, value, 0.0);
    }
}

void Double_basic_ranges::validateNon_positive_double(const double value)
{
    if (!(value <= 0.0)) {
        throwComparisonError<double>("non_positive_double", "<="_sd, value, 0.0);
    }
}

void Double_basic_ranges::validateRange_double(IDLParserErrorContext& ctxt, const double value)
{
    if (!(value >= -1.23456789012345e+19)) {
        throwComparisonError<double>(ctxt, "range_double", ">="_sd, value, -1.23456789012345e+19);
    }
    if (!(value <= 1.23456789012345e+19)) {
        throwComparisonError<double>(ctxt, "range_double", "<="_sd, value, 1.23456789012345e+19);
    }
}

void Double_basic_ranges::validateRange_double(const double value)
{
    if (!(value >= -1.23456789012345e+19)) {
        throwComparisonError<double>("range_double", ">="_sd, value, -1.23456789012345e+19);
    }
    if (!(value <= 1.23456789012345e+19)) {
        throwComparisonError<double>("range_double", "<="_sd, value, 1.23456789012345e+19);
    }
}


Double_basic_ranges Double_basic_ranges::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Double_basic_ranges>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Double_basic_ranges::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kPositive_doubleBit = 0;
    const size_t kNegative_doubleBit = 1;
    const size_t kNon_negative_doubleBit = 2;
    const size_t kNon_positive_doubleBit = 3;
    const size_t kRange_doubleBit = 4;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kPositive_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kPositive_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPositive_doubleBit);

                _hasPositive_double = true;
                {
                    auto value = element._numberDouble();
                    validatePositive_double(value);
                    _positive_double = std::move(value);
                }
            }
        }
        else if (fieldName == kNegative_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kNegative_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNegative_doubleBit);

                _hasNegative_double = true;
                {
                    auto value = element._numberDouble();
                    validateNegative_double(value);
                    _negative_double = std::move(value);
                }
            }
        }
        else if (fieldName == kNon_negative_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kNon_negative_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNon_negative_doubleBit);

                _hasNon_negative_double = true;
                {
                    auto value = element._numberDouble();
                    validateNon_negative_double(value);
                    _non_negative_double = std::move(value);
                }
            }
        }
        else if (fieldName == kNon_positive_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kNon_positive_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNon_positive_doubleBit);

                _hasNon_positive_double = true;
                {
                    auto value = element._numberDouble();
                    validateNon_positive_double(value);
                    _non_positive_double = std::move(value);
                }
            }
        }
        else if (fieldName == kRange_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kRange_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kRange_doubleBit);

                _hasRange_double = true;
                {
                    auto value = element._numberDouble();
                    validateRange_double(value);
                    _range_double = std::move(value);
                }
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kPositive_doubleBit]) {
            ctxt.throwMissingField(kPositive_doubleFieldName);
        }
        if (!usedFields[kNegative_doubleBit]) {
            ctxt.throwMissingField(kNegative_doubleFieldName);
        }
        if (!usedFields[kNon_negative_doubleBit]) {
            ctxt.throwMissingField(kNon_negative_doubleFieldName);
        }
        if (!usedFields[kNon_positive_doubleBit]) {
            ctxt.throwMissingField(kNon_positive_doubleFieldName);
        }
        if (!usedFields[kRange_doubleBit]) {
            ctxt.throwMissingField(kRange_doubleFieldName);
        }
    }

}


void Double_basic_ranges::serialize(BSONObjBuilder* builder) const {
    invariant(_hasPositive_double && _hasNegative_double && _hasNon_negative_double && _hasNon_positive_double && _hasRange_double);

    builder->append(kPositive_doubleFieldName, _positive_double);

    builder->append(kNegative_doubleFieldName, _negative_double);

    builder->append(kNon_negative_doubleFieldName, _non_negative_double);

    builder->append(kNon_positive_doubleFieldName, _non_positive_double);

    builder->append(kRange_doubleFieldName, _range_double);

}


BSONObj Double_basic_ranges::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Callback_validators::kDouble_nearly_intFieldName;
constexpr StringData Callback_validators::kInt_evenFieldName;
constexpr StringData Callback_validators::kString_starts_with_xFieldName;
constexpr StringData Callback_validators::kString_starts_with_x2FieldName;


Callback_validators::Callback_validators() : _int_even(mongo::idl::preparsedValue<decltype(_int_even)>()), _double_nearly_int(mongo::idl::preparsedValue<decltype(_double_nearly_int)>()), _string_starts_with_x(mongo::idl::preparsedValue<decltype(_string_starts_with_x)>()), _hasInt_even(false), _hasDouble_nearly_int(false), _hasString_starts_with_x(false) {
    // Used for initialization only
}
Callback_validators::Callback_validators(std::int32_t int_even, double double_nearly_int, std::string string_starts_with_x) : _int_even(std::move(int_even)), _double_nearly_int(std::move(double_nearly_int)), _string_starts_with_x(std::move(string_starts_with_x)), _hasInt_even(true), _hasDouble_nearly_int(true), _hasString_starts_with_x(true) {
    // Used for initialization only
}

void Callback_validators::validateInt_even(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    uassertStatusOK(validateEvenNumber(value));
}

void Callback_validators::validateInt_even(const std::int32_t value)
{
    uassertStatusOK(validateEvenNumber(value));
}

void Callback_validators::validateDouble_nearly_int(IDLParserErrorContext& ctxt, const double value)
{
    uassertStatusOK(validateNearlyInt(value));
}

void Callback_validators::validateDouble_nearly_int(const double value)
{
    uassertStatusOK(validateNearlyInt(value));
}

void Callback_validators::validateString_starts_with_x(IDLParserErrorContext& ctxt, const std::string& value)
{
    uassertStatusOK(validateStartsWith<'x'>(value));
}

void Callback_validators::validateString_starts_with_x(const std::string& value)
{
    uassertStatusOK(validateStartsWith<'x'>(value));
}

void Callback_validators::validateString_starts_with_x2(IDLParserErrorContext& ctxt, const std::string& value)
{
    uassertStatusOK(validateStartsWith<'x'>(value));
}

void Callback_validators::validateString_starts_with_x2(const std::string& value)
{
    uassertStatusOK(validateStartsWith<'x'>(value));
}


Callback_validators Callback_validators::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Callback_validators>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Callback_validators::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kInt_evenBit = 0;
    const size_t kDouble_nearly_intBit = 1;
    const size_t kString_starts_with_xBit = 2;
    const size_t kString_starts_with_x2Bit = 3;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kInt_evenFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kInt_evenBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kInt_evenBit);

                _hasInt_even = true;
                {
                    auto value = element._numberInt();
                    validateInt_even(value);
                    _int_even = std::move(value);
                }
            }
        }
        else if (fieldName == kDouble_nearly_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kDouble_nearly_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDouble_nearly_intBit);

                _hasDouble_nearly_int = true;
                {
                    auto value = element._numberDouble();
                    validateDouble_nearly_int(value);
                    _double_nearly_int = std::move(value);
                }
            }
        }
        else if (fieldName == kString_starts_with_xFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kString_starts_with_xBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kString_starts_with_xBit);

                _hasString_starts_with_x = true;
                {
                    auto value = element.str();
                    validateString_starts_with_x(value);
                    _string_starts_with_x = std::move(value);
                }
            }
        }
        else if (fieldName == kString_starts_with_x2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kString_starts_with_x2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kString_starts_with_x2Bit);

                {
                    auto value = element.str();
                    validateString_starts_with_x2(value);
                    _string_starts_with_x2 = std::move(value);
                }
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kInt_evenBit]) {
            ctxt.throwMissingField(kInt_evenFieldName);
        }
        if (!usedFields[kDouble_nearly_intBit]) {
            ctxt.throwMissingField(kDouble_nearly_intFieldName);
        }
        if (!usedFields[kString_starts_with_xBit]) {
            ctxt.throwMissingField(kString_starts_with_xFieldName);
        }
    }

}


void Callback_validators::serialize(BSONObjBuilder* builder) const {
    invariant(_hasInt_even && _hasDouble_nearly_int && _hasString_starts_with_x);

    builder->append(kInt_evenFieldName, _int_even);

    builder->append(kDouble_nearly_intFieldName, _double_nearly_int);

    builder->append(kString_starts_with_xFieldName, _string_starts_with_x);

    if (_string_starts_with_x2.is_initialized()) {
        builder->append(kString_starts_with_x2FieldName, _string_starts_with_x2.get());
    }

}


BSONObj Callback_validators::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Chained_validators::kByte_range_intFieldName;
constexpr StringData Chained_validators::kInt_basic_rangesFieldName;
constexpr StringData Chained_validators::kNegative_intFieldName;
constexpr StringData Chained_validators::kNon_negative_intFieldName;
constexpr StringData Chained_validators::kNon_positive_intFieldName;
constexpr StringData Chained_validators::kPositive_intFieldName;
constexpr StringData Chained_validators::kRange_intFieldName;


Chained_validators::Chained_validators()  {
    // Used for initialization only
}

void Chained_validators::validatePositive_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value > 0)) {
        throwComparisonError<std::int32_t>(ctxt, "positive_int", ">"_sd, value, 0);
    }
}

void Chained_validators::validatePositive_int(const std::int32_t value)
{
    if (!(value > 0)) {
        throwComparisonError<std::int32_t>("positive_int", ">"_sd, value, 0);
    }
}

void Chained_validators::validateNegative_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value < 0)) {
        throwComparisonError<std::int32_t>(ctxt, "negative_int", "<"_sd, value, 0);
    }
}

void Chained_validators::validateNegative_int(const std::int32_t value)
{
    if (!(value < 0)) {
        throwComparisonError<std::int32_t>("negative_int", "<"_sd, value, 0);
    }
}

void Chained_validators::validateNon_negative_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value >= 0)) {
        throwComparisonError<std::int32_t>(ctxt, "non_negative_int", ">="_sd, value, 0);
    }
}

void Chained_validators::validateNon_negative_int(const std::int32_t value)
{
    if (!(value >= 0)) {
        throwComparisonError<std::int32_t>("non_negative_int", ">="_sd, value, 0);
    }
}

void Chained_validators::validateNon_positive_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value <= 0)) {
        throwComparisonError<std::int32_t>(ctxt, "non_positive_int", "<="_sd, value, 0);
    }
}

void Chained_validators::validateNon_positive_int(const std::int32_t value)
{
    if (!(value <= 0)) {
        throwComparisonError<std::int32_t>("non_positive_int", "<="_sd, value, 0);
    }
}

void Chained_validators::validateByte_range_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value >= 0)) {
        throwComparisonError<std::int32_t>(ctxt, "byte_range_int", ">="_sd, value, 0);
    }
    if (!(value < 256)) {
        throwComparisonError<std::int32_t>(ctxt, "byte_range_int", "<"_sd, value, 256);
    }
}

void Chained_validators::validateByte_range_int(const std::int32_t value)
{
    if (!(value >= 0)) {
        throwComparisonError<std::int32_t>("byte_range_int", ">="_sd, value, 0);
    }
    if (!(value < 256)) {
        throwComparisonError<std::int32_t>("byte_range_int", "<"_sd, value, 256);
    }
}

void Chained_validators::validateRange_int(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    if (!(value >= -2147483647)) {
        throwComparisonError<std::int32_t>(ctxt, "range_int", ">="_sd, value, -2147483647);
    }
    if (!(value <= 2147483647)) {
        throwComparisonError<std::int32_t>(ctxt, "range_int", "<="_sd, value, 2147483647);
    }
}

void Chained_validators::validateRange_int(const std::int32_t value)
{
    if (!(value >= -2147483647)) {
        throwComparisonError<std::int32_t>("range_int", ">="_sd, value, -2147483647);
    }
    if (!(value <= 2147483647)) {
        throwComparisonError<std::int32_t>("range_int", "<="_sd, value, 2147483647);
    }
}


Chained_validators Chained_validators::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Chained_validators>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_validators::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<7> usedFields;
    const size_t kPositive_intBit = 0;
    const size_t kNegative_intBit = 1;
    const size_t kNon_negative_intBit = 2;
    const size_t kNon_positive_intBit = 3;
    const size_t kByte_range_intBit = 4;
    const size_t kRange_intBit = 5;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kPositive_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kPositive_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPositive_intBit);

                _int_basic_ranges.setPositive_int(element._numberInt());
            }
        }
        else if (fieldName == kNegative_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kNegative_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNegative_intBit);

                _int_basic_ranges.setNegative_int(element._numberInt());
            }
        }
        else if (fieldName == kNon_negative_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kNon_negative_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNon_negative_intBit);

                _int_basic_ranges.setNon_negative_int(element._numberInt());
            }
        }
        else if (fieldName == kNon_positive_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kNon_positive_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNon_positive_intBit);

                _int_basic_ranges.setNon_positive_int(element._numberInt());
            }
        }
        else if (fieldName == kByte_range_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kByte_range_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kByte_range_intBit);

                _int_basic_ranges.setByte_range_int(element._numberInt());
            }
        }
        else if (fieldName == kRange_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kRange_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kRange_intBit);

                _int_basic_ranges.setRange_int(element._numberInt());
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kPositive_intBit]) {
            ctxt.throwMissingField(kPositive_intFieldName);
        }
        if (!usedFields[kNegative_intBit]) {
            ctxt.throwMissingField(kNegative_intFieldName);
        }
        if (!usedFields[kNon_negative_intBit]) {
            ctxt.throwMissingField(kNon_negative_intFieldName);
        }
        if (!usedFields[kNon_positive_intBit]) {
            ctxt.throwMissingField(kNon_positive_intFieldName);
        }
        if (!usedFields[kByte_range_intBit]) {
            ctxt.throwMissingField(kByte_range_intFieldName);
        }
        if (!usedFields[kRange_intBit]) {
            ctxt.throwMissingField(kRange_intFieldName);
        }
    }

}


void Chained_validators::serialize(BSONObjBuilder* builder) const {
    {
        _int_basic_ranges.serialize(builder);
    }

}


BSONObj Chained_validators::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData Unusual_callback_validators::kArray_of_intFieldName;
constexpr StringData Unusual_callback_validators::kArray_of_int_optionalFieldName;
constexpr StringData Unusual_callback_validators::kInt_evenFieldName;
constexpr StringData Unusual_callback_validators::kOne_intFieldName;
constexpr StringData Unusual_callback_validators::kOne_int_arrayFieldName;
constexpr StringData Unusual_callback_validators::kOne_int_optionalFieldName;
constexpr StringData Unusual_callback_validators::kString_starts_with_xFieldName;


Unusual_callback_validators::Unusual_callback_validators() : _one_int(mongo::idl::preparsedValue<decltype(_one_int)>()), _hasArray_of_int(false), _hasOne_int(false), _hasOne_int_array(false) {
    // Used for initialization only
}
Unusual_callback_validators::Unusual_callback_validators(std::vector<std::int32_t> array_of_int, mongo::idl::import::One_int one_int, std::vector<mongo::idl::import::One_int> one_int_array) : _array_of_int(std::move(array_of_int)), _one_int(std::move(one_int)), _one_int_array(std::move(one_int_array)), _hasArray_of_int(true), _hasOne_int(true), _hasOne_int_array(true) {
    // Used for initialization only
}

void Unusual_callback_validators::validateInt_even(IDLParserErrorContext& ctxt, const std::int32_t value)
{
    uassertStatusOK(validateEvenNumber(value));
}

void Unusual_callback_validators::validateInt_even(const std::int32_t value)
{
    uassertStatusOK(validateEvenNumber(value));
}

void Unusual_callback_validators::validateString_starts_with_x(IDLParserErrorContext& ctxt, const std::string& value)
{
    uassertStatusOK(validateStartsWith<'x'>(value));
}

void Unusual_callback_validators::validateString_starts_with_x(const std::string& value)
{
    uassertStatusOK(validateStartsWith<'x'>(value));
}

void Unusual_callback_validators::validateArray_of_int(IDLParserErrorContext& ctxt, const std::vector<std::int32_t>& value)
{
    uassertStatusOK(validateEvenNumber(value));
}

void Unusual_callback_validators::validateArray_of_int(const std::vector<std::int32_t>& value)
{
    uassertStatusOK(validateEvenNumber(value));
}

void Unusual_callback_validators::validateArray_of_int_optional(IDLParserErrorContext& ctxt, const std::vector<std::int32_t>& value)
{
    uassertStatusOK(validateEvenNumber(value));
}

void Unusual_callback_validators::validateArray_of_int_optional(const std::vector<std::int32_t>& value)
{
    uassertStatusOK(validateEvenNumber(value));
}

void Unusual_callback_validators::validateOne_int(IDLParserErrorContext& ctxt, const mongo::idl::import::One_int& value)
{
    uassertStatusOK(validateOneInt(value));
}

void Unusual_callback_validators::validateOne_int(const mongo::idl::import::One_int& value)
{
    uassertStatusOK(validateOneInt(value));
}

void Unusual_callback_validators::validateOne_int_optional(IDLParserErrorContext& ctxt, const mongo::idl::import::One_int& value)
{
    uassertStatusOK(validateOneInt(value));
}

void Unusual_callback_validators::validateOne_int_optional(const mongo::idl::import::One_int& value)
{
    uassertStatusOK(validateOneInt(value));
}

void Unusual_callback_validators::validateOne_int_array(IDLParserErrorContext& ctxt, const std::vector<mongo::idl::import::One_int>& value)
{
    uassertStatusOK(validateOneInt(value));
}

void Unusual_callback_validators::validateOne_int_array(const std::vector<mongo::idl::import::One_int>& value)
{
    uassertStatusOK(validateOneInt(value));
}


Unusual_callback_validators Unusual_callback_validators::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<Unusual_callback_validators>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Unusual_callback_validators::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<7> usedFields;
    const size_t kInt_evenBit = 0;
    const size_t kString_starts_with_xBit = 1;
    const size_t kArray_of_intBit = 2;
    const size_t kArray_of_int_optionalBit = 3;
    const size_t kOne_intBit = 4;
    const size_t kOne_int_optionalBit = 5;
    const size_t kOne_int_arrayBit = 6;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kInt_evenFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kInt_evenBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kInt_evenBit);

                {
                    auto value = element._numberInt();
                    validateInt_even(value);
                    _int_even = std::move(value);
                }
            }
        }
        else if (fieldName == kString_starts_with_xFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kString_starts_with_xBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kString_starts_with_xBit);

                {
                    auto value = element.str();
                    validateString_starts_with_x(value);
                    _string_starts_with_x = std::move(value);
                }
            }
        }
        else if (fieldName == kArray_of_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kArray_of_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kArray_of_intBit);

                _hasArray_of_int = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kArray_of_intFieldName, &ctxt);
            std::vector<std::int32_t> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                        values.emplace_back(arrayElement._numberInt());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _array_of_int = std::move(values);
        }
        else if (fieldName == kArray_of_int_optionalFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kArray_of_int_optionalBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kArray_of_int_optionalBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kArray_of_int_optionalFieldName, &ctxt);
            std::vector<std::int32_t> values;

            const BSONObj arrayObject = element.Obj();
            for (const auto& arrayElement : arrayObject) {
                const auto arrayFieldName = arrayElement.fieldNameStringData();
                std::uint32_t fieldNumber;

                Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                if (status.isOK()) {
                    if (fieldNumber != expectedFieldNumber) {
                        arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                    }

                    if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                        values.emplace_back(arrayElement._numberInt());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _array_of_int_optional = std::move(values);
        }
        else if (fieldName == kOne_intFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kOne_intBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kOne_intBit);

                _hasOne_int = true;
                IDLParserErrorContext tempContext(kOne_intFieldName, &ctxt);
                const auto localObject = element.Obj();
                {
                    auto value = mongo::idl::import::One_int::parse(tempContext, localObject);
                    validateOne_int(value);
                    _one_int = std::move(value);
                }
            }
        }
        else if (fieldName == kOne_int_optionalFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kOne_int_optionalBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kOne_int_optionalBit);

                IDLParserErrorContext tempContext(kOne_int_optionalFieldName, &ctxt);
                const auto localObject = element.Obj();
                {
                    auto value = mongo::idl::import::One_int::parse(tempContext, localObject);
                    validateOne_int_optional(value);
                    _one_int_optional = std::move(value);
                }
            }
        }
        else if (fieldName == kOne_int_arrayFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kOne_int_arrayBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kOne_int_arrayBit);

                _hasOne_int_array = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kOne_int_arrayFieldName, &ctxt);
            std::vector<mongo::idl::import::One_int> values;

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
                        IDLParserErrorContext tempContext(kOne_int_arrayFieldName, &ctxt);
                        const auto localObject = arrayElement.Obj();
                        values.emplace_back(mongo::idl::import::One_int::parse(tempContext, localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _one_int_array = std::move(values);
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kArray_of_intBit]) {
            ctxt.throwMissingField(kArray_of_intFieldName);
        }
        if (!usedFields[kOne_intBit]) {
            ctxt.throwMissingField(kOne_intFieldName);
        }
        if (!usedFields[kOne_int_arrayBit]) {
            ctxt.throwMissingField(kOne_int_arrayFieldName);
        }
    }

}


void Unusual_callback_validators::serialize(BSONObjBuilder* builder) const {
    invariant(_hasArray_of_int && _hasOne_int && _hasOne_int_array);

    if (_int_even.is_initialized()) {
        builder->append(kInt_evenFieldName, _int_even.get());
    }

    if (_string_starts_with_x.is_initialized()) {
        builder->append(kString_starts_with_xFieldName, _string_starts_with_x.get());
    }

    {
        builder->append(kArray_of_intFieldName, _array_of_int);
    }

    if (_array_of_int_optional.is_initialized()) {
        builder->append(kArray_of_int_optionalFieldName, _array_of_int_optional.get());
    }

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kOne_intFieldName));
        _one_int.serialize(&subObjBuilder);
    }

    if (_one_int_optional.is_initialized()) {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kOne_int_optionalFieldName));
        _one_int_optional.get().serialize(&subObjBuilder);
    }

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kOne_int_arrayFieldName));
        for (const auto& item : _one_int_array) {
            BSONObjBuilder subObjBuilder(arrayBuilder.subobjStart());
            item.serialize(&subObjBuilder);
        }
    }

}


BSONObj Unusual_callback_validators::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData BasicIgnoredCommand::kDbNameFieldName;
constexpr StringData BasicIgnoredCommand::kField1FieldName;
constexpr StringData BasicIgnoredCommand::kField2FieldName;
constexpr StringData BasicIgnoredCommand::kCommandName;

const std::vector<StringData> BasicIgnoredCommand::_knownBSONFields {
    BasicIgnoredCommand::kField1FieldName,
    BasicIgnoredCommand::kField2FieldName,
    BasicIgnoredCommand::kCommandName,
};
const std::vector<StringData> BasicIgnoredCommand::_knownOP_MSGFields {
    BasicIgnoredCommand::kDbNameFieldName,
    BasicIgnoredCommand::kField1FieldName,
    BasicIgnoredCommand::kField2FieldName,
    BasicIgnoredCommand::kCommandName,
};

BasicIgnoredCommand::BasicIgnoredCommand() : _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _hasField1(false), _hasField2(false), _hasDbName(false) {
    // Used for initialization only
}
BasicIgnoredCommand::BasicIgnoredCommand(std::int32_t field1, std::string field2) : _field1(std::move(field1)), _field2(std::move(field2)), _hasField1(true), _hasField2(true), _hasDbName(true) {
    // Used for initialization only
}


BasicIgnoredCommand BasicIgnoredCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<BasicIgnoredCommand>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void BasicIgnoredCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kDbNameBit = 2;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

}

BasicIgnoredCommand BasicIgnoredCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<BasicIgnoredCommand>();
    object.parseProtected(ctxt, request);
    return object;
}
void BasicIgnoredCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kDbNameBit = 2;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

}

void BasicIgnoredCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasDbName);

    builder->append("BasicIgnoredCommand"_sd, 1);
    builder->append(kField1FieldName, _field1);

    builder->append(kField2FieldName, _field2);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest BasicIgnoredCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasField2 && _hasDbName);

        builder->append("BasicIgnoredCommand"_sd, 1);
        builder->append(kField1FieldName, _field1);

        builder->append(kField2FieldName, _field2);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj BasicIgnoredCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData BasicConcatenateWithDbCommand::kDbNameFieldName;
constexpr StringData BasicConcatenateWithDbCommand::kField1FieldName;
constexpr StringData BasicConcatenateWithDbCommand::kField2FieldName;
constexpr StringData BasicConcatenateWithDbCommand::kCommandName;

const std::vector<StringData> BasicConcatenateWithDbCommand::_knownBSONFields {
    BasicConcatenateWithDbCommand::kField1FieldName,
    BasicConcatenateWithDbCommand::kField2FieldName,
    BasicConcatenateWithDbCommand::kCommandName,
};
const std::vector<StringData> BasicConcatenateWithDbCommand::_knownOP_MSGFields {
    BasicConcatenateWithDbCommand::kDbNameFieldName,
    BasicConcatenateWithDbCommand::kField1FieldName,
    BasicConcatenateWithDbCommand::kField2FieldName,
    BasicConcatenateWithDbCommand::kCommandName,
};

BasicConcatenateWithDbCommand::BasicConcatenateWithDbCommand(const NamespaceString nss) : _nss(std::move(nss)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _dbName(nss.db().toString()), _hasField1(false), _hasField2(false), _hasDbName(true) {
    // Used for initialization only
}
BasicConcatenateWithDbCommand::BasicConcatenateWithDbCommand(const NamespaceString nss, std::int32_t field1, std::string field2) : _nss(std::move(nss)), _field1(std::move(field1)), _field2(std::move(field2)), _dbName(nss.db().toString()), _hasField1(true), _hasField2(true), _hasDbName(true) {
    // Used for initialization only
}


BasicConcatenateWithDbCommand BasicConcatenateWithDbCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    BasicConcatenateWithDbCommand object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void BasicConcatenateWithDbCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

BasicConcatenateWithDbCommand BasicConcatenateWithDbCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    BasicConcatenateWithDbCommand object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void BasicConcatenateWithDbCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

void BasicConcatenateWithDbCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasDbName);

    invariant(!_nss.isEmpty());
    builder->append("BasicConcatenateWithDbCommand"_sd, _nss.coll());

    builder->append(kField1FieldName, _field1);

    builder->append(kField2FieldName, _field2);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest BasicConcatenateWithDbCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasField2 && _hasDbName);

        invariant(!_nss.isEmpty());
        builder->append("BasicConcatenateWithDbCommand"_sd, _nss.coll());

        builder->append(kField1FieldName, _field1);

        builder->append(kField2FieldName, _field2);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj BasicConcatenateWithDbCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData BasicConcatenateWithDbOrUUIDCommand::kDbNameFieldName;
constexpr StringData BasicConcatenateWithDbOrUUIDCommand::kField1FieldName;
constexpr StringData BasicConcatenateWithDbOrUUIDCommand::kField2FieldName;
constexpr StringData BasicConcatenateWithDbOrUUIDCommand::kCommandName;

const std::vector<StringData> BasicConcatenateWithDbOrUUIDCommand::_knownBSONFields {
    BasicConcatenateWithDbOrUUIDCommand::kField1FieldName,
    BasicConcatenateWithDbOrUUIDCommand::kField2FieldName,
    BasicConcatenateWithDbOrUUIDCommand::kCommandName,
};
const std::vector<StringData> BasicConcatenateWithDbOrUUIDCommand::_knownOP_MSGFields {
    BasicConcatenateWithDbOrUUIDCommand::kDbNameFieldName,
    BasicConcatenateWithDbOrUUIDCommand::kField1FieldName,
    BasicConcatenateWithDbOrUUIDCommand::kField2FieldName,
    BasicConcatenateWithDbOrUUIDCommand::kCommandName,
};

BasicConcatenateWithDbOrUUIDCommand::BasicConcatenateWithDbOrUUIDCommand(const NamespaceStringOrUUID nssOrUUID) : _nssOrUUID(std::move(nssOrUUID)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _dbName(nssOrUUID.uuid() ? nssOrUUID.dbname() : nssOrUUID.nss().get().db().toString()), _hasField1(false), _hasField2(false), _hasDbName(true) {
    // Used for initialization only
}
BasicConcatenateWithDbOrUUIDCommand::BasicConcatenateWithDbOrUUIDCommand(const NamespaceStringOrUUID nssOrUUID, std::int32_t field1, std::string field2) : _nssOrUUID(std::move(nssOrUUID)), _field1(std::move(field1)), _field2(std::move(field2)), _dbName(nssOrUUID.uuid() ? nssOrUUID.dbname() : nssOrUUID.nss().get().db().toString()), _hasField1(true), _hasField2(true), _hasDbName(true) {
    // Used for initialization only
}


BasicConcatenateWithDbOrUUIDCommand BasicConcatenateWithDbOrUUIDCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    BasicConcatenateWithDbOrUUIDCommand object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void BasicConcatenateWithDbOrUUIDCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nssOrUUID.nss() || _nssOrUUID.uuid());
    _nssOrUUID = ctxt.parseNsOrUUID(_dbName, commandElement);
}

BasicConcatenateWithDbOrUUIDCommand BasicConcatenateWithDbOrUUIDCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    BasicConcatenateWithDbOrUUIDCommand object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void BasicConcatenateWithDbOrUUIDCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nssOrUUID.nss() || _nssOrUUID.uuid());
    _nssOrUUID = ctxt.parseNsOrUUID(_dbName, commandElement);
}

void BasicConcatenateWithDbOrUUIDCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasDbName);

    _nssOrUUID.serialize(builder, "BasicConcatenateWithDbOrUUIDCommand"_sd);

    builder->append(kField1FieldName, _field1);

    builder->append(kField2FieldName, _field2);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest BasicConcatenateWithDbOrUUIDCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasField2 && _hasDbName);

        _nssOrUUID.serialize(builder, "BasicConcatenateWithDbOrUUIDCommand"_sd);

        builder->append(kField1FieldName, _field1);

        builder->append(kField2FieldName, _field2);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj BasicConcatenateWithDbOrUUIDCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData BasicNamespaceConstGetterCommand::kDbNameFieldName;
constexpr StringData BasicNamespaceConstGetterCommand::kField1FieldName;
constexpr StringData BasicNamespaceConstGetterCommand::kCommandName;

const std::vector<StringData> BasicNamespaceConstGetterCommand::_knownBSONFields {
    BasicNamespaceConstGetterCommand::kField1FieldName,
    BasicNamespaceConstGetterCommand::kCommandName,
};
const std::vector<StringData> BasicNamespaceConstGetterCommand::_knownOP_MSGFields {
    BasicNamespaceConstGetterCommand::kDbNameFieldName,
    BasicNamespaceConstGetterCommand::kField1FieldName,
    BasicNamespaceConstGetterCommand::kCommandName,
};

BasicNamespaceConstGetterCommand::BasicNamespaceConstGetterCommand(const NamespaceStringOrUUID nssOrUUID) : _nssOrUUID(std::move(nssOrUUID)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _dbName(nssOrUUID.uuid() ? nssOrUUID.dbname() : nssOrUUID.nss().get().db().toString()), _hasField1(false), _hasDbName(true) {
    // Used for initialization only
}
BasicNamespaceConstGetterCommand::BasicNamespaceConstGetterCommand(const NamespaceStringOrUUID nssOrUUID, std::int32_t field1) : _nssOrUUID(std::move(nssOrUUID)), _field1(std::move(field1)), _dbName(nssOrUUID.uuid() ? nssOrUUID.dbname() : nssOrUUID.nss().get().db().toString()), _hasField1(true), _hasDbName(true) {
    // Used for initialization only
}


BasicNamespaceConstGetterCommand BasicNamespaceConstGetterCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    BasicNamespaceConstGetterCommand object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void BasicNamespaceConstGetterCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nssOrUUID.nss() || _nssOrUUID.uuid());
    _nssOrUUID = ctxt.parseNsOrUUID(_dbName, commandElement);
}

BasicNamespaceConstGetterCommand BasicNamespaceConstGetterCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    BasicNamespaceConstGetterCommand object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void BasicNamespaceConstGetterCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nssOrUUID.nss() || _nssOrUUID.uuid());
    _nssOrUUID = ctxt.parseNsOrUUID(_dbName, commandElement);
}

void BasicNamespaceConstGetterCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasDbName);

    _nssOrUUID.serialize(builder, "BasicNamespaceConstGetterCommand"_sd);

    builder->append(kField1FieldName, _field1);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest BasicNamespaceConstGetterCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasDbName);

        _nssOrUUID.serialize(builder, "BasicNamespaceConstGetterCommand"_sd);

        builder->append(kField1FieldName, _field1);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj BasicNamespaceConstGetterCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData KnownFieldCommand::kDbNameFieldName;
constexpr StringData KnownFieldCommand::kField1FieldName;
constexpr StringData KnownFieldCommand::kMaxTimeMSFieldName;
constexpr StringData KnownFieldCommand::kCommandName;

const std::vector<StringData> KnownFieldCommand::_knownBSONFields {
    KnownFieldCommand::kField1FieldName,
    KnownFieldCommand::kMaxTimeMSFieldName,
    KnownFieldCommand::kCommandName,
};
const std::vector<StringData> KnownFieldCommand::_knownOP_MSGFields {
    KnownFieldCommand::kDbNameFieldName,
    KnownFieldCommand::kField1FieldName,
    KnownFieldCommand::kMaxTimeMSFieldName,
    KnownFieldCommand::kCommandName,
};

KnownFieldCommand::KnownFieldCommand(const NamespaceString nss) : _nss(std::move(nss)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _maxTimeMS(mongo::idl::preparsedValue<decltype(_maxTimeMS)>()), _dbName(nss.db().toString()), _hasField1(false), _hasMaxTimeMS(false), _hasDbName(true) {
    // Used for initialization only
}
KnownFieldCommand::KnownFieldCommand(const NamespaceString nss, std::int32_t field1, std::int32_t maxTimeMS) : _nss(std::move(nss)), _field1(std::move(field1)), _maxTimeMS(std::move(maxTimeMS)), _dbName(nss.db().toString()), _hasField1(true), _hasMaxTimeMS(true), _hasDbName(true) {
    // Used for initialization only
}


KnownFieldCommand KnownFieldCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    KnownFieldCommand object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void KnownFieldCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kMaxTimeMSBit = 1;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kMaxTimeMSFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kMaxTimeMSBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMaxTimeMSBit);

                _hasMaxTimeMS = true;
                _maxTimeMS = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kMaxTimeMSBit]) {
            ctxt.throwMissingField(kMaxTimeMSFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

KnownFieldCommand KnownFieldCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    KnownFieldCommand object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void KnownFieldCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<3> usedFields;
    const size_t kField1Bit = 0;
    const size_t kMaxTimeMSBit = 1;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kMaxTimeMSFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kMaxTimeMSBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMaxTimeMSBit);

                _hasMaxTimeMS = true;
                _maxTimeMS = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kMaxTimeMSBit]) {
            ctxt.throwMissingField(kMaxTimeMSFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

void KnownFieldCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasMaxTimeMS && _hasDbName);

    invariant(!_nss.isEmpty());
    builder->append("KnownFieldCommand"_sd, _nss.coll());

    builder->append(kField1FieldName, _field1);

    builder->append(kMaxTimeMSFieldName, _maxTimeMS);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest KnownFieldCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasMaxTimeMS && _hasDbName);

        invariant(!_nss.isEmpty());
        builder->append("KnownFieldCommand"_sd, _nss.coll());

        builder->append(kField1FieldName, _field1);

        builder->append(kMaxTimeMSFieldName, _maxTimeMS);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj KnownFieldCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData DocSequenceCommand::kDbNameFieldName;
constexpr StringData DocSequenceCommand::kField1FieldName;
constexpr StringData DocSequenceCommand::kField2FieldName;
constexpr StringData DocSequenceCommand::kObjectsFieldName;
constexpr StringData DocSequenceCommand::kObjects_customFieldName;
constexpr StringData DocSequenceCommand::kStructsFieldName;
constexpr StringData DocSequenceCommand::kCommandName;

const std::vector<StringData> DocSequenceCommand::_knownBSONFields {
    DocSequenceCommand::kField1FieldName,
    DocSequenceCommand::kField2FieldName,
    DocSequenceCommand::kObjectsFieldName,
    DocSequenceCommand::kObjects_customFieldName,
    DocSequenceCommand::kStructsFieldName,
    DocSequenceCommand::kCommandName,
};
const std::vector<StringData> DocSequenceCommand::_knownOP_MSGFields {
    DocSequenceCommand::kDbNameFieldName,
    DocSequenceCommand::kField1FieldName,
    DocSequenceCommand::kField2FieldName,
    DocSequenceCommand::kObjectsFieldName,
    DocSequenceCommand::kObjects_customFieldName,
    DocSequenceCommand::kStructsFieldName,
    DocSequenceCommand::kCommandName,
};

DocSequenceCommand::DocSequenceCommand(const NamespaceString nss) : _nss(std::move(nss)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _dbName(nss.db().toString()), _hasField1(false), _hasField2(false), _hasStructs(false), _hasObjects(false), _hasDbName(true) {
    // Used for initialization only
}
DocSequenceCommand::DocSequenceCommand(const NamespaceString nss, std::int32_t field1, std::string field2, std::vector<mongo::idl::import::One_string> structs, std::vector<mongo::BSONObj> objects) : _nss(std::move(nss)), _field1(std::move(field1)), _field2(std::move(field2)), _structs(std::move(structs)), _objects(std::move(objects)), _dbName(nss.db().toString()), _hasField1(true), _hasField2(true), _hasStructs(true), _hasObjects(true), _hasDbName(true) {
    // Used for initialization only
}


DocSequenceCommand DocSequenceCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    DocSequenceCommand object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void DocSequenceCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<6> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kStructsBit = 2;
    const size_t kObjectsBit = 3;
    const size_t kObjects_customBit = 4;
    const size_t kDbNameBit = 5;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
            }
        }
        else if (fieldName == kStructsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kStructsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStructsBit);

                _hasStructs = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kStructsFieldName, &ctxt);
            std::vector<mongo::idl::import::One_string> values;

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
                        IDLParserErrorContext tempContext(kStructsFieldName, &ctxt);
                        const auto localObject = arrayElement.Obj();
                        values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _structs = std::move(values);
        }
        else if (fieldName == kObjectsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kObjectsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjectsBit);

                _hasObjects = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kObjectsFieldName, &ctxt);
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
                        values.emplace_back(arrayElement.Obj());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _objects = std::move(values);
        }
        else if (fieldName == kObjects_customFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kObjects_customBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjects_customBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kObjects_customFieldName, &ctxt);
            std::vector<mongo::ObjectBasicType> values;

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
                        values.emplace_back(ObjectBasicType::parseFromBSON(localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _objects_custom = std::move(values);
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kStructsBit]) {
            ctxt.throwMissingField(kStructsFieldName);
        }
        if (!usedFields[kObjectsBit]) {
            ctxt.throwMissingField(kObjectsFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

DocSequenceCommand DocSequenceCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    DocSequenceCommand object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void DocSequenceCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<6> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kStructsBit = 2;
    const size_t kObjectsBit = 3;
    const size_t kObjects_customBit = 4;
    const size_t kDbNameBit = 5;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
            }
        }
        else if (fieldName == kStructsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kStructsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStructsBit);

                _hasStructs = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kStructsFieldName, &ctxt);
            std::vector<mongo::idl::import::One_string> values;

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
                        IDLParserErrorContext tempContext(kStructsFieldName, &ctxt);
                        const auto localObject = arrayElement.Obj();
                        values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _structs = std::move(values);
        }
        else if (fieldName == kObjectsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kObjectsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjectsBit);

                _hasObjects = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kObjectsFieldName, &ctxt);
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
                        values.emplace_back(arrayElement.Obj());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _objects = std::move(values);
        }
        else if (fieldName == kObjects_customFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kObjects_customBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjects_customBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kObjects_customFieldName, &ctxt);
            std::vector<mongo::ObjectBasicType> values;

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
                        values.emplace_back(ObjectBasicType::parseFromBSON(localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _objects_custom = std::move(values);
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

    for (auto&& sequence : request.sequences) {

        if (sequence.name == kStructsFieldName) {
            if (MONGO_unlikely(usedFields[kStructsBit])) {
                ctxt.throwDuplicateField(sequence.name);
            }

            usedFields.set(kStructsBit);

            _hasStructs = true;
            std::vector<mongo::idl::import::One_string> values;

            for (const BSONObj& sequenceObject : sequence.objs) {
                IDLParserErrorContext tempContext(kStructsFieldName, &ctxt);
                values.emplace_back(mongo::idl::import::One_string::parse(tempContext, sequenceObject));
            }
            _structs = std::move(values);
        }
        else if (sequence.name == kObjectsFieldName) {
            if (MONGO_unlikely(usedFields[kObjectsBit])) {
                ctxt.throwDuplicateField(sequence.name);
            }

            usedFields.set(kObjectsBit);

            _hasObjects = true;
            std::vector<mongo::BSONObj> values;

            for (const BSONObj& sequenceObject : sequence.objs) {
                values.emplace_back(sequenceObject);
            }
            _objects = std::move(values);
        }
        else if (sequence.name == kObjects_customFieldName) {
            if (MONGO_unlikely(usedFields[kObjects_customBit])) {
                ctxt.throwDuplicateField(sequence.name);
            }

            usedFields.set(kObjects_customBit);

            std::vector<mongo::ObjectBasicType> values;

            for (const BSONObj& sequenceObject : sequence.objs) {
                values.emplace_back(mongo::ObjectBasicType::parseFromBSON(sequenceObject));
            }
            _objects_custom = std::move(values);
        }
        else {
            ctxt.throwUnknownField(sequence.name);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kStructsBit]) {
            ctxt.throwMissingField(kStructsFieldName);
        }
        if (!usedFields[kObjectsBit]) {
            ctxt.throwMissingField(kObjectsFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

void DocSequenceCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasStructs && _hasObjects && _hasDbName);

    invariant(!_nss.isEmpty());
    builder->append("DocSequenceCommand"_sd, _nss.coll());

    builder->append(kField1FieldName, _field1);

    builder->append(kField2FieldName, _field2);

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kStructsFieldName));
        for (const auto& item : _structs) {
            BSONObjBuilder subObjBuilder(arrayBuilder.subobjStart());
            item.serialize(&subObjBuilder);
        }
    }

    {
        builder->append(kObjectsFieldName, _objects);
    }

    if (_objects_custom.is_initialized()) {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kObjects_customFieldName));
        for (const auto& item : _objects_custom.get()) {
            const BSONObj localObject = item.serializeToBSON();
            arrayBuilder.append(localObject);
        }
    }

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest DocSequenceCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasField2 && _hasStructs && _hasObjects && _hasDbName);

        invariant(!_nss.isEmpty());
        builder->append("DocSequenceCommand"_sd, _nss.coll());

        builder->append(kField1FieldName, _field1);

        builder->append(kField2FieldName, _field2);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    {
        OpMsg::DocumentSequence documentSequence;
        documentSequence.name = kStructsFieldName.toString();
        for (const auto& item : _structs) {
            BSONObjBuilder builder;
            item.serialize(&builder);
            documentSequence.objs.push_back(builder.obj());
        }
        request.sequences.emplace_back(documentSequence);
    }

    {
        OpMsg::DocumentSequence documentSequence;
        documentSequence.name = kObjectsFieldName.toString();
        for (const auto& item : _objects) {
            documentSequence.objs.push_back(item);
        }
        request.sequences.emplace_back(documentSequence);
    }

    if (_objects_custom.is_initialized()) {
        OpMsg::DocumentSequence documentSequence;
        documentSequence.name = kObjects_customFieldName.toString();
        for (const auto& item : _objects_custom.get()) {
            documentSequence.objs.push_back(item.serializeToBSON());
        }
        request.sequences.emplace_back(documentSequence);
    }

    return request;
}

BSONObj DocSequenceCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData DocSequenceCommandNonStrict::kDbNameFieldName;
constexpr StringData DocSequenceCommandNonStrict::kField1FieldName;
constexpr StringData DocSequenceCommandNonStrict::kField2FieldName;
constexpr StringData DocSequenceCommandNonStrict::kObjectsFieldName;
constexpr StringData DocSequenceCommandNonStrict::kObjects_customFieldName;
constexpr StringData DocSequenceCommandNonStrict::kStructsFieldName;
constexpr StringData DocSequenceCommandNonStrict::kCommandName;

const std::vector<StringData> DocSequenceCommandNonStrict::_knownBSONFields {
    DocSequenceCommandNonStrict::kField1FieldName,
    DocSequenceCommandNonStrict::kField2FieldName,
    DocSequenceCommandNonStrict::kObjectsFieldName,
    DocSequenceCommandNonStrict::kObjects_customFieldName,
    DocSequenceCommandNonStrict::kStructsFieldName,
    DocSequenceCommandNonStrict::kCommandName,
};
const std::vector<StringData> DocSequenceCommandNonStrict::_knownOP_MSGFields {
    DocSequenceCommandNonStrict::kDbNameFieldName,
    DocSequenceCommandNonStrict::kField1FieldName,
    DocSequenceCommandNonStrict::kField2FieldName,
    DocSequenceCommandNonStrict::kObjectsFieldName,
    DocSequenceCommandNonStrict::kObjects_customFieldName,
    DocSequenceCommandNonStrict::kStructsFieldName,
    DocSequenceCommandNonStrict::kCommandName,
};

DocSequenceCommandNonStrict::DocSequenceCommandNonStrict(const NamespaceString nss) : _nss(std::move(nss)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _field2(mongo::idl::preparsedValue<decltype(_field2)>()), _dbName(nss.db().toString()), _hasField1(false), _hasField2(false), _hasStructs(false), _hasObjects(false), _hasDbName(true) {
    // Used for initialization only
}
DocSequenceCommandNonStrict::DocSequenceCommandNonStrict(const NamespaceString nss, std::int32_t field1, std::string field2, std::vector<mongo::idl::import::One_string> structs, std::vector<mongo::BSONObj> objects) : _nss(std::move(nss)), _field1(std::move(field1)), _field2(std::move(field2)), _structs(std::move(structs)), _objects(std::move(objects)), _dbName(nss.db().toString()), _hasField1(true), _hasField2(true), _hasStructs(true), _hasObjects(true), _hasDbName(true) {
    // Used for initialization only
}


DocSequenceCommandNonStrict DocSequenceCommandNonStrict::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    DocSequenceCommandNonStrict object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void DocSequenceCommandNonStrict::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<6> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kStructsBit = 2;
    const size_t kObjectsBit = 3;
    const size_t kObjects_customBit = 4;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
            }
        }
        else if (fieldName == kStructsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kStructsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStructsBit);

                _hasStructs = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kStructsFieldName, &ctxt);
            std::vector<mongo::idl::import::One_string> values;

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
                        IDLParserErrorContext tempContext(kStructsFieldName, &ctxt);
                        const auto localObject = arrayElement.Obj();
                        values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _structs = std::move(values);
        }
        else if (fieldName == kObjectsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kObjectsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjectsBit);

                _hasObjects = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kObjectsFieldName, &ctxt);
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
                        values.emplace_back(arrayElement.Obj());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _objects = std::move(values);
        }
        else if (fieldName == kObjects_customFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kObjects_customBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjects_customBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kObjects_customFieldName, &ctxt);
            std::vector<mongo::ObjectBasicType> values;

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
                        values.emplace_back(ObjectBasicType::parseFromBSON(localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _objects_custom = std::move(values);
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kStructsBit]) {
            ctxt.throwMissingField(kStructsFieldName);
        }
        if (!usedFields[kObjectsBit]) {
            ctxt.throwMissingField(kObjectsFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

DocSequenceCommandNonStrict DocSequenceCommandNonStrict::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    DocSequenceCommandNonStrict object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void DocSequenceCommandNonStrict::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<6> usedFields;
    const size_t kField1Bit = 0;
    const size_t kField2Bit = 1;
    const size_t kStructsBit = 2;
    const size_t kObjectsBit = 3;
    const size_t kObjects_customBit = 4;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
            }
        }
        else if (fieldName == kField2FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kField2Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField2Bit);

                _hasField2 = true;
                _field2 = element.str();
            }
        }
        else if (fieldName == kStructsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kStructsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStructsBit);

                _hasStructs = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kStructsFieldName, &ctxt);
            std::vector<mongo::idl::import::One_string> values;

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
                        IDLParserErrorContext tempContext(kStructsFieldName, &ctxt);
                        const auto localObject = arrayElement.Obj();
                        values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _structs = std::move(values);
        }
        else if (fieldName == kObjectsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kObjectsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjectsBit);

                _hasObjects = true;
            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kObjectsFieldName, &ctxt);
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
                        values.emplace_back(arrayElement.Obj());
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _objects = std::move(values);
        }
        else if (fieldName == kObjects_customFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kObjects_customBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kObjects_customBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kObjects_customFieldName, &ctxt);
            std::vector<mongo::ObjectBasicType> values;

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
                        values.emplace_back(ObjectBasicType::parseFromBSON(localObject));
                    }
                }
                else {
                    arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                }
                ++expectedFieldNumber;
            }
            _objects_custom = std::move(values);
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

    for (auto&& sequence : request.sequences) {

        if (sequence.name == kStructsFieldName) {
            if (MONGO_unlikely(usedFields[kStructsBit])) {
                ctxt.throwDuplicateField(sequence.name);
            }

            usedFields.set(kStructsBit);

            _hasStructs = true;
            std::vector<mongo::idl::import::One_string> values;

            for (const BSONObj& sequenceObject : sequence.objs) {
                IDLParserErrorContext tempContext(kStructsFieldName, &ctxt);
                values.emplace_back(mongo::idl::import::One_string::parse(tempContext, sequenceObject));
            }
            _structs = std::move(values);
        }
        else if (sequence.name == kObjectsFieldName) {
            if (MONGO_unlikely(usedFields[kObjectsBit])) {
                ctxt.throwDuplicateField(sequence.name);
            }

            usedFields.set(kObjectsBit);

            _hasObjects = true;
            std::vector<mongo::BSONObj> values;

            for (const BSONObj& sequenceObject : sequence.objs) {
                values.emplace_back(sequenceObject);
            }
            _objects = std::move(values);
        }
        else if (sequence.name == kObjects_customFieldName) {
            if (MONGO_unlikely(usedFields[kObjects_customBit])) {
                ctxt.throwDuplicateField(sequence.name);
            }

            usedFields.set(kObjects_customBit);

            std::vector<mongo::ObjectBasicType> values;

            for (const BSONObj& sequenceObject : sequence.objs) {
                values.emplace_back(mongo::ObjectBasicType::parseFromBSON(sequenceObject));
            }
            _objects_custom = std::move(values);
        }
        else {
            auto push_result = usedFieldSet.insert(sequence.name);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(sequence.name);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kField2Bit]) {
            ctxt.throwMissingField(kField2FieldName);
        }
        if (!usedFields[kStructsBit]) {
            ctxt.throwMissingField(kStructsFieldName);
        }
        if (!usedFields[kObjectsBit]) {
            ctxt.throwMissingField(kObjectsFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

void DocSequenceCommandNonStrict::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasField2 && _hasStructs && _hasObjects && _hasDbName);

    invariant(!_nss.isEmpty());
    builder->append("DocSequenceCommandNonStrict"_sd, _nss.coll());

    builder->append(kField1FieldName, _field1);

    builder->append(kField2FieldName, _field2);

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kStructsFieldName));
        for (const auto& item : _structs) {
            BSONObjBuilder subObjBuilder(arrayBuilder.subobjStart());
            item.serialize(&subObjBuilder);
        }
    }

    {
        builder->append(kObjectsFieldName, _objects);
    }

    if (_objects_custom.is_initialized()) {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kObjects_customFieldName));
        for (const auto& item : _objects_custom.get()) {
            const BSONObj localObject = item.serializeToBSON();
            arrayBuilder.append(localObject);
        }
    }

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest DocSequenceCommandNonStrict::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasField2 && _hasStructs && _hasObjects && _hasDbName);

        invariant(!_nss.isEmpty());
        builder->append("DocSequenceCommandNonStrict"_sd, _nss.coll());

        builder->append(kField1FieldName, _field1);

        builder->append(kField2FieldName, _field2);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    {
        OpMsg::DocumentSequence documentSequence;
        documentSequence.name = kStructsFieldName.toString();
        for (const auto& item : _structs) {
            BSONObjBuilder builder;
            item.serialize(&builder);
            documentSequence.objs.push_back(builder.obj());
        }
        request.sequences.emplace_back(documentSequence);
    }

    {
        OpMsg::DocumentSequence documentSequence;
        documentSequence.name = kObjectsFieldName.toString();
        for (const auto& item : _objects) {
            documentSequence.objs.push_back(item);
        }
        request.sequences.emplace_back(documentSequence);
    }

    if (_objects_custom.is_initialized()) {
        OpMsg::DocumentSequence documentSequence;
        documentSequence.name = kObjects_customFieldName.toString();
        for (const auto& item : _objects_custom.get()) {
            documentSequence.objs.push_back(item.serializeToBSON());
        }
        request.sequences.emplace_back(documentSequence);
    }

    return request;
}

BSONObj DocSequenceCommandNonStrict::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData Chained_command_type_mixed::kAnotherChainedTypeFieldName;
constexpr StringData Chained_command_type_mixed::kChainedStringBasicTypeFieldName;
constexpr StringData Chained_command_type_mixed::kChained_typeFieldName;
constexpr StringData Chained_command_type_mixed::kDbNameFieldName;
constexpr StringData Chained_command_type_mixed::kField3FieldName;
constexpr StringData Chained_command_type_mixed::kStringFieldFieldName;
constexpr StringData Chained_command_type_mixed::kCommandName;

const std::vector<StringData> Chained_command_type_mixed::_knownBSONFields {
    Chained_command_type_mixed::kAnotherChainedTypeFieldName,
    Chained_command_type_mixed::kChainedStringBasicTypeFieldName,
    Chained_command_type_mixed::kChained_typeFieldName,
    Chained_command_type_mixed::kField3FieldName,
    Chained_command_type_mixed::kStringFieldFieldName,
    Chained_command_type_mixed::kCommandName,
};
const std::vector<StringData> Chained_command_type_mixed::_knownOP_MSGFields {
    Chained_command_type_mixed::kAnotherChainedTypeFieldName,
    Chained_command_type_mixed::kChainedStringBasicTypeFieldName,
    Chained_command_type_mixed::kChained_typeFieldName,
    Chained_command_type_mixed::kDbNameFieldName,
    Chained_command_type_mixed::kField3FieldName,
    Chained_command_type_mixed::kStringFieldFieldName,
    Chained_command_type_mixed::kCommandName,
};

Chained_command_type_mixed::Chained_command_type_mixed(const NamespaceString nss) : _nss(std::move(nss)), _field3(mongo::idl::preparsedValue<decltype(_field3)>()), _dbName(nss.db().toString()), _hasField3(false), _hasDbName(true) {
    // Used for initialization only
}
Chained_command_type_mixed::Chained_command_type_mixed(const NamespaceString nss, std::int32_t field3) : _nss(std::move(nss)), _field3(std::move(field3)), _dbName(nss.db().toString()), _hasField3(true), _hasDbName(true) {
    // Used for initialization only
}


Chained_command_type_mixed Chained_command_type_mixed::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    NamespaceString localNS;
    Chained_command_type_mixed object(localNS);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Chained_command_type_mixed::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<6> usedFields;
    const size_t kStringFieldBit = 0;
    const size_t kField3Bit = 1;
    const size_t kDbNameBit = 2;
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

        if (fieldName == kStringFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kStringFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStringFieldBit);

                _chainedStringBasicType.setStringField(element.str());
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                _field3 = element._numberInt();
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
    _chained_type = ChainedType::parseFromBSON(bsonObject);

    _anotherChainedType = AnotherChainedType::parseFromBSON(bsonObject);


    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kStringFieldBit]) {
            ctxt.throwMissingField(kStringFieldFieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

Chained_command_type_mixed Chained_command_type_mixed::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    NamespaceString localNS;
    Chained_command_type_mixed object(localNS);
    object.parseProtected(ctxt, request);
    return object;
}
void Chained_command_type_mixed::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<6> usedFields;
    const size_t kStringFieldBit = 0;
    const size_t kField3Bit = 1;
    const size_t kDbNameBit = 2;
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

        if (fieldName == kStringFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kStringFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStringFieldBit);

                _chainedStringBasicType.setStringField(element.str());
            }
        }
        else if (fieldName == kField3FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField3Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField3Bit);

                _hasField3 = true;
                _field3 = element._numberInt();
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
    _chained_type = ChainedType::parseFromBSON(request.body);

    _anotherChainedType = AnotherChainedType::parseFromBSON(request.body);


    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kStringFieldBit]) {
            ctxt.throwMissingField(kStringFieldFieldName);
        }
        if (!usedFields[kField3Bit]) {
            ctxt.throwMissingField(kField3FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    invariant(_nss.isEmpty());
    _nss = ctxt.parseNSCollectionRequired(_dbName, commandElement, false);
}

void Chained_command_type_mixed::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField3 && _hasDbName);

    invariant(!_nss.isEmpty());
    builder->append("chained_command_type_mixed"_sd, _nss.coll());

    {
        _chained_type.serializeToBSON(builder);
    }

    {
        _anotherChainedType.serializeToBSON(builder);
    }

    {
        _chainedStringBasicType.serialize(builder);
    }

    builder->append(kField3FieldName, _field3);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest Chained_command_type_mixed::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField3 && _hasDbName);

        invariant(!_nss.isEmpty());
        builder->append("chained_command_type_mixed"_sd, _nss.coll());

        {
            _chained_type.serializeToBSON(builder);
        }

        {
            _anotherChainedType.serializeToBSON(builder);
        }

        {
            _chainedStringBasicType.serialize(builder);
        }

        builder->append(kField3FieldName, _field3);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj Chained_command_type_mixed::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandTypeStringCommand::kCommandParameterFieldName;
constexpr StringData CommandTypeStringCommand::kDbNameFieldName;
constexpr StringData CommandTypeStringCommand::kField1FieldName;
constexpr StringData CommandTypeStringCommand::kCommandName;

const std::vector<StringData> CommandTypeStringCommand::_knownBSONFields {
    CommandTypeStringCommand::kField1FieldName,
    CommandTypeStringCommand::kCommandName,
};
const std::vector<StringData> CommandTypeStringCommand::_knownOP_MSGFields {
    CommandTypeStringCommand::kDbNameFieldName,
    CommandTypeStringCommand::kField1FieldName,
    CommandTypeStringCommand::kCommandName,
};

CommandTypeStringCommand::CommandTypeStringCommand(const std::string commandParameter) : _commandParameter(std::move(commandParameter)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField1(false), _hasDbName(false) {
    // Used for initialization only
}
CommandTypeStringCommand::CommandTypeStringCommand(const std::string commandParameter, std::int32_t field1) : _commandParameter(std::move(commandParameter)), _field1(std::move(field1)), _hasField1(true), _hasDbName(true) {
    // Used for initialization only
}


CommandTypeStringCommand CommandTypeStringCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<std::string>();
    CommandTypeStringCommand object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandTypeStringCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, String))) {
            _commandParameter = commandElement.str();
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

CommandTypeStringCommand CommandTypeStringCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<std::string>();
    CommandTypeStringCommand object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void CommandTypeStringCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, String))) {
            _commandParameter = commandElement.str();
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

void CommandTypeStringCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasDbName);

    builder->append(kCommandParameterFieldName, _commandParameter);
    builder->append(kField1FieldName, _field1);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandTypeStringCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasDbName);

        builder->append(kCommandParameterFieldName, _commandParameter);
        builder->append(kField1FieldName, _field1);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandTypeStringCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandTypeArrayObjectCommand::kCommandParameterFieldName;
constexpr StringData CommandTypeArrayObjectCommand::kDbNameFieldName;
constexpr StringData CommandTypeArrayObjectCommand::kCommandName;

const std::vector<StringData> CommandTypeArrayObjectCommand::_knownBSONFields {
    CommandTypeArrayObjectCommand::kCommandName,
};
const std::vector<StringData> CommandTypeArrayObjectCommand::_knownOP_MSGFields {
    CommandTypeArrayObjectCommand::kDbNameFieldName,
    CommandTypeArrayObjectCommand::kCommandName,
};

CommandTypeArrayObjectCommand::CommandTypeArrayObjectCommand(const std::vector<mongo::BSONObj> commandParameter) : _commandParameter(std::move(commandParameter)), _hasDbName(false) {
    // Used for initialization only
}


CommandTypeArrayObjectCommand CommandTypeArrayObjectCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<std::vector<mongo::BSONObj>>();
    CommandTypeArrayObjectCommand object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandTypeArrayObjectCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Array))) {
        }
        std::uint32_t expectedFieldNumber{0};
        const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
        std::vector<mongo::BSONObj> values;

        const BSONObj arrayObject = commandElement.Obj();
        for (const auto& arrayElement : arrayObject) {
            const auto arrayFieldName = arrayElement.fieldNameStringData();
            std::uint32_t fieldNumber;

            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
            if (status.isOK()) {
                if (fieldNumber != expectedFieldNumber) {
                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                }

                if (arrayCtxt.checkAndAssertType(arrayElement, Object)) {
                    values.emplace_back(arrayElement.Obj());
                }
            }
            else {
                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
            }
            ++expectedFieldNumber;
        }
        _commandParameter = std::move(values);
    }
}

CommandTypeArrayObjectCommand CommandTypeArrayObjectCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<std::vector<mongo::BSONObj>>();
    CommandTypeArrayObjectCommand object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void CommandTypeArrayObjectCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Array))) {
        }
        std::uint32_t expectedFieldNumber{0};
        const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
        std::vector<mongo::BSONObj> values;

        const BSONObj arrayObject = commandElement.Obj();
        for (const auto& arrayElement : arrayObject) {
            const auto arrayFieldName = arrayElement.fieldNameStringData();
            std::uint32_t fieldNumber;

            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
            if (status.isOK()) {
                if (fieldNumber != expectedFieldNumber) {
                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                }

                if (arrayCtxt.checkAndAssertType(arrayElement, Object)) {
                    values.emplace_back(arrayElement.Obj());
                }
            }
            else {
                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
            }
            ++expectedFieldNumber;
        }
        _commandParameter = std::move(values);
    }
}

void CommandTypeArrayObjectCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    {
        builder->append(kCommandParameterFieldName, _commandParameter);
    }
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandTypeArrayObjectCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        {
            builder->append(kCommandParameterFieldName, _commandParameter);
        }
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandTypeArrayObjectCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandTypeStructCommand::kCommandParameterFieldName;
constexpr StringData CommandTypeStructCommand::kDbNameFieldName;
constexpr StringData CommandTypeStructCommand::kCommandName;

const std::vector<StringData> CommandTypeStructCommand::_knownBSONFields {
    CommandTypeStructCommand::kCommandName,
};
const std::vector<StringData> CommandTypeStructCommand::_knownOP_MSGFields {
    CommandTypeStructCommand::kDbNameFieldName,
    CommandTypeStructCommand::kCommandName,
};

CommandTypeStructCommand::CommandTypeStructCommand(const mongo::idl::import::One_string commandParameter) : _commandParameter(std::move(commandParameter)), _hasDbName(false) {
    // Used for initialization only
}


CommandTypeStructCommand CommandTypeStructCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::idl::import::One_string>();
    CommandTypeStructCommand object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandTypeStructCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Object))) {
            IDLParserErrorContext tempContext(kCommandParameterFieldName, &ctxt);
            const auto localObject = commandElement.Obj();
            _commandParameter = mongo::idl::import::One_string::parse(tempContext, localObject);
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

CommandTypeStructCommand CommandTypeStructCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::idl::import::One_string>();
    CommandTypeStructCommand object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void CommandTypeStructCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Object))) {
            IDLParserErrorContext tempContext(kCommandParameterFieldName, &ctxt);
            const auto localObject = commandElement.Obj();
            _commandParameter = mongo::idl::import::One_string::parse(tempContext, localObject);
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

void CommandTypeStructCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kCommandParameterFieldName));
        _commandParameter.serialize(&subObjBuilder);
    }
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandTypeStructCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        {
            BSONObjBuilder subObjBuilder(builder->subobjStart(kCommandParameterFieldName));
            _commandParameter.serialize(&subObjBuilder);
        }
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandTypeStructCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandTypeArrayStructCommand::kCommandParameterFieldName;
constexpr StringData CommandTypeArrayStructCommand::kDbNameFieldName;
constexpr StringData CommandTypeArrayStructCommand::kCommandName;

const std::vector<StringData> CommandTypeArrayStructCommand::_knownBSONFields {
    CommandTypeArrayStructCommand::kCommandName,
};
const std::vector<StringData> CommandTypeArrayStructCommand::_knownOP_MSGFields {
    CommandTypeArrayStructCommand::kDbNameFieldName,
    CommandTypeArrayStructCommand::kCommandName,
};

CommandTypeArrayStructCommand::CommandTypeArrayStructCommand(const std::vector<mongo::idl::import::One_string> commandParameter) : _commandParameter(std::move(commandParameter)), _hasDbName(false) {
    // Used for initialization only
}


CommandTypeArrayStructCommand CommandTypeArrayStructCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<std::vector<mongo::idl::import::One_string>>();
    CommandTypeArrayStructCommand object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandTypeArrayStructCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Array))) {
        }
        std::uint32_t expectedFieldNumber{0};
        const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
        std::vector<mongo::idl::import::One_string> values;

        const BSONObj arrayObject = commandElement.Obj();
        for (const auto& arrayElement : arrayObject) {
            const auto arrayFieldName = arrayElement.fieldNameStringData();
            std::uint32_t fieldNumber;

            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
            if (status.isOK()) {
                if (fieldNumber != expectedFieldNumber) {
                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                }

                if (arrayCtxt.checkAndAssertType(arrayElement, Object)) {
                    IDLParserErrorContext tempContext(kCommandParameterFieldName, &ctxt);
                    const auto localObject = arrayElement.Obj();
                    values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                }
            }
            else {
                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
            }
            ++expectedFieldNumber;
        }
        _commandParameter = std::move(values);
    }
}

CommandTypeArrayStructCommand CommandTypeArrayStructCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<std::vector<mongo::idl::import::One_string>>();
    CommandTypeArrayStructCommand object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void CommandTypeArrayStructCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Array))) {
        }
        std::uint32_t expectedFieldNumber{0};
        const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
        std::vector<mongo::idl::import::One_string> values;

        const BSONObj arrayObject = commandElement.Obj();
        for (const auto& arrayElement : arrayObject) {
            const auto arrayFieldName = arrayElement.fieldNameStringData();
            std::uint32_t fieldNumber;

            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
            if (status.isOK()) {
                if (fieldNumber != expectedFieldNumber) {
                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                }

                if (arrayCtxt.checkAndAssertType(arrayElement, Object)) {
                    IDLParserErrorContext tempContext(kCommandParameterFieldName, &ctxt);
                    const auto localObject = arrayElement.Obj();
                    values.emplace_back(mongo::idl::import::One_string::parse(tempContext, localObject));
                }
            }
            else {
                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
            }
            ++expectedFieldNumber;
        }
        _commandParameter = std::move(values);
    }
}

void CommandTypeArrayStructCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    {
        BSONArrayBuilder arrayBuilder(builder->subarrayStart(kCommandParameterFieldName));
        for (const auto& item : _commandParameter) {
            BSONObjBuilder subObjBuilder(arrayBuilder.subobjStart());
            item.serialize(&subObjBuilder);
        }
    }
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandTypeArrayStructCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        {
            BSONArrayBuilder arrayBuilder(builder->subarrayStart(kCommandParameterFieldName));
            for (const auto& item : _commandParameter) {
                BSONObjBuilder subObjBuilder(arrayBuilder.subobjStart());
                item.serialize(&subObjBuilder);
            }
        }
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandTypeArrayStructCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandTypeStructValidatorCommand::kCommandParameterFieldName;
constexpr StringData CommandTypeStructValidatorCommand::kDbNameFieldName;
constexpr StringData CommandTypeStructValidatorCommand::kCommandName;

const std::vector<StringData> CommandTypeStructValidatorCommand::_knownBSONFields {
    CommandTypeStructValidatorCommand::kCommandName,
};
const std::vector<StringData> CommandTypeStructValidatorCommand::_knownOP_MSGFields {
    CommandTypeStructValidatorCommand::kDbNameFieldName,
    CommandTypeStructValidatorCommand::kCommandName,
};

CommandTypeStructValidatorCommand::CommandTypeStructValidatorCommand(const mongo::idl::test::Int_basic_ranges commandParameter) : _commandParameter(std::move(commandParameter)), _hasDbName(false) {
    // Used for initialization only
}


CommandTypeStructValidatorCommand CommandTypeStructValidatorCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::idl::test::Int_basic_ranges>();
    CommandTypeStructValidatorCommand object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandTypeStructValidatorCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Object))) {
            IDLParserErrorContext tempContext(kCommandParameterFieldName, &ctxt);
            const auto localObject = commandElement.Obj();
            _commandParameter = mongo::idl::test::Int_basic_ranges::parse(tempContext, localObject);
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

CommandTypeStructValidatorCommand CommandTypeStructValidatorCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<mongo::idl::test::Int_basic_ranges>();
    CommandTypeStructValidatorCommand object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void CommandTypeStructValidatorCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Object))) {
            IDLParserErrorContext tempContext(kCommandParameterFieldName, &ctxt);
            const auto localObject = commandElement.Obj();
            _commandParameter = mongo::idl::test::Int_basic_ranges::parse(tempContext, localObject);
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

void CommandTypeStructValidatorCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kCommandParameterFieldName));
        _commandParameter.serialize(&subObjBuilder);
    }
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandTypeStructValidatorCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        {
            BSONObjBuilder subObjBuilder(builder->subobjStart(kCommandParameterFieldName));
            _commandParameter.serialize(&subObjBuilder);
        }
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandTypeStructValidatorCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandTypeVariantCommand::kCommandParameterFieldName;
constexpr StringData CommandTypeVariantCommand::kDbNameFieldName;
constexpr StringData CommandTypeVariantCommand::kCommandName;

const std::vector<StringData> CommandTypeVariantCommand::_knownBSONFields {
    CommandTypeVariantCommand::kCommandName,
};
const std::vector<StringData> CommandTypeVariantCommand::_knownOP_MSGFields {
    CommandTypeVariantCommand::kDbNameFieldName,
    CommandTypeVariantCommand::kCommandName,
};

CommandTypeVariantCommand::CommandTypeVariantCommand(const stdx::variant<std::int32_t, std::string, std::vector<std::string>> commandParameter) : _commandParameter(std::move(commandParameter)), _hasDbName(false) {
    // Used for initialization only
}


CommandTypeVariantCommand CommandTypeVariantCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<stdx::variant<std::int32_t, std::string, std::vector<std::string>>>();
    CommandTypeVariantCommand object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandTypeVariantCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

        const BSONType variantType = commandElement.type();
        switch (variantType) {
        case Array:
            if (commandElement.Obj().isEmpty()) {
                std::uint32_t expectedFieldNumber{0};
                const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
                std::vector<std::string> values;

                const BSONObj arrayObject = commandElement.Obj();
                for (const auto& arrayElement : arrayObject) {
                    const auto arrayFieldName = arrayElement.fieldNameStringData();
                    std::uint32_t fieldNumber;

                    Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                    if (status.isOK()) {
                        if (fieldNumber != expectedFieldNumber) {
                            arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                        }

                        if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                            values.emplace_back(arrayElement.str());
                        }
                    }
                    else {
                        arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                    }
                    ++expectedFieldNumber;
                }
                _commandParameter = std::move(values);
            }
            else {
                const BSONType elemType = commandElement.Obj().firstElement().type();
                switch (elemType) {
                case String:
                {
                    std::uint32_t expectedFieldNumber{0};
                    const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
                    std::vector<std::string> values;

                    const BSONObj arrayObject = commandElement.Obj();
                    for (const auto& arrayElement : arrayObject) {
                        const auto arrayFieldName = arrayElement.fieldNameStringData();
                        std::uint32_t fieldNumber;

                        Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                        if (status.isOK()) {
                            if (fieldNumber != expectedFieldNumber) {
                                arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                            }

                            if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                values.emplace_back(arrayElement.str());
                            }
                        }
                        else {
                            arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                        }
                        ++expectedFieldNumber;
                    }
                    _commandParameter = std::move(values);
                    break;
                }
                default:
                    ctxt.throwBadType(commandElement, {BSONType::String});
                    break;
                }
            }
            break;
        case NumberInt:
        {
            _commandParameter = commandElement._numberInt();
            break;
        }
        case String:
        {
            _commandParameter = commandElement.str();
            break;
        }
        default:
            ctxt.throwBadType(commandElement, {BSONType::NumberInt, BSONType::String});
            break;
        }
    }
}

CommandTypeVariantCommand CommandTypeVariantCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<stdx::variant<std::int32_t, std::string, std::vector<std::string>>>();
    CommandTypeVariantCommand object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void CommandTypeVariantCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

        const BSONType variantType = commandElement.type();
        switch (variantType) {
        case Array:
            if (commandElement.Obj().isEmpty()) {
                std::uint32_t expectedFieldNumber{0};
                const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
                std::vector<std::string> values;

                const BSONObj arrayObject = commandElement.Obj();
                for (const auto& arrayElement : arrayObject) {
                    const auto arrayFieldName = arrayElement.fieldNameStringData();
                    std::uint32_t fieldNumber;

                    Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                    if (status.isOK()) {
                        if (fieldNumber != expectedFieldNumber) {
                            arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                        }

                        if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                            values.emplace_back(arrayElement.str());
                        }
                    }
                    else {
                        arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                    }
                    ++expectedFieldNumber;
                }
                _commandParameter = std::move(values);
            }
            else {
                const BSONType elemType = commandElement.Obj().firstElement().type();
                switch (elemType) {
                case String:
                {
                    std::uint32_t expectedFieldNumber{0};
                    const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
                    std::vector<std::string> values;

                    const BSONObj arrayObject = commandElement.Obj();
                    for (const auto& arrayElement : arrayObject) {
                        const auto arrayFieldName = arrayElement.fieldNameStringData();
                        std::uint32_t fieldNumber;

                        Status status = NumberParser{}(arrayFieldName, &fieldNumber);
                        if (status.isOK()) {
                            if (fieldNumber != expectedFieldNumber) {
                                arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                            }

                            if (arrayCtxt.checkAndAssertType(arrayElement, String)) {
                                values.emplace_back(arrayElement.str());
                            }
                        }
                        else {
                            arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
                        }
                        ++expectedFieldNumber;
                    }
                    _commandParameter = std::move(values);
                    break;
                }
                default:
                    ctxt.throwBadType(commandElement, {BSONType::String});
                    break;
                }
            }
            break;
        case NumberInt:
        {
            _commandParameter = commandElement._numberInt();
            break;
        }
        case String:
        {
            _commandParameter = commandElement.str();
            break;
        }
        default:
            ctxt.throwBadType(commandElement, {BSONType::NumberInt, BSONType::String});
            break;
        }
    }
}

void CommandTypeVariantCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kCommandParameterFieldName, arg);
    }, _commandParameter);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandTypeVariantCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        stdx::visit([builder](auto&& arg) {
            idl::idlSerialize(builder, kCommandParameterFieldName, arg);
        }, _commandParameter);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandTypeVariantCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandTypeVariantStructCommand::kCommandParameterFieldName;
constexpr StringData CommandTypeVariantStructCommand::kDbNameFieldName;
constexpr StringData CommandTypeVariantStructCommand::kCommandName;

const std::vector<StringData> CommandTypeVariantStructCommand::_knownBSONFields {
    CommandTypeVariantStructCommand::kCommandName,
};
const std::vector<StringData> CommandTypeVariantStructCommand::_knownOP_MSGFields {
    CommandTypeVariantStructCommand::kDbNameFieldName,
    CommandTypeVariantStructCommand::kCommandName,
};

CommandTypeVariantStructCommand::CommandTypeVariantStructCommand(const stdx::variant<bool, mongo::idl::import::One_string> commandParameter) : _commandParameter(std::move(commandParameter)), _hasDbName(false) {
    // Used for initialization only
}


CommandTypeVariantStructCommand CommandTypeVariantStructCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<stdx::variant<bool, mongo::idl::import::One_string>>();
    CommandTypeVariantStructCommand object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandTypeVariantStructCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

        const BSONType variantType = commandElement.type();
        switch (variantType) {
        case Bool:
        {
            _commandParameter = commandElement.boolean();
            break;
        }
        case Object:
            _commandParameter = mongo::idl::import::One_string::parse(ctxt, commandElement.Obj());
            break;
        default:
            ctxt.throwBadType(commandElement, {BSONType::Bool});
            break;
        }
    }
}

CommandTypeVariantStructCommand CommandTypeVariantStructCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<stdx::variant<bool, mongo::idl::import::One_string>>();
    CommandTypeVariantStructCommand object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void CommandTypeVariantStructCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            commandElement = element;
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

        const BSONType variantType = commandElement.type();
        switch (variantType) {
        case Bool:
        {
            _commandParameter = commandElement.boolean();
            break;
        }
        case Object:
            _commandParameter = mongo::idl::import::One_string::parse(ctxt, commandElement.Obj());
            break;
        default:
            ctxt.throwBadType(commandElement, {BSONType::Bool});
            break;
        }
    }
}

void CommandTypeVariantStructCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    stdx::visit([builder](auto&& arg) {
        idl::idlSerialize(builder, kCommandParameterFieldName, arg);
    }, _commandParameter);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandTypeVariantStructCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        stdx::visit([builder](auto&& arg) {
            idl::idlSerialize(builder, kCommandParameterFieldName, arg);
        }, _commandParameter);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandTypeVariantStructCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData WellNamedCommand::kCommandParameterFieldName;
constexpr StringData WellNamedCommand::kDbNameFieldName;
constexpr StringData WellNamedCommand::kField1FieldName;
constexpr StringData WellNamedCommand::kCommandName;

const std::vector<StringData> WellNamedCommand::_knownBSONFields {
    WellNamedCommand::kField1FieldName,
    WellNamedCommand::kCommandName,
};
const std::vector<StringData> WellNamedCommand::_knownOP_MSGFields {
    WellNamedCommand::kDbNameFieldName,
    WellNamedCommand::kField1FieldName,
    WellNamedCommand::kCommandName,
};

WellNamedCommand::WellNamedCommand(const std::string commandParameter) : _commandParameter(std::move(commandParameter)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField1(false), _hasDbName(false) {
    // Used for initialization only
}
WellNamedCommand::WellNamedCommand(const std::string commandParameter, std::int32_t field1) : _commandParameter(std::move(commandParameter)), _field1(std::move(field1)), _hasField1(true), _hasDbName(true) {
    // Used for initialization only
}


WellNamedCommand WellNamedCommand::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<std::string>();
    WellNamedCommand object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void WellNamedCommand::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, String))) {
            _commandParameter = commandElement.str();
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

WellNamedCommand WellNamedCommand::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<std::string>();
    WellNamedCommand object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void WellNamedCommand::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, String))) {
            _commandParameter = commandElement.str();
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

void WellNamedCommand::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasDbName);

    builder->append(kCommandParameterFieldName, _commandParameter);
    builder->append(kField1FieldName, _field1);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest WellNamedCommand::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasDbName);

        builder->append(kCommandParameterFieldName, _commandParameter);
        builder->append(kField1FieldName, _field1);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj WellNamedCommand::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData Int_type_command::kCommandParameterFieldName;
constexpr StringData Int_type_command::kDbNameFieldName;
constexpr StringData Int_type_command::kField1FieldName;
constexpr StringData Int_type_command::kCommandName;

const std::vector<StringData> Int_type_command::_knownBSONFields {
    Int_type_command::kField1FieldName,
    Int_type_command::kCommandName,
};
const std::vector<StringData> Int_type_command::_knownOP_MSGFields {
    Int_type_command::kDbNameFieldName,
    Int_type_command::kField1FieldName,
    Int_type_command::kCommandName,
};

Int_type_command::Int_type_command(const std::int32_t commandParameter) : _commandParameter(std::move(commandParameter)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField1(false), _hasDbName(false) {
    // Used for initialization only
}
Int_type_command::Int_type_command(const std::int32_t commandParameter, std::int32_t field1) : _commandParameter(std::move(commandParameter)), _field1(std::move(field1)), _hasField1(true), _hasDbName(true) {
    // Used for initialization only
}


Int_type_command Int_type_command::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<std::int32_t>();
    Int_type_command object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Int_type_command::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, NumberInt))) {
            _commandParameter = commandElement._numberInt();
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

Int_type_command Int_type_command::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<std::int32_t>();
    Int_type_command object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void Int_type_command::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, NumberInt))) {
            _commandParameter = commandElement._numberInt();
        }
        else {
            ctxt.throwMissingField(kCommandParameterFieldName);
        }
    }
}

void Int_type_command::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasDbName);

    builder->append(kCommandParameterFieldName, _commandParameter);
    builder->append(kField1FieldName, _field1);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest Int_type_command::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasDbName);

        builder->append(kCommandParameterFieldName, _commandParameter);
        builder->append(kField1FieldName, _field1);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj Int_type_command::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData Int_array_type_command::kCommandParameterFieldName;
constexpr StringData Int_array_type_command::kDbNameFieldName;
constexpr StringData Int_array_type_command::kField1FieldName;
constexpr StringData Int_array_type_command::kCommandName;

const std::vector<StringData> Int_array_type_command::_knownBSONFields {
    Int_array_type_command::kField1FieldName,
    Int_array_type_command::kCommandName,
};
const std::vector<StringData> Int_array_type_command::_knownOP_MSGFields {
    Int_array_type_command::kDbNameFieldName,
    Int_array_type_command::kField1FieldName,
    Int_array_type_command::kCommandName,
};

Int_array_type_command::Int_array_type_command(const std::vector<std::int32_t> commandParameter) : _commandParameter(std::move(commandParameter)), _field1(mongo::idl::preparsedValue<decltype(_field1)>()), _hasField1(false), _hasDbName(false) {
    // Used for initialization only
}
Int_array_type_command::Int_array_type_command(const std::vector<std::int32_t> commandParameter, std::int32_t field1) : _commandParameter(std::move(commandParameter)), _field1(std::move(field1)), _hasField1(true), _hasDbName(true) {
    // Used for initialization only
}


Int_array_type_command Int_array_type_command::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto localCmdType = mongo::idl::preparsedValue<std::vector<std::int32_t>>();
    Int_array_type_command object(localCmdType);
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void Int_array_type_command::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Array))) {
        }
        std::uint32_t expectedFieldNumber{0};
        const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
        std::vector<std::int32_t> values;

        const BSONObj arrayObject = commandElement.Obj();
        for (const auto& arrayElement : arrayObject) {
            const auto arrayFieldName = arrayElement.fieldNameStringData();
            std::uint32_t fieldNumber;

            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
            if (status.isOK()) {
                if (fieldNumber != expectedFieldNumber) {
                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                }

                if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                    values.emplace_back(arrayElement._numberInt());
                }
            }
            else {
                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
            }
            ++expectedFieldNumber;
        }
        _commandParameter = std::move(values);
    }
}

Int_array_type_command Int_array_type_command::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto localCmdType = mongo::idl::preparsedValue<std::vector<std::int32_t>>();
    Int_array_type_command object(localCmdType);
    object.parseProtected(ctxt, request);
    return object;
}
void Int_array_type_command::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kField1Bit = 0;
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

        if (fieldName == kField1FieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kField1Bit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kField1Bit);

                _hasField1 = true;
                _field1 = element._numberInt();
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
        if (!usedFields[kField1Bit]) {
            ctxt.throwMissingField(kField1FieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

    {
        if (MONGO_likely(ctxt.checkAndAssertType(commandElement, Array))) {
        }
        std::uint32_t expectedFieldNumber{0};
        const IDLParserErrorContext arrayCtxt(kCommandParameterFieldName, &ctxt);
        std::vector<std::int32_t> values;

        const BSONObj arrayObject = commandElement.Obj();
        for (const auto& arrayElement : arrayObject) {
            const auto arrayFieldName = arrayElement.fieldNameStringData();
            std::uint32_t fieldNumber;

            Status status = NumberParser{}(arrayFieldName, &fieldNumber);
            if (status.isOK()) {
                if (fieldNumber != expectedFieldNumber) {
                    arrayCtxt.throwBadArrayFieldNumberSequence(fieldNumber, expectedFieldNumber);
                }

                if (arrayCtxt.checkAndAssertType(arrayElement, NumberInt)) {
                    values.emplace_back(arrayElement._numberInt());
                }
            }
            else {
                arrayCtxt.throwBadArrayFieldNumberValue(arrayFieldName);
            }
            ++expectedFieldNumber;
        }
        _commandParameter = std::move(values);
    }
}

void Int_array_type_command::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasField1 && _hasDbName);

    {
        builder->append(kCommandParameterFieldName, _commandParameter);
    }
    builder->append(kField1FieldName, _field1);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest Int_array_type_command::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasField1 && _hasDbName);

        {
            builder->append(kCommandParameterFieldName, _commandParameter);
        }
        builder->append(kField1FieldName, _field1);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj Int_array_type_command::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData DoubleBasicRanges::kDbNameFieldName;
constexpr StringData DoubleBasicRanges::kNegative_doubleFieldName;
constexpr StringData DoubleBasicRanges::kPositive_doubleFieldName;
constexpr StringData DoubleBasicRanges::kCommandName;

const std::vector<StringData> DoubleBasicRanges::_knownBSONFields {
    DoubleBasicRanges::kNegative_doubleFieldName,
    DoubleBasicRanges::kPositive_doubleFieldName,
    DoubleBasicRanges::kCommandName,
};
const std::vector<StringData> DoubleBasicRanges::_knownOP_MSGFields {
    DoubleBasicRanges::kDbNameFieldName,
    DoubleBasicRanges::kNegative_doubleFieldName,
    DoubleBasicRanges::kPositive_doubleFieldName,
    DoubleBasicRanges::kCommandName,
};

DoubleBasicRanges::DoubleBasicRanges() : _positive_double(mongo::idl::preparsedValue<decltype(_positive_double)>()), _negative_double(mongo::idl::preparsedValue<decltype(_negative_double)>()), _hasPositive_double(false), _hasNegative_double(false), _hasDbName(false) {
    // Used for initialization only
}
DoubleBasicRanges::DoubleBasicRanges(double positive_double, double negative_double) : _positive_double(std::move(positive_double)), _negative_double(std::move(negative_double)), _hasPositive_double(true), _hasNegative_double(true), _hasDbName(true) {
    // Used for initialization only
}

void DoubleBasicRanges::validatePositive_double(IDLParserErrorContext& ctxt, const double value)
{
    if (!(value > 0.0)) {
        throwComparisonError<double>(ctxt, "positive_double", ">"_sd, value, 0.0);
    }
}

void DoubleBasicRanges::validatePositive_double(const double value)
{
    if (!(value > 0.0)) {
        throwComparisonError<double>("positive_double", ">"_sd, value, 0.0);
    }
}

void DoubleBasicRanges::validateNegative_double(IDLParserErrorContext& ctxt, const double value)
{
    if (!(value < 0.0)) {
        throwComparisonError<double>(ctxt, "negative_double", "<"_sd, value, 0.0);
    }
}

void DoubleBasicRanges::validateNegative_double(const double value)
{
    if (!(value < 0.0)) {
        throwComparisonError<double>("negative_double", "<"_sd, value, 0.0);
    }
}


DoubleBasicRanges DoubleBasicRanges::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<DoubleBasicRanges>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void DoubleBasicRanges::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kPositive_doubleBit = 0;
    const size_t kNegative_doubleBit = 1;
    const size_t kDbNameBit = 2;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kPositive_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kPositive_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPositive_doubleBit);

                _hasPositive_double = true;
                {
                    auto value = element._numberDouble();
                    validatePositive_double(value);
                    _positive_double = std::move(value);
                }
            }
        }
        else if (fieldName == kNegative_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kNegative_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNegative_doubleBit);

                _hasNegative_double = true;
                {
                    auto value = element._numberDouble();
                    validateNegative_double(value);
                    _negative_double = std::move(value);
                }
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
        if (!usedFields[kPositive_doubleBit]) {
            ctxt.throwMissingField(kPositive_doubleFieldName);
        }
        if (!usedFields[kNegative_doubleBit]) {
            ctxt.throwMissingField(kNegative_doubleFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

}

DoubleBasicRanges DoubleBasicRanges::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<DoubleBasicRanges>();
    object.parseProtected(ctxt, request);
    return object;
}
void DoubleBasicRanges::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<3> usedFields;
    const size_t kPositive_doubleBit = 0;
    const size_t kNegative_doubleBit = 1;
    const size_t kDbNameBit = 2;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kPositive_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kPositive_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPositive_doubleBit);

                _hasPositive_double = true;
                {
                    auto value = element._numberDouble();
                    validatePositive_double(value);
                    _positive_double = std::move(value);
                }
            }
        }
        else if (fieldName == kNegative_doubleFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberDouble))) {
                if (MONGO_unlikely(usedFields[kNegative_doubleBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNegative_doubleBit);

                _hasNegative_double = true;
                {
                    auto value = element._numberDouble();
                    validateNegative_double(value);
                    _negative_double = std::move(value);
                }
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
        if (!usedFields[kPositive_doubleBit]) {
            ctxt.throwMissingField(kPositive_doubleFieldName);
        }
        if (!usedFields[kNegative_doubleBit]) {
            ctxt.throwMissingField(kNegative_doubleFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

}

void DoubleBasicRanges::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasPositive_double && _hasNegative_double && _hasDbName);

    builder->append("validated_command"_sd, 1);
    builder->append(kPositive_doubleFieldName, _positive_double);

    builder->append(kNegative_doubleFieldName, _negative_double);

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest DoubleBasicRanges::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasPositive_double && _hasNegative_double && _hasDbName);

        builder->append("validated_command"_sd, 1);
        builder->append(kPositive_doubleFieldName, _positive_double);

        builder->append(kNegative_doubleFieldName, _negative_double);

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj DoubleBasicRanges::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandWithReplyType::kDbNameFieldName;
constexpr StringData CommandWithReplyType::kCommandName;

const std::vector<StringData> CommandWithReplyType::_knownBSONFields {
    CommandWithReplyType::kCommandName,
};
const std::vector<StringData> CommandWithReplyType::_knownOP_MSGFields {
    CommandWithReplyType::kDbNameFieldName,
    CommandWithReplyType::kCommandName,
};

CommandWithReplyType::CommandWithReplyType() : _hasDbName(false) {
    // Used for initialization only
}


CommandWithReplyType CommandWithReplyType::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<CommandWithReplyType>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandWithReplyType::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

CommandWithReplyType CommandWithReplyType::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<CommandWithReplyType>();
    object.parseProtected(ctxt, request);
    return object;
}
void CommandWithReplyType::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void CommandWithReplyType::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("CommandWithReplyType"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandWithReplyType::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("CommandWithReplyType"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandWithReplyType::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandWithOkReply::kDbNameFieldName;
constexpr StringData CommandWithOkReply::kCommandName;

const std::vector<StringData> CommandWithOkReply::_knownBSONFields {
    CommandWithOkReply::kCommandName,
};
const std::vector<StringData> CommandWithOkReply::_knownOP_MSGFields {
    CommandWithOkReply::kDbNameFieldName,
    CommandWithOkReply::kCommandName,
};

CommandWithOkReply::CommandWithOkReply() : _hasDbName(false) {
    // Used for initialization only
}


CommandWithOkReply CommandWithOkReply::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<CommandWithOkReply>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandWithOkReply::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

CommandWithOkReply CommandWithOkReply::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<CommandWithOkReply>();
    object.parseProtected(ctxt, request);
    return object;
}
void CommandWithOkReply::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void CommandWithOkReply::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("CommandWithOkReply"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandWithOkReply::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("CommandWithOkReply"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandWithOkReply::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandWithAnyTypeMember::kAnyTypeFieldFieldName;
constexpr StringData CommandWithAnyTypeMember::kDbNameFieldName;
constexpr StringData CommandWithAnyTypeMember::kCommandName;

const std::vector<StringData> CommandWithAnyTypeMember::_knownBSONFields {
    CommandWithAnyTypeMember::kAnyTypeFieldFieldName,
    CommandWithAnyTypeMember::kCommandName,
};
const std::vector<StringData> CommandWithAnyTypeMember::_knownOP_MSGFields {
    CommandWithAnyTypeMember::kAnyTypeFieldFieldName,
    CommandWithAnyTypeMember::kDbNameFieldName,
    CommandWithAnyTypeMember::kCommandName,
};

CommandWithAnyTypeMember::CommandWithAnyTypeMember() : _anyTypeField(mongo::idl::preparsedValue<decltype(_anyTypeField)>()), _hasAnyTypeField(false), _hasDbName(false) {
    // Used for initialization only
}
CommandWithAnyTypeMember::CommandWithAnyTypeMember(mongo::IDLAnyType anyTypeField) : _anyTypeField(std::move(anyTypeField)), _hasAnyTypeField(true), _hasDbName(true) {
    // Used for initialization only
}


CommandWithAnyTypeMember CommandWithAnyTypeMember::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<CommandWithAnyTypeMember>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandWithAnyTypeMember::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kAnyTypeFieldBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kAnyTypeFieldFieldName) {
            if (MONGO_unlikely(usedFields[kAnyTypeFieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kAnyTypeFieldBit);

            _hasAnyTypeField = true;
            _anyTypeField = IDLAnyType::parseFromBSON(element);
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
        if (!usedFields[kAnyTypeFieldBit]) {
            ctxt.throwMissingField(kAnyTypeFieldFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

}

CommandWithAnyTypeMember CommandWithAnyTypeMember::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<CommandWithAnyTypeMember>();
    object.parseProtected(ctxt, request);
    return object;
}
void CommandWithAnyTypeMember::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kAnyTypeFieldBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kAnyTypeFieldFieldName) {
            if (MONGO_unlikely(usedFields[kAnyTypeFieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kAnyTypeFieldBit);

            _hasAnyTypeField = true;
            _anyTypeField = IDLAnyType::parseFromBSON(element);
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
        if (!usedFields[kAnyTypeFieldBit]) {
            ctxt.throwMissingField(kAnyTypeFieldFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

}

void CommandWithAnyTypeMember::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasAnyTypeField && _hasDbName);

    builder->append("CommandWithAnyTypeMember"_sd, 1);
    {
        _anyTypeField.serializeToBSON(kAnyTypeFieldFieldName, builder);
    }

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandWithAnyTypeMember::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasAnyTypeField && _hasDbName);

        builder->append("CommandWithAnyTypeMember"_sd, 1);
        {
            _anyTypeField.serializeToBSON(kAnyTypeFieldFieldName, builder);
        }

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandWithAnyTypeMember::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData CommandWithAnyTypeOwnedMember::kAnyTypeFieldFieldName;
constexpr StringData CommandWithAnyTypeOwnedMember::kDbNameFieldName;
constexpr StringData CommandWithAnyTypeOwnedMember::kCommandName;

const std::vector<StringData> CommandWithAnyTypeOwnedMember::_knownBSONFields {
    CommandWithAnyTypeOwnedMember::kAnyTypeFieldFieldName,
    CommandWithAnyTypeOwnedMember::kCommandName,
};
const std::vector<StringData> CommandWithAnyTypeOwnedMember::_knownOP_MSGFields {
    CommandWithAnyTypeOwnedMember::kAnyTypeFieldFieldName,
    CommandWithAnyTypeOwnedMember::kDbNameFieldName,
    CommandWithAnyTypeOwnedMember::kCommandName,
};

CommandWithAnyTypeOwnedMember::CommandWithAnyTypeOwnedMember() : _anyTypeField(mongo::idl::preparsedValue<decltype(_anyTypeField)>()), _hasAnyTypeField(false), _hasDbName(false) {
    // Used for initialization only
}
CommandWithAnyTypeOwnedMember::CommandWithAnyTypeOwnedMember(mongo::IDLAnyTypeOwned anyTypeField) : _anyTypeField(std::move(anyTypeField)), _hasAnyTypeField(true), _hasDbName(true) {
    // Used for initialization only
}


CommandWithAnyTypeOwnedMember CommandWithAnyTypeOwnedMember::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<CommandWithAnyTypeOwnedMember>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void CommandWithAnyTypeOwnedMember::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kAnyTypeFieldBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kAnyTypeFieldFieldName) {
            if (MONGO_unlikely(usedFields[kAnyTypeFieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kAnyTypeFieldBit);

            _hasAnyTypeField = true;
            _anyTypeField = IDLAnyTypeOwned::parseFromBSON(element);
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
        if (!usedFields[kAnyTypeFieldBit]) {
            ctxt.throwMissingField(kAnyTypeFieldFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

}

CommandWithAnyTypeOwnedMember CommandWithAnyTypeOwnedMember::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<CommandWithAnyTypeOwnedMember>();
    object.parseProtected(ctxt, request);
    return object;
}
void CommandWithAnyTypeOwnedMember::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<2> usedFields;
    const size_t kAnyTypeFieldBit = 0;
    const size_t kDbNameBit = 1;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kAnyTypeFieldFieldName) {
            if (MONGO_unlikely(usedFields[kAnyTypeFieldBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kAnyTypeFieldBit);

            _hasAnyTypeField = true;
            _anyTypeField = IDLAnyTypeOwned::parseFromBSON(element);
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
        if (!usedFields[kAnyTypeFieldBit]) {
            ctxt.throwMissingField(kAnyTypeFieldFieldName);
        }
        if (!usedFields[kDbNameBit]) {
            ctxt.throwMissingField(kDbNameFieldName);
        }
    }

}

void CommandWithAnyTypeOwnedMember::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasAnyTypeField && _hasDbName);

    builder->append("CommandWithAnyTypeOwnedMember"_sd, 1);
    {
        _anyTypeField.serializeToBSON(kAnyTypeFieldFieldName, builder);
    }

    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest CommandWithAnyTypeOwnedMember::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasAnyTypeField && _hasDbName);

        builder->append("CommandWithAnyTypeOwnedMember"_sd, 1);
        {
            _anyTypeField.serializeToBSON(kAnyTypeFieldFieldName, builder);
        }

        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj CommandWithAnyTypeOwnedMember::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData AccessCheckNone::kDbNameFieldName;
constexpr StringData AccessCheckNone::kCommandName;

mongo::AuthorizationContract AccessCheckNone::kAuthorizationContract = AuthorizationContract(std::initializer_list<AccessCheckEnum>{}, std::initializer_list<Privilege>{});

const std::vector<StringData> AccessCheckNone::_knownBSONFields {
    AccessCheckNone::kCommandName,
};
const std::vector<StringData> AccessCheckNone::_knownOP_MSGFields {
    AccessCheckNone::kDbNameFieldName,
    AccessCheckNone::kCommandName,
};

AccessCheckNone::AccessCheckNone() : _hasDbName(false) {
    // Used for initialization only
}


AccessCheckNone AccessCheckNone::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AccessCheckNone>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AccessCheckNone::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

AccessCheckNone AccessCheckNone::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<AccessCheckNone>();
    object.parseProtected(ctxt, request);
    return object;
}
void AccessCheckNone::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void AccessCheckNone::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("AccessCheckNone"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest AccessCheckNone::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("AccessCheckNone"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj AccessCheckNone::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData AccessCheckSimpleAccessCheck::kDbNameFieldName;
constexpr StringData AccessCheckSimpleAccessCheck::kCommandName;

mongo::AuthorizationContract AccessCheckSimpleAccessCheck::kAuthorizationContract = AuthorizationContract(std::initializer_list<AccessCheckEnum>{AccessCheckEnum::kIsAuthenticated}, std::initializer_list<Privilege>{});

const std::vector<StringData> AccessCheckSimpleAccessCheck::_knownBSONFields {
    AccessCheckSimpleAccessCheck::kCommandName,
};
const std::vector<StringData> AccessCheckSimpleAccessCheck::_knownOP_MSGFields {
    AccessCheckSimpleAccessCheck::kDbNameFieldName,
    AccessCheckSimpleAccessCheck::kCommandName,
};

AccessCheckSimpleAccessCheck::AccessCheckSimpleAccessCheck() : _hasDbName(false) {
    // Used for initialization only
}


AccessCheckSimpleAccessCheck AccessCheckSimpleAccessCheck::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AccessCheckSimpleAccessCheck>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AccessCheckSimpleAccessCheck::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

AccessCheckSimpleAccessCheck AccessCheckSimpleAccessCheck::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<AccessCheckSimpleAccessCheck>();
    object.parseProtected(ctxt, request);
    return object;
}
void AccessCheckSimpleAccessCheck::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void AccessCheckSimpleAccessCheck::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("AccessCheckSimpleAccessCheck"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest AccessCheckSimpleAccessCheck::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("AccessCheckSimpleAccessCheck"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj AccessCheckSimpleAccessCheck::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData AccessCheckSimplePrivilege::kDbNameFieldName;
constexpr StringData AccessCheckSimplePrivilege::kCommandName;

mongo::AuthorizationContract AccessCheckSimplePrivilege::kAuthorizationContract = AuthorizationContract(std::initializer_list<AccessCheckEnum>{}, std::initializer_list<Privilege>{Privilege(ResourcePattern::forAuthorizationContract(MatchTypeEnum::kMatchClusterResource), ActionSet{ActionType::addShard,ActionType::serverStatus})});

const std::vector<StringData> AccessCheckSimplePrivilege::_knownBSONFields {
    AccessCheckSimplePrivilege::kCommandName,
};
const std::vector<StringData> AccessCheckSimplePrivilege::_knownOP_MSGFields {
    AccessCheckSimplePrivilege::kDbNameFieldName,
    AccessCheckSimplePrivilege::kCommandName,
};

AccessCheckSimplePrivilege::AccessCheckSimplePrivilege() : _hasDbName(false) {
    // Used for initialization only
}


AccessCheckSimplePrivilege AccessCheckSimplePrivilege::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AccessCheckSimplePrivilege>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AccessCheckSimplePrivilege::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

AccessCheckSimplePrivilege AccessCheckSimplePrivilege::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<AccessCheckSimplePrivilege>();
    object.parseProtected(ctxt, request);
    return object;
}
void AccessCheckSimplePrivilege::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void AccessCheckSimplePrivilege::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("AccessCheckSimplePrivilege"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest AccessCheckSimplePrivilege::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("AccessCheckSimplePrivilege"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj AccessCheckSimplePrivilege::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData AccessCheckComplexPrivilege::kDbNameFieldName;
constexpr StringData AccessCheckComplexPrivilege::kCommandName;

mongo::AuthorizationContract AccessCheckComplexPrivilege::kAuthorizationContract = AuthorizationContract(std::initializer_list<AccessCheckEnum>{AccessCheckEnum::kIsAuthenticated,AccessCheckEnum::kIsAuthorizedToParseNamespaceElement}, std::initializer_list<Privilege>{Privilege(ResourcePattern::forAuthorizationContract(MatchTypeEnum::kMatchClusterResource), ActionSet{ActionType::addShard,ActionType::serverStatus}),Privilege(ResourcePattern::forAuthorizationContract(MatchTypeEnum::kMatchDatabaseName), ActionSet{ActionType::trafficRecord}),Privilege(ResourcePattern::forAuthorizationContract(MatchTypeEnum::kMatchAnyResource), ActionSet{ActionType::splitVector})});

const std::vector<StringData> AccessCheckComplexPrivilege::_knownBSONFields {
    AccessCheckComplexPrivilege::kCommandName,
};
const std::vector<StringData> AccessCheckComplexPrivilege::_knownOP_MSGFields {
    AccessCheckComplexPrivilege::kDbNameFieldName,
    AccessCheckComplexPrivilege::kCommandName,
};

AccessCheckComplexPrivilege::AccessCheckComplexPrivilege() : _hasDbName(false) {
    // Used for initialization only
}


AccessCheckComplexPrivilege AccessCheckComplexPrivilege::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AccessCheckComplexPrivilege>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AccessCheckComplexPrivilege::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

AccessCheckComplexPrivilege AccessCheckComplexPrivilege::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<AccessCheckComplexPrivilege>();
    object.parseProtected(ctxt, request);
    return object;
}
void AccessCheckComplexPrivilege::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void AccessCheckComplexPrivilege::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("AccessCheckComplexPrivilege"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest AccessCheckComplexPrivilege::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("AccessCheckComplexPrivilege"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj AccessCheckComplexPrivilege::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData APIVersion1CommandIDLName::kDbNameFieldName;
constexpr StringData APIVersion1CommandIDLName::kCommandName;

mongo::AuthorizationContract APIVersion1CommandIDLName::kAuthorizationContract = AuthorizationContract(std::initializer_list<AccessCheckEnum>{}, std::initializer_list<Privilege>{});

const std::vector<StringData> APIVersion1CommandIDLName::_knownBSONFields {
    APIVersion1CommandIDLName::kCommandName,
};
const std::vector<StringData> APIVersion1CommandIDLName::_knownOP_MSGFields {
    APIVersion1CommandIDLName::kDbNameFieldName,
    APIVersion1CommandIDLName::kCommandName,
};

APIVersion1CommandIDLName::APIVersion1CommandIDLName() : _hasDbName(false) {
    // Used for initialization only
}


APIVersion1CommandIDLName APIVersion1CommandIDLName::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<APIVersion1CommandIDLName>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void APIVersion1CommandIDLName::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

APIVersion1CommandIDLName APIVersion1CommandIDLName::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<APIVersion1CommandIDLName>();
    object.parseProtected(ctxt, request);
    return object;
}
void APIVersion1CommandIDLName::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void APIVersion1CommandIDLName::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("APIVersion1CommandIDLName"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest APIVersion1CommandIDLName::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("APIVersion1CommandIDLName"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj APIVersion1CommandIDLName::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData APIVersion1CommandCPPName2::kDbNameFieldName;
constexpr StringData APIVersion1CommandCPPName2::kCommandName;

mongo::AuthorizationContract APIVersion1CommandCPPName2::kAuthorizationContract = AuthorizationContract(std::initializer_list<AccessCheckEnum>{}, std::initializer_list<Privilege>{});

const std::vector<StringData> APIVersion1CommandCPPName2::_knownBSONFields {
    APIVersion1CommandCPPName2::kCommandName,
};
const std::vector<StringData> APIVersion1CommandCPPName2::_knownOP_MSGFields {
    APIVersion1CommandCPPName2::kDbNameFieldName,
    APIVersion1CommandCPPName2::kCommandName,
};

APIVersion1CommandCPPName2::APIVersion1CommandCPPName2() : _hasDbName(false) {
    // Used for initialization only
}


APIVersion1CommandCPPName2 APIVersion1CommandCPPName2::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<APIVersion1CommandCPPName2>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void APIVersion1CommandCPPName2::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

APIVersion1CommandCPPName2 APIVersion1CommandCPPName2::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<APIVersion1CommandCPPName2>();
    object.parseProtected(ctxt, request);
    return object;
}
void APIVersion1CommandCPPName2::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void APIVersion1CommandCPPName2::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("APIVersion1CommandIDLName2"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest APIVersion1CommandCPPName2::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("APIVersion1CommandIDLName2"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj APIVersion1CommandCPPName2::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

constexpr StringData APIVersion1CommandWithAlias::kDbNameFieldName;
constexpr StringData APIVersion1CommandWithAlias::kCommandName;
constexpr StringData APIVersion1CommandWithAlias::kCommandAlias;

mongo::AuthorizationContract APIVersion1CommandWithAlias::kAuthorizationContract = AuthorizationContract(std::initializer_list<AccessCheckEnum>{}, std::initializer_list<Privilege>{});

const std::vector<StringData> APIVersion1CommandWithAlias::_knownBSONFields {
    APIVersion1CommandWithAlias::kCommandName,
};
const std::vector<StringData> APIVersion1CommandWithAlias::_knownOP_MSGFields {
    APIVersion1CommandWithAlias::kDbNameFieldName,
    APIVersion1CommandWithAlias::kCommandName,
};

APIVersion1CommandWithAlias::APIVersion1CommandWithAlias() : _hasDbName(false) {
    // Used for initialization only
}


APIVersion1CommandWithAlias APIVersion1CommandWithAlias::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<APIVersion1CommandWithAlias>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void APIVersion1CommandWithAlias::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

APIVersion1CommandWithAlias APIVersion1CommandWithAlias::parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    auto object = mongo::idl::preparsedValue<APIVersion1CommandWithAlias>();
    object.parseProtected(ctxt, request);
    return object;
}
void APIVersion1CommandWithAlias::parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request) {
    std::bitset<1> usedFields;
    const size_t kDbNameBit = 0;
    BSONElement commandElement;
    bool firstFieldFound = false;

    for (const auto& element :request.body) {
        const auto fieldName = element.fieldNameStringData();

        if (firstFieldFound == false) {
            firstFieldFound = true;
            continue;
        }

        if (fieldName == kDbNameFieldName) {
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

}

void APIVersion1CommandWithAlias::serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const {
    invariant(_hasDbName);

    builder->append("APIVersion1CommandWithAlias"_sd, 1);
    IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownBSONFields, builder);

}

OpMsgRequest APIVersion1CommandWithAlias::serialize(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder localBuilder;
    {
        BSONObjBuilder* builder = &localBuilder;
        invariant(_hasDbName);

        builder->append("APIVersion1CommandWithAlias"_sd, 1);
        builder->append(kDbNameFieldName, _dbName);

        IDLParserErrorContext::appendGenericCommandArguments(commandPassthroughFields, _knownOP_MSGFields, builder);

    }
    OpMsgRequest request;
    request.body = localBuilder.obj();
    return request;
}

BSONObj APIVersion1CommandWithAlias::toBSON(const BSONObj& commandPassthroughFields) const {
    BSONObjBuilder builder;
    serialize(commandPassthroughFields, &builder);
    return builder.obj();
}

// Map: fieldName -> shouldForwardToShards
const stdx::unordered_map<std::string, bool> My_generic_args_list::_genericFields {
    {"my_generic_field_0", false},
    {"my_generic_field_1", true},
    {"my_generic_field_3", false},
};

bool My_generic_args_list::hasField(StringData fieldName) {
    return _genericFields.find(fieldName.toString()) != _genericFields.end();
}

bool My_generic_args_list::shouldForwardToShards(StringData fieldName) {
    auto it = _genericFields.find(fieldName.toString());
    return (it == _genericFields.end() || it->second);
}


// Map: fieldName -> shouldForwardFromShards
const stdx::unordered_map<std::string, bool> My_generic_reply_field_list::_genericFields {
    {"my_generic_field_0", false},
    {"my_generic_field_1", true},
    {"my_generic_field_3", false},
};

bool My_generic_reply_field_list::hasField(StringData fieldName) {
    return _genericFields.find(fieldName.toString()) != _genericFields.end();
}

bool My_generic_reply_field_list::shouldForwardFromShards(StringData fieldName) {
    auto it = _genericFields.find(fieldName.toString());
    return (it == _genericFields.end() || it->second);
}


}  // namespace test
}  // namespace idl
}  // namespace mongo
