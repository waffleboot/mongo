/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/server_parameter_with_storage_test_gen.h --output build/opt/mongo/idl/server_parameter_with_storage_test_gen.cpp src/mongo/idl/server_parameter_with_storage_test.idl
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
#include "mongo/idl/server_parameter_with_storage.h"
#include "mongo/idl/server_parameter_with_storage_test.h"
#include "mongo/rpc/op_msg.h"
#include "mongo/stdx/unordered_map.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {
namespace test {

constexpr auto kStdIntPreallocatedDefault = 11;

constexpr auto kStdIntDeclaredDefault = 42;

extern AtomicWord<int> gStdIntDeclared;
extern std::string gStartupString;
extern synchronized_value<double> gRuntimeBoostDouble;
extern std::string gStartupStringRedacted;
constexpr auto kStartupIntWithExpressionsDefault = 100;

extern std::int32_t gStartupIntWithExpressions;
constexpr auto kUgly_complicated_name_spDefault = true;

extern bool gUglyComplicatedNameSp;
}  // namespace test
}  // namespace mongo
