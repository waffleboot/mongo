/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/auth/security_token_gen.h --output build/opt/mongo/db/auth/security_token_gen.cpp src/mongo/db/auth/security_token.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/db/auth/security_token_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"
#include "mongo/idl/server_parameter.h"
#include "mongo/idl/server_parameter_with_storage.h"

namespace mongo {
namespace auth {

constexpr StringData SecurityToken::kTenantFieldName;


SecurityToken::SecurityToken() : _tenant(mongo::idl::preparsedValue<decltype(_tenant)>()), _hasTenant(false) {
    // Used for initialization only
}
SecurityToken::SecurityToken(mongo::OID tenant) : _tenant(std::move(tenant)), _hasTenant(true) {
    // Used for initialization only
}


SecurityToken SecurityToken::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<SecurityToken>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void SecurityToken::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kTenantBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kTenantFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, jstOID))) {
                if (MONGO_unlikely(usedFields[kTenantBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kTenantBit);

                _hasTenant = true;
                _tenant = element.OID();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kTenantBit]) {
            ctxt.throwMissingField(kTenantFieldName);
        }
    }

}


void SecurityToken::serialize(BSONObjBuilder* builder) const {
    invariant(_hasTenant);

    builder->append(kTenantFieldName, _tenant);

}


BSONObj SecurityToken::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

bool gAcceptOpMsgSecurityToken{false};
MONGO_SERVER_PARAMETER_REGISTER(idl_1977ced9aa771268abf44d1207e809e1d1c0afb7)(InitializerContext*) {
    /**
     * Accept and process Op Message Security Token if provided by client. If this setting is disabled, then passing a security token is treated as an error.
     */
    [[maybe_unused]] auto* scp_0 = ([]() -> ServerParameter* {
        auto* ret = makeIDLServerParameterWithStorage<ServerParameterType::kStartupOnly>("acceptOpMsgSecurityToken", gAcceptOpMsgSecurityToken);
        return ret;
    })();

}
}  // namespace auth
}  // namespace mongo
