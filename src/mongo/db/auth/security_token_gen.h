/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/auth/security_token_gen.h --output build/opt/mongo/db/auth/security_token_gen.cpp src/mongo/db/auth/security_token.idl
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
#include "mongo/db/namespace_string.h"
#include "mongo/idl/basic_types.h"
#include "mongo/idl/basic_types_gen.h"
#include "mongo/idl/idl_parser.h"
#include "mongo/idl/server_parameter.h"
#include "mongo/idl/server_parameter_with_storage.h"
#include "mongo/rpc/op_msg.h"
#include "mongo/stdx/unordered_map.h"
#include "mongo/util/uuid.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {
namespace auth {

/**
 * Security Token as passed in OP_MSG
 */
class SecurityToken {
public:
    static constexpr auto kTenantFieldName = "tenant"_sd;

    SecurityToken();
    SecurityToken(mongo::OID tenant);

    static SecurityToken parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * Tenant identifier
     */
    const mongo::OID& getTenant() const { return _tenant; }
    void setTenant(mongo::OID value) & {  _tenant = std::move(value); _hasTenant = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::OID _tenant;
    bool _hasTenant : 1;
};

constexpr auto kAcceptOpMsgSecurityTokenDefault = false;

extern bool gAcceptOpMsgSecurityToken;
}  // namespace auth
}  // namespace mongo
