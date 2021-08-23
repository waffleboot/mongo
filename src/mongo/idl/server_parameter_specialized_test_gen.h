/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/server_parameter_specialized_test_gen.h --output build/opt/mongo/idl/server_parameter_specialized_test_gen.cpp src/mongo/idl/server_parameter_specialized_test.idl
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
#include "mongo/idl/idl_parser.h"
#include "mongo/idl/server_parameter.h"
#include "mongo/idl/server_parameter_specialized_test.h"
#include "mongo/idl/server_parameter_with_storage.h"
#include "mongo/platform/atomic_word.h"
#include "mongo/rpc/op_msg.h"
#include "mongo/stdx/unordered_map.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {
namespace test {

class SpecializedDummyServerParameter : public ServerParameter {
public:
    using ServerParameter::ServerParameter;

    void append(OperationContext*, BSONObjBuilder&, const std::string&) final;
    Status set(const BSONElement&) final;
    Status setFromString(const std::string&) final;
};

class SpecializedConstructorServerParameter : public ServerParameter {
public:
    SpecializedConstructorServerParameter(StringData name, ServerParameterType spt);

    void append(OperationContext*, BSONObjBuilder&, const std::string&) final;
    Status set(const BSONElement&) final;
    Status setFromString(const std::string&) final;
};

class SpecializedWithValueServerParameter : public ServerParameter {
public:
    static constexpr auto kDataDefault = 43;
    using ServerParameter::ServerParameter;

    void append(OperationContext*, BSONObjBuilder&, const std::string&) final;
    Status set(const BSONElement&) final;
    Status setFromString(const std::string&) final;

    std::int32_t _data{kDataDefault};
};

class SpecializedWithStringValueServerParameter : public ServerParameter {
public:
    static constexpr auto kDataDefault = "Hello World";
    using ServerParameter::ServerParameter;

    void append(OperationContext*, BSONObjBuilder&, const std::string&) final;
    Status set(const BSONElement&) final;
    Status setFromString(const std::string&) final;

    std::string _data{kDataDefault};
};

class SpecializedWithAtomicValueServerParameter : public ServerParameter {
public:
    static constexpr auto kDataDefault = 42;
    using ServerParameter::ServerParameter;

    void append(OperationContext*, BSONObjBuilder&, const std::string&) final;
    Status set(const BSONElement&) final;
    Status setFromString(const std::string&) final;

    AtomicWord<std::int32_t> _data{kDataDefault};
};

class SpecializedMultiValueServerParameter : public ServerParameter {
public:
    using ServerParameter::ServerParameter;

    void append(OperationContext*, BSONObjBuilder&, const std::string&) final;
    Status set(const BSONElement&) final;
    Status setFromString(const std::string&) final;

    ExtraDataForServerParameter _data;
};

class SpecializedWithCtorAndValueServerParameter : public ServerParameter {
public:
    static constexpr auto kDataDefault = 44;
    SpecializedWithCtorAndValueServerParameter(StringData name, ServerParameterType spt);

    void append(OperationContext*, BSONObjBuilder&, const std::string&) final;
    Status set(const BSONElement&) final;
    Status setFromString(const std::string&) final;

    std::int32_t _data{kDataDefault};
};

class SpecializedWithOptions : public ServerParameter {
public:
    using ServerParameter::ServerParameter;

    void append(OperationContext*, BSONObjBuilder&, const std::string&) final;
    Status set(const BSONElement&) final;
    Status setFromString(const std::string&) final;
};

}  // namespace test
}  // namespace mongo
