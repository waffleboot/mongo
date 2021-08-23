/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/idl/server_parameter_specialized_test_gen.h --output build/opt/mongo/idl/server_parameter_specialized_test_gen.cpp src/mongo/idl/server_parameter_specialized_test.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/idl/server_parameter_specialized_test_gen.h"

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

/**
 * specializedDummy: Specialized server parameter with dummy value.
 */
Status SpecializedDummyServerParameter::set(const BSONElement& newValueElement) {
    auto swValue = coerceToString(newValueElement, false);
    if (!swValue.isOK()) {
        return swValue.getStatus();
    }
    return setFromString(swValue.getValue());
}

/**
 * specializedWithCtor: Provide a custom constructor implementation.
 */
Status SpecializedConstructorServerParameter::set(const BSONElement& newValueElement) {
    auto swValue = coerceToString(newValueElement, false);
    if (!swValue.isOK()) {
        return swValue.getStatus();
    }
    return setFromString(swValue.getValue());
}

/**
 * specializedWithValue: Attach a simple value.
 */
constexpr decltype(SpecializedWithValueServerParameter::kDataDefault) SpecializedWithValueServerParameter::kDataDefault;

Status SpecializedWithValueServerParameter::set(const BSONElement& newValueElement) {
    auto swValue = coerceToString(newValueElement, false);
    if (!swValue.isOK()) {
        return swValue.getStatus();
    }
    return setFromString(swValue.getValue());
}

/**
 * specializedWithStringValue: Attach a string.
 */
constexpr decltype(SpecializedWithStringValueServerParameter::kDataDefault) SpecializedWithStringValueServerParameter::kDataDefault;

Status SpecializedWithStringValueServerParameter::set(const BSONElement& newValueElement) {
    auto swValue = coerceToString(newValueElement, false);
    if (!swValue.isOK()) {
        return swValue.getStatus();
    }
    return setFromString(swValue.getValue());
}

/**
 * specializedWithAtomicValue: Attach a thread safe value.
 */
constexpr decltype(SpecializedWithAtomicValueServerParameter::kDataDefault) SpecializedWithAtomicValueServerParameter::kDataDefault;

Status SpecializedWithAtomicValueServerParameter::set(const BSONElement& newValueElement) {
    auto swValue = coerceToString(newValueElement, false);
    if (!swValue.isOK()) {
        return swValue.getStatus();
    }
    return setFromString(swValue.getValue());
}

/**
 * specializedWithCtorAndValue: Attach a simple value and a constum constructor.
 */
constexpr decltype(SpecializedWithCtorAndValueServerParameter::kDataDefault) SpecializedWithCtorAndValueServerParameter::kDataDefault;

Status SpecializedWithCtorAndValueServerParameter::set(const BSONElement& newValueElement) {
    auto swValue = coerceToString(newValueElement, false);
    if (!swValue.isOK()) {
        return swValue.getStatus();
    }
    return setFromString(swValue.getValue());
}

/**
 * specializedWithOptions: Use optional attributes.
 */
void SpecializedWithOptions::append(OperationContext*, BSONObjBuilder& b, const std::string& name) {
    b << name << "###";
}

Status SpecializedWithOptions::set(const BSONElement& newValueElement) {
    auto swValue = coerceToString(newValueElement, true);
    if (!swValue.isOK()) {
        return swValue.getStatus();
    }
    return setFromString(swValue.getValue());
}

MONGO_SERVER_PARAMETER_REGISTER(idl_9af6aa89d5cb86e87afa98a6cc79c8865cb207cd)(InitializerContext*) {
    /**
     * Specialized server parameter with dummy value.
     */
    [[maybe_unused]] auto* scp_0 = ([]() -> ServerParameter* {
        return new SpecializedDummyServerParameter("specializedDummy", ServerParameterType::kStartupAndRuntime);
    })();

    /**
     * Provide a custom constructor implementation.
     */
    [[maybe_unused]] auto* scp_1 = ([]() -> ServerParameter* {
        return new SpecializedConstructorServerParameter("specializedWithCtor", ServerParameterType::kStartupOnly);
    })();

    /**
     * Attach a simple value.
     */
    [[maybe_unused]] auto* scp_2 = ([]() -> ServerParameter* {
        return new SpecializedWithValueServerParameter("specializedWithValue", ServerParameterType::kStartupOnly);
    })();

    /**
     * Attach a string.
     */
    [[maybe_unused]] auto* scp_3 = ([]() -> ServerParameter* {
        return new SpecializedWithStringValueServerParameter("specializedWithStringValue", ServerParameterType::kStartupOnly);
    })();

    /**
     * Attach a thread safe value.
     */
    [[maybe_unused]] auto* scp_4 = ([]() -> ServerParameter* {
        return new SpecializedWithAtomicValueServerParameter("specializedWithAtomicValue", ServerParameterType::kStartupAndRuntime);
    })();

    /**
     * Attach a struct.
     */
    [[maybe_unused]] auto* scp_5 = ([]() -> ServerParameter* {
        return new SpecializedMultiValueServerParameter("specializedWithMultiValue", ServerParameterType::kStartupOnly);
    })();

    /**
     * Attach a simple value and a constum constructor.
     */
    [[maybe_unused]] auto* scp_6 = ([]() -> ServerParameter* {
        return new SpecializedWithCtorAndValueServerParameter("specializedWithCtorAndValue", ServerParameterType::kStartupOnly);
    })();

    /**
     * Use optional attributes.
     */
    if (true) {
        auto* scp_7 = ([]() -> ServerParameter* {
            return new SpecializedWithOptions("specializedWithOptions", ServerParameterType::kStartupOnly);
        })();
        [[maybe_unused]] auto* scp_7_0 = new IDLServerParameterDeprecatedAlias("deprecatedWithOptions", scp_7);
    }

}
}  // namespace test
}  // namespace mongo
