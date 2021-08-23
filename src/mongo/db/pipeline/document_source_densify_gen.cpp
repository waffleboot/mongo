/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/pipeline/document_source_densify_gen.h --output build/opt/mongo/db/pipeline/document_source_densify_gen.cpp src/mongo/db/pipeline/document_source_densify.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/db/pipeline/document_source_densify_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {

constexpr StringData RangeSpec::kBoundsFieldName;
constexpr StringData RangeSpec::kStepFieldName;
constexpr StringData RangeSpec::kUnitFieldName;


RangeSpec::RangeSpec() : _step(mongo::idl::preparsedValue<decltype(_step)>()), _bounds(mongo::idl::preparsedValue<decltype(_bounds)>()), _hasStep(false), _hasBounds(false) {
    // Used for initialization only
}
RangeSpec::RangeSpec(mongo::Value step, mongo::IDLAnyType bounds) : _step(std::move(step)), _bounds(std::move(bounds)), _hasStep(true), _hasBounds(true) {
    // Used for initialization only
}


RangeSpec RangeSpec::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<RangeSpec>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void RangeSpec::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kStepBit = 0;
    const size_t kUnitBit = 1;
    const size_t kBoundsBit = 2;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kStepFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertTypes(element, {NumberInt, NumberDecimal, NumberDouble, NumberLong}))) {
                if (MONGO_unlikely(usedFields[kStepBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStepBit);

                _hasStep = true;
                _step = Value::deserializeForIDL(element);
            }
        }
        else if (fieldName == kUnitFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kUnitBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kUnitBit);

                _unit = element.str();
            }
        }
        else if (fieldName == kBoundsFieldName) {
            if (MONGO_unlikely(usedFields[kBoundsBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kBoundsBit);

            _hasBounds = true;
            _bounds = IDLAnyType::parseFromBSON(element);
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kStepBit]) {
            ctxt.throwMissingField(kStepFieldName);
        }
        if (!usedFields[kBoundsBit]) {
            ctxt.throwMissingField(kBoundsFieldName);
        }
    }

}


void RangeSpec::serialize(BSONObjBuilder* builder) const {
    invariant(_hasStep && _hasBounds);

    {
        _step.serializeForIDL(kStepFieldName, builder);
    }

    if (_unit.is_initialized()) {
        builder->append(kUnitFieldName, _unit.get());
    }

    {
        _bounds.serializeToBSON(kBoundsFieldName, builder);
    }

}


BSONObj RangeSpec::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData DensifySpec::kFieldFieldName;
constexpr StringData DensifySpec::kPartitionByFieldsFieldName;
constexpr StringData DensifySpec::kRangeFieldName;


DensifySpec::DensifySpec() : _field(mongo::idl::preparsedValue<decltype(_field)>()), _range(mongo::idl::preparsedValue<decltype(_range)>()), _hasField(false), _hasRange(false) {
    // Used for initialization only
}
DensifySpec::DensifySpec(std::string field, mongo::RangeSpec range) : _field(std::move(field)), _range(std::move(range)), _hasField(true), _hasRange(true) {
    // Used for initialization only
}


DensifySpec DensifySpec::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<DensifySpec>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void DensifySpec::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kFieldBit = 0;
    const size_t kPartitionByFieldsBit = 1;
    const size_t kRangeBit = 2;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kFieldFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kFieldBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kFieldBit);

                _hasField = true;
                _field = element.str();
            }
        }
        else if (fieldName == kPartitionByFieldsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Array))) {
                if (MONGO_unlikely(usedFields[kPartitionByFieldsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPartitionByFieldsBit);

            }
            std::uint32_t expectedFieldNumber{0};
            const IDLParserErrorContext arrayCtxt(kPartitionByFieldsFieldName, &ctxt);
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
            _partitionByFields = std::move(values);
        }
        else if (fieldName == kRangeFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kRangeBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kRangeBit);

                _hasRange = true;
                IDLParserErrorContext tempContext(kRangeFieldName, &ctxt);
                const auto localObject = element.Obj();
                _range = mongo::RangeSpec::parse(tempContext, localObject);
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kFieldBit]) {
            ctxt.throwMissingField(kFieldFieldName);
        }
        if (!usedFields[kRangeBit]) {
            ctxt.throwMissingField(kRangeFieldName);
        }
    }

}


void DensifySpec::serialize(BSONObjBuilder* builder) const {
    invariant(_hasField && _hasRange);

    builder->append(kFieldFieldName, _field);

    if (_partitionByFields.is_initialized()) {
        builder->append(kPartitionByFieldsFieldName, _partitionByFields.get());
    }

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kRangeFieldName));
        _range.serialize(&subObjBuilder);
    }

}


BSONObj DensifySpec::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

}  // namespace mongo
