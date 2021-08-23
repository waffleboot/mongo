/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/config_option_test_gen.h --output build/opt/mongo/idl/config_option_test_gen.cpp src/mongo/idl/config_option_test.idl
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
#include "mongo/idl/config_option_test.h"
#include "mongo/idl/idl_parser.h"
#include "mongo/idl/server_parameter_with_storage_test.h"
#include "mongo/rpc/op_msg.h"
#include "mongo/stdx/unordered_map.h"
#include "mongo/util/options_parser/option_description.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {
namespace test {

constexpr auto kTest_config_opt4Default = "Default Value";

extern std::string gTestConfigOpt12;
#if 1 == 1
extern std::string gTestConfigOpt14;
#endif
extern std::string gTestConfigOpt15;
constexpr auto kTest_config_opt17Default = kTestConfigOpt17Default;

}  // namespace test
}  // namespace mongo
