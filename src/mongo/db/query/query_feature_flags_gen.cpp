/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/query/query_feature_flags_gen.h --output build/opt/mongo/db/query/query_feature_flags_gen.cpp src/mongo/db/query/query_feature_flags.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/db/query/query_feature_flags_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"
#include "mongo/idl/server_parameter.h"
#include "mongo/idl/server_parameter_with_storage.h"

namespace mongo {
namespace feature_flags {

::mongo::FeatureFlag gFeatureFlagChangeStreamsOptimization{true, "5.1"_sd};
::mongo::FeatureFlag gFeatureFlagChangeStreamsRewrite{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagDensify{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagShardedTimeSeries{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagShardedTimeSeriesUpdateDelete{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagSBEGroupAndLookup{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagExactTopNAccumulator{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagShardedLookup{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagChangeStreamsPreAndPostImages{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagSearchMeta{false, ""_sd};
::mongo::FeatureFlag gFeatureFlagSbePlanCache{false, ""_sd};
MONGO_SERVER_PARAMETER_REGISTER(idl_ac82ba65741618f216ccc923d9000cb277603f26)(InitializerContext*) {
    /**
     * Feature flag for enabling change streams optimization
     */
    [[maybe_unused]] auto* scp_0 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagChangeStreamsOptimization", gFeatureFlagChangeStreamsOptimization);
        return ret;
    })();

    /**
     * Feature flag for enabling change streams oplog rewrites
     */
    [[maybe_unused]] auto* scp_1 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagChangeStreamsRewrite", gFeatureFlagChangeStreamsRewrite);
        return ret;
    })();

    /**
     * Feature flag for allowing a $densify stage in an aggregation pipeline
     */
    [[maybe_unused]] auto* scp_2 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagDensify", gFeatureFlagDensify);
        return ret;
    })();

    /**
     * Feature flag for allowing sharding a Time Series collection
     */
    [[maybe_unused]] auto* scp_3 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagShardedTimeSeries", gFeatureFlagShardedTimeSeries);
        return ret;
    })();

    /**
     * Feature flag for allowing update and delete operations on a sharded Time Series collection
     */
    [[maybe_unused]] auto* scp_4 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagShardedTimeSeriesUpdateDelete", gFeatureFlagShardedTimeSeriesUpdateDelete);
        return ret;
    })();

    /**
     * Feature flag for allowing SBE $group and $lookup
     */
    [[maybe_unused]] auto* scp_5 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagSBEGroupAndLookup", gFeatureFlagSBEGroupAndLookup);
        return ret;
    })();

    /**
     * Feature flag for allowing use of topN family of accumulators
     */
    [[maybe_unused]] auto* scp_6 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagExactTopNAccumulator", gFeatureFlagExactTopNAccumulator);
        return ret;
    })();

    /**
     * Feature flag for allowing $lookup/$graphLookup into a sharded collection
     */
    [[maybe_unused]] auto* scp_7 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagShardedLookup", gFeatureFlagShardedLookup);
        return ret;
    })();

    /**
     * Feature flag for allowing usage of point-in-time pre- and post-images of documents in change streams
     */
    [[maybe_unused]] auto* scp_8 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagChangeStreamsPreAndPostImages", gFeatureFlagChangeStreamsPreAndPostImages);
        return ret;
    })();

    /**
     * Feature flag for allowing use of search collectors alongside search results
     */
    [[maybe_unused]] auto* scp_9 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagSearchMeta", gFeatureFlagSearchMeta);
        return ret;
    })();

    /**
     * Feature flag for enabling use of the SBE plan cache
     */
    [[maybe_unused]] auto* scp_10 = ([]() -> ServerParameter* {
        auto* ret = new FeatureFlagServerParameter("featureFlagSbePlanCache", gFeatureFlagSbePlanCache);
        return ret;
    })();

}
}  // namespace feature_flags
}  // namespace mongo
