/**
 *    Copyright (C) 2021-present MongoDB, Inc.
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the Server Side Public License, version 1,
 *    as published by MongoDB, Inc.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    Server Side Public License for more details.
 *
 *    You should have received a copy of the Server Side Public License
 *    along with this program. If not, see
 *    <http://www.mongodb.com/licensing/server-side-public-license>.
 *
 *    As a special exception, the copyright holders give permission to link the
 *    code of portions of this program with the OpenSSL library under certain
 *    conditions as described in each individual source file and distribute
 *    linked combinations including the program with the OpenSSL library. You
 *    must comply with the Server Side Public License in all respects for
 *    all of the code used other than as permitted herein. If you modify file(s)
 *    with this exception, you may extend this exception to your version of the
 *    file(s), but you are not obligated to do so. If you do not wish to do so,
 *    delete this exception statement from your version. If you delete this
 *    exception statement from all source files in the program, then also delete
 *    it in the license file.
 */

#pragma once

#include "mongo/base/string_data.h"
#include "mongo/util/assert_util.h"


namespace mongo::multiversion {

enum class FeatureCompatibilityVersion {
    kInvalid,
    kUnsetDefaultBehavior_5_0,

    kFullyDowngradedTo_5_0,
    kUpgradingFrom_5_0_To_5_1,
    kDowngradingFrom_5_1_To_5_0,
    kVersion_5_1,
};

constexpr size_t kSince_4_4 = 5;

// Last LTS was "5.0".
constexpr size_t kSinceLastLTS = 1;

class GenericFCV {

public:
    static constexpr auto kLatest = FeatureCompatibilityVersion::kVersion_5_1;
    static constexpr auto kLastContinuous = FeatureCompatibilityVersion::kFullyDowngradedTo_5_0;
    static constexpr auto kLastLTS = FeatureCompatibilityVersion::kFullyDowngradedTo_5_0;

    static constexpr auto kUpgradingFromLastLTSToLatest = FeatureCompatibilityVersion::kUpgradingFrom_5_0_To_5_1;
    static constexpr auto kDowngradingFromLatestToLastLTS = FeatureCompatibilityVersion::kDowngradingFrom_5_1_To_5_0;
    static constexpr auto kUpgradingFromLastContinuousToLatest = FeatureCompatibilityVersion::kUpgradingFrom_5_0_To_5_1;
    static constexpr auto kDowngradingFromLatestToLastContinuous = FeatureCompatibilityVersion::kDowngradingFrom_5_1_To_5_0;
    static constexpr auto kUpgradingFromLastLTSToLastContinuous = FeatureCompatibilityVersion::kInvalid;
    static constexpr auto kDowngradingFromLastContinuousToLastLTS = FeatureCompatibilityVersion::kInvalid;
};

inline StringData toString(FeatureCompatibilityVersion v) {
    switch (v) {
        case FeatureCompatibilityVersion::kInvalid:
            return "invalid"_sd;
        case FeatureCompatibilityVersion::kUnsetDefaultBehavior_5_0:
            return "unset"_sd;
        case FeatureCompatibilityVersion::kFullyDowngradedTo_5_0:
            return "5.0"_sd;
        case FeatureCompatibilityVersion::kUpgradingFrom_5_0_To_5_1:
            return "upgrading from 5.0 to 5.1.0"_sd;
        case FeatureCompatibilityVersion::kDowngradingFrom_5_1_To_5_0:
            return "downgrading from 5.1.0 to 5.0"_sd;
        case FeatureCompatibilityVersion::kVersion_5_1:
            return "5.1"_sd;
    }

    MONGO_UNREACHABLE;
}

}  // namespace mongo::multiversion

/* vim: set filetype=cpp: */
