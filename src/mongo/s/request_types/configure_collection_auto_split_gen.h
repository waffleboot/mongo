/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/s/request_types/configure_collection_auto_split_gen.h --output build/opt/mongo/s/request_types/configure_collection_auto_split_gen.cpp src/mongo/s/request_types/configure_collection_auto_split.idl
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
 * Parameters for configureCollectionAutoSplitter command
 */
class Configure_auto_split_params {
public:
    static constexpr auto kDefaultChunkSizeMBFieldName = "defaultChunkSize"_sd;
    static constexpr auto kEnableAutoSplitterFieldName = "enableAutoSplitter"_sd;

    Configure_auto_split_params();

    static Configure_auto_split_params parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    /**
     * New default chunk size in MB.
     */
    const boost::optional<std::int32_t> getDefaultChunkSizeMB() const& { return _defaultChunkSizeMB; }
    void getDefaultChunkSizeMB() && = delete;
    void setDefaultChunkSizeMB(boost::optional<std::int32_t> value) & {  _defaultChunkSizeMB = std::move(value);  }

    /**
     * Specifies whether the auto-splitter should be running or not for this collection.
     */
    const boost::optional<bool> getEnableAutoSplitter() const& { return _enableAutoSplitter; }
    void getEnableAutoSplitter() && = delete;
    void setEnableAutoSplitter(boost::optional<bool> value) & {  _enableAutoSplitter = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    boost::optional<std::int32_t> _defaultChunkSizeMB;
    boost::optional<bool> _enableAutoSplitter;
};

/**
 * Public configureCollectionAutoSplitter command on mongos
 */
class ConfigureCollAutoSplit {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "configureAutoSplit"_sd;
    static constexpr auto kConfigureCollAutoSplitFieldName = "configure_auto_split_params"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kDefaultChunkSizeMBFieldName = "defaultChunkSize"_sd;
    static constexpr auto kEnableAutoSplitterFieldName = "enableAutoSplitter"_sd;
    static constexpr auto kCommandName = "configureCollectionAutoSplitter"_sd;

    explicit ConfigureCollAutoSplit(mongo::NamespaceString commandParameter);

    static ConfigureCollAutoSplit parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static ConfigureCollAutoSplit parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const mongo::NamespaceString& getCommandParameter() const { return _commandParameter; }

    /**
     * Parameters for configureCollectionAutoSplitter command
     */
    const mongo::Configure_auto_split_params& getConfigureCollAutoSplit() const { return _configureCollAutoSplit; }
    mongo::Configure_auto_split_params& getConfigureCollAutoSplit() { return _configureCollAutoSplit; }
    void setConfigureCollAutoSplit(mongo::Configure_auto_split_params value) & {  _configureCollAutoSplit = std::move(value);  }

    /**
     * New default chunk size in MB.
     */
    const  boost::optional<std::int32_t> getDefaultChunkSizeMB() const { return _configureCollAutoSplit.getDefaultChunkSizeMB(); }
    /**
     * Specifies whether the auto-splitter should be running or not for this collection.
     */
    const  boost::optional<bool> getEnableAutoSplitter() const { return _configureCollAutoSplit.getEnableAutoSplitter(); }
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

    mongo::Configure_auto_split_params _configureCollAutoSplit;
    std::string _dbName;
    bool _hasDbName : 1;
};

/**
 * Internal configureCollectionAutoSplitter command on the config server
 */
class ConfigsvrConfigureCollAutoSplit {
public:
    using Reply = void;
    static constexpr auto kCommandParameterFieldName = "_configsvrConfigureAutoSplit"_sd;
    static constexpr auto kConfigureCollAutoSplitFieldName = "configure_auto_split_params"_sd;
    static constexpr auto kDbNameFieldName = "$db"_sd;
    static constexpr auto kDefaultChunkSizeMBFieldName = "defaultChunkSize"_sd;
    static constexpr auto kEnableAutoSplitterFieldName = "enableAutoSplitter"_sd;
    static constexpr auto kCommandName = "_configsvrConfigureAutoSplit"_sd;

    explicit ConfigsvrConfigureCollAutoSplit(mongo::NamespaceString commandParameter);

    static ConfigsvrConfigureCollAutoSplit parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    static ConfigsvrConfigureCollAutoSplit parse(const IDLParserErrorContext& ctxt, const OpMsgRequest& request);
    void serialize(const BSONObj& commandPassthroughFields, BSONObjBuilder* builder) const;
    OpMsgRequest serialize(const BSONObj& commandPassthroughFields) const;
    BSONObj toBSON(const BSONObj& commandPassthroughFields) const;

    const mongo::NamespaceString& getCommandParameter() const { return _commandParameter; }

    /**
     * Parameters for configureCollectionAutoSplitter command
     */
    const mongo::Configure_auto_split_params& getConfigureCollAutoSplit() const { return _configureCollAutoSplit; }
    mongo::Configure_auto_split_params& getConfigureCollAutoSplit() { return _configureCollAutoSplit; }
    void setConfigureCollAutoSplit(mongo::Configure_auto_split_params value) & {  _configureCollAutoSplit = std::move(value);  }

    /**
     * New default chunk size in MB.
     */
    const  boost::optional<std::int32_t> getDefaultChunkSizeMB() const { return _configureCollAutoSplit.getDefaultChunkSizeMB(); }
    /**
     * Specifies whether the auto-splitter should be running or not for this collection.
     */
    const  boost::optional<bool> getEnableAutoSplitter() const { return _configureCollAutoSplit.getEnableAutoSplitter(); }
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

    mongo::Configure_auto_split_params _configureCollAutoSplit;
    std::string _dbName;
    bool _hasDbName : 1;
};

}  // namespace mongo
