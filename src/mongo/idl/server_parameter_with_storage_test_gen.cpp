/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/server_parameter_with_storage_test_gen.h --output build/opt/mongo/idl/server_parameter_with_storage_test_gen.cpp src/mongo/idl/server_parameter_with_storage_test.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/idl/server_parameter_with_storage_test_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"
#include "mongo/idl/server_parameter.h"
#include "mongo/idl/server_parameter_with_storage.h"

namespace mongo {
namespace test {

AtomicWord<int> gStdIntDeclared{42};
std::string gStartupString;
synchronized_value<double> gRuntimeBoostDouble;
std::string gStartupStringRedacted;
std::int32_t gStartupIntWithExpressions{100};
bool gUglyComplicatedNameSp{true};
MONGO_SERVER_PARAMETER_REGISTER(idl_6ccadb0ecf46690cd9846f9e5035056662e5ac5e)(InitializerContext*) {
    /**
     * Standard anytime settable int declared elsewhere
     */
    [[maybe_unused]] auto* scp_0 = ([]() -> ServerParameter* {
        auto* ret = makeIDLServerParameterWithStorage<ServerParameterType::kStartupAndRuntime>("stdIntPreallocated", gStdIntPreallocated);
        ret->setOnUpdate(onUpdateStdIntPreallocated);
        ret->addValidator(validateOdd);
        ret->addBound<idl_server_parameter_detail::GT>(0);
        uassertStatusOK(ret->setValue(11));
        return ret;
    })();

    /**
     * Create a simple int value, and declare storage
     */
    [[maybe_unused]] auto* scp_1 = ([]() -> ServerParameter* {
        auto* ret = makeIDLServerParameterWithStorage<ServerParameterType::kStartupAndRuntime>("stdIntDeclared", gStdIntDeclared);
        ret->addBound<idl_server_parameter_detail::LT>(1000);
        ret->addBound<idl_server_parameter_detail::GTE>(0);
        return ret;
    })();

    /**
     * Create a startup-only string, and declare storage
     */
    [[maybe_unused]] auto* scp_2 = ([]() -> ServerParameter* {
        auto* ret = makeIDLServerParameterWithStorage<ServerParameterType::kStartupOnly>("startupString", gStartupString);
        return ret;
    })();

    /**
     * Create a runtime-only string, using boost::synchronized_value
     */
    [[maybe_unused]] auto* scp_3 = ([]() -> ServerParameter* {
        auto* ret = makeIDLServerParameterWithStorage<ServerParameterType::kRuntimeOnly>("runtimeBoostDouble", gRuntimeBoostDouble);
        return ret;
    })();

    /**
     * Redacted param with storage
     */
    [[maybe_unused]] auto* scp_4 = ([]() -> ServerParameter* {
        auto* ret = makeIDLServerParameterWithStorage<ServerParameterType::kStartupOnly>("startupStringRedacted", gStartupStringRedacted);
        ret->setRedact();
        return ret;
    })();

    /**
     * Use of c++ expressions in default and validators
     */
    [[maybe_unused]] auto* scp_5 = ([]() -> ServerParameter* {
        auto* ret = makeIDLServerParameterWithStorage<ServerParameterType::kStartupOnly>("startupIntWithExpressions", gStartupIntWithExpressions);
        ret->addBound<idl_server_parameter_detail::LTE>(([]{ constexpr auto value = kStartupIntWithExpressionsMaximum; return value; })());
        ret->addBound<idl_server_parameter_detail::GTE>(kStartupIntWithExpressionsMinimum);
        return ret;
    })();

    /**
     * Verify exported symbols are properly reformatted
     */
    [[maybe_unused]] auto* scp_6 = ([]() -> ServerParameter* {
        auto* ret = makeIDLServerParameterWithStorage<ServerParameterType::kStartupOnly>("ugly complicated-name.sp", gUglyComplicatedNameSp);
        return ret;
    })();

}
}  // namespace test
}  // namespace mongo
