/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/pipeline/document_source_densify_gen.h --output build/opt/mongo/db/pipeline/document_source_densify_gen.cpp src/mongo/db/pipeline/document_source_densify.idl
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
#include "mongo/db/exec/document_value/value.h"
#include "mongo/db/namespace_string.h"
#include "mongo/idl/basic_types.h"
#include "mongo/idl/basic_types_gen.h"
#include "mongo/idl/idl_parser.h"
#include "mongo/rpc/op_msg.h"
#include "mongo/stdx/unordered_map.h"
#include "mongo/util/uuid.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {

/**
 * Specification for a range based densification.
 */
class RangeSpec {
public:
    static constexpr auto kBoundsFieldName = "bounds"_sd;
    static constexpr auto kStepFieldName = "step"_sd;
    static constexpr auto kUnitFieldName = "unit"_sd;

    RangeSpec();
    RangeSpec(mongo::Value step, mongo::IDLAnyType bounds);

    static RangeSpec parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * Step value. Assumed to be a number unless 'unit' is specified.
     */
    const mongo::Value& getStep() const { return _step; }
    void setStep(mongo::Value value) & {  _step = std::move(value); _hasStep = true; }

    /**
     * The time unit to be used for 'step' if densifying over dates.
     */
    const boost::optional<StringData> getUnit() const& { return boost::optional<StringData>{_unit}; }
    void getUnit() && = delete;
    void setUnit(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _unit = std::move(_tmpValue);
    } else {
        _unit = boost::none;
    }
      }

    /**
     * The bounds over which to densify. Defaults to 'full'.
     */
    const mongo::IDLAnyType& getBounds() const { return _bounds; }
    void setBounds(mongo::IDLAnyType value) & {  _bounds = std::move(value); _hasBounds = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::Value _step;
    boost::optional<std::string> _unit;
    mongo::IDLAnyType _bounds;
    bool _hasStep : 1;
    bool _hasBounds : 1;
};

/**
 * Specification for a $densify stage.
 */
class DensifySpec {
public:
    static constexpr auto kFieldFieldName = "field"_sd;
    static constexpr auto kPartitionByFieldsFieldName = "partitionByFields"_sd;
    static constexpr auto kRangeFieldName = "range"_sd;

    DensifySpec();
    DensifySpec(std::string field, mongo::RangeSpec range);

    static DensifySpec parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * The field on which we are densifying.
     */
    const StringData getField() const& { return _field; }
    void getField() && = delete;
    void setField(StringData value) & { auto _tmpValue = value.toString();  _field = std::move(_tmpValue); _hasField = true; }

    /**
     * The field(s) that will be used as the partition keys.
     */
    const boost::optional<std::vector<StringData>> getPartitionByFields() const& { if (_partitionByFields.is_initialized()) {
        return transformVector(_partitionByFields.get());
    } else {
        return boost::none;
    }
     }
    void getPartitionByFields() && = delete;
    void setPartitionByFields(boost::optional<std::vector<StringData>> value) & { if (value.is_initialized()) {
        auto _tmpValue = transformVector(value.get());
        
        _partitionByFields = std::move(_tmpValue);
    } else {
        _partitionByFields = boost::none;
    }
      }

    /**
     * Specification for range based densification.
     */
    const mongo::RangeSpec& getRange() const { return _range; }
    mongo::RangeSpec& getRange() { return _range; }
    void setRange(mongo::RangeSpec value) & {  _range = std::move(value); _hasRange = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _field;
    boost::optional<std::vector<std::string>> _partitionByFields;
    mongo::RangeSpec _range;
    bool _hasField : 1;
    bool _hasRange : 1;
};

}  // namespace mongo
