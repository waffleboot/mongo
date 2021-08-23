/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/server_feature_flags_gen.h --output build/opt/mongo/db/server_feature_flags_gen.cpp src/mongo/db/server_feature_flags.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/db/server_feature_flags_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"
#include "mongo/idl/server_parameter.h"
#include "mongo/idl/server_parameter_with_storage.h"

namespace mongo {

::mongo::FeatureFlag gFeatureFlagMongoStore{false, ""_sd};
MONGO_SERVER_PARAMETER_REGISTER(idl_c4a3d7ff4ec84580bd8ce1f3d0f1aae486a07274)(InitializerContext*) {
    /**
     * Enable mongod operation in MongoStore mode
     */
    [[maybe_unused]] auto* scp_0 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagMongoStore", gFeatureFlagMongoStore);
        return ret;
    })();

}
}  // namespace mongo
