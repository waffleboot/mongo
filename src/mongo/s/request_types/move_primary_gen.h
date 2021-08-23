/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/s/request_types/move_primary_gen.h --output build/opt/mongo/s/request_types/move_primary_gen.cpp src/mongo/s/request_types/move_primary.idl
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
#include "mongo/rpc/op_msg.h"
#include "mongo/stdx/unordered_map.h"
#include "mongo/util/uuid.h"

namespace mongo { class AuthorizationContract; }

namespace mongo {

/**
 * The public movePrimary command on mongos
 */
class MovePrimary {
public:
    static constexpr auto kMovePrimaryFieldName = "movePrimary"_sd;
    static constexpr auto kMoveprimaryFieldName = "moveprimary"_sd;
    static constexpr auto kToFieldName = "to"_sd;

    MovePrimary();
    MovePrimary(std::string to);

    static MovePrimary parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * The namespace of the database whose primary shard is to be reassigned.
     */
    const boost::optional<mongo::NamespaceString>& getMovePrimary() const& { return _movePrimary; }
    void getMovePrimary() && = delete;
    void setMovePrimary(boost::optional<mongo::NamespaceString> value) & {  _movePrimary = std::move(value);  }

    /**
     * The deprecated version of this command's name.
     */
    const boost::optional<mongo::NamespaceString>& getMoveprimary() const& { return _moveprimary; }
    void getMoveprimary() && = delete;
    void setMoveprimary(boost::optional<mongo::NamespaceString> value) & {  _moveprimary = std::move(value);  }

    /**
     * The shard serving as the destination for un-sharded collections.
     */
    const StringData getTo() const& { return _to; }
    void getTo() && = delete;
    void setTo(StringData value) & { auto _tmpValue = value.toString();  _to = std::move(_tmpValue); _hasTo = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    boost::optional<mongo::NamespaceString> _movePrimary;
    boost::optional<mongo::NamespaceString> _moveprimary;
    std::string _to;
    bool _hasTo : 1;
};

/**
 * The internal movePrimary command on a primary shard
 */
class ShardMovePrimary {
public:
    static constexpr auto k_shardsvrMovePrimaryFieldName = "_shardsvrMovePrimary"_sd;
    static constexpr auto kToFieldName = "to"_sd;

    ShardMovePrimary();
    ShardMovePrimary(mongo::NamespaceString _shardsvrMovePrimary, std::string to);

    static ShardMovePrimary parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * The namespace of the database whose primary shard is to be reassigned.
     */
    const mongo::NamespaceString& get_shardsvrMovePrimary() const { return __shardsvrMovePrimary; }
    void set_shardsvrMovePrimary(mongo::NamespaceString value) & {  __shardsvrMovePrimary = std::move(value); _has_shardsvrMovePrimary = true; }

    /**
     * The shard serving as the destination for un-sharded collections.
     */
    const StringData getTo() const& { return _to; }
    void getTo() && = delete;
    void setTo(StringData value) & { auto _tmpValue = value.toString();  _to = std::move(_tmpValue); _hasTo = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    auto _relopTuple() const {
        return std::tuple(idl::relop::Ordering{__shardsvrMovePrimary}, idl::relop::Ordering{_to});
    }
    friend bool operator==(const ShardMovePrimary& a, const ShardMovePrimary& b) {
        return a._relopTuple() == b._relopTuple();
    }
    friend bool operator!=(const ShardMovePrimary& a, const ShardMovePrimary& b) {
        return a._relopTuple() != b._relopTuple();
    }
    friend bool operator<(const ShardMovePrimary& a, const ShardMovePrimary& b) {
        return a._relopTuple() < b._relopTuple();
    }
    friend bool operator>(const ShardMovePrimary& a, const ShardMovePrimary& b) {
        return a._relopTuple() > b._relopTuple();
    }
    friend bool operator<=(const ShardMovePrimary& a, const ShardMovePrimary& b) {
        return a._relopTuple() <= b._relopTuple();
    }
    friend bool operator>=(const ShardMovePrimary& a, const ShardMovePrimary& b) {
        return a._relopTuple() >= b._relopTuple();
    }

    mongo::NamespaceString __shardsvrMovePrimary;
    std::string _to;
    bool _has_shardsvrMovePrimary : 1;
    bool _hasTo : 1;
};

}  // namespace mongo
