/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/s/request_types/set_allow_migrations_gen.h --output build/opt/mongo/s/request_types/set_allow_migrations_gen.cpp src/mongo/s/request_types/set_allow_migrations.idl
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
 * internal setAllowMigrations command for config server
 */
class ConfigsvrSetAllowMigrations {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "_configsvrSetAllowMigrations"_sd;
    static constexpr auto kAllowMigrationsFieldName = "allowMigrations"_sd;
    static constexpr auto kCollectionUUIDFieldName = "collectionUUID"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kCommandName = "_configsvrSetAllowMigrations"_sd;

    explicit ConfigsvrSetAllowMigrations(mongo::NamespaceString commandParameter);
    explicit ConfigsvrSetAllowMigrations(mongo::NamespaceString commandParameter, bool allowMigrations);

    static ConfigsvrSetAllowMigrations parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static ConfigsvrSetAllowMigrations parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const mongo::NamespaceString& getCommandParameter() const { return _commandParameter; }

    /**
     * The new allowMigrations flag state to be set.
     */
    bool getAllowMigrations() const { return _allowMigrations; }
    void setAllowMigrations(bool value) & {  _allowMigrations = std::move(value); _hasAllowMigrations = true; }

    /**
     * The uuid of the collection.
     */
    const boost::optional<mongo::UUID>& getCollectionUUID() const& { return _collectionUUID; }
    void getCollectionUUID() && = delete;
    void setCollectionUUID(boost::optional<mongo::UUID> value) & {  _collectionUUID = std::move(value);  }

    const StringData getDbName() const& { return _dbName; }
    void getDbName() && = delete;
    void setDbName(StringData value) & { auto _tmpValue = value.toString();  _dbName = std::move(_tmpValue); _hasDbName = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void parseProtected(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);

private:
    static const std::vector<StringData> _knownBSONFields;
    static const std::vector<StringData> _knownOP_MSGFields;


    mongo::NamespaceString _commandParameter;

    bool _allowMigrations;
    boost::optional<mongo::UUID> _collectionUUID;
    std::string _dbName;
    bool _hasAllowMigrations : 1;
    bool _hasDbName : 1;
};

}  // namespace mongo
