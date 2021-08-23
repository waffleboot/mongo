/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/shell/kms_gen.h --output build/opt/mongo/shell/kms_gen.cpp src/mongo/shell/kms.idl
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
 * Enumeration of supported KMS Providers
 */
enum class KMSProviderEnum : std::int32_t {
    aws ,
    azure ,
    gcp ,
    local ,
};
static constexpr uint32_t kNumKMSProviderEnum = 4;

KMSProviderEnum KMSProvider_parse(const IDLParserErrorContext& ctxt, StringData value);
StringData KMSProvider_serializer(KMSProviderEnum value);

/**
 * AWS KMS error
 */
class AwsKMSError {
public:
    static constexpr auto kMessageFieldName = "Message"_sd;
    static constexpr auto kTypeFieldName = "__type"_sd;

    AwsKMSError();
    AwsKMSError(std::string type, std::string message);

    static AwsKMSError parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getType() const& { return _type; }
    void getType() && = delete;
    void setType(StringData value) & { auto _tmpValue = value.toString();  _type = std::move(_tmpValue); _hasType = true; }

    const StringData getMessage() const& { return _message; }
    void getMessage() && = delete;
    void setMessage(StringData value) & { auto _tmpValue = value.toString();  _message = std::move(_tmpValue); _hasMessage = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _type;
    std::string _message;
    bool _hasType : 1;
    bool _hasMessage : 1;
};

/**
 * AWS KMS config
 */
class AwsKMS {
public:
    static constexpr auto kAccessKeyIdFieldName = "accessKeyId"_sd;
    static constexpr auto kSecretAccessKeyFieldName = "secretAccessKey"_sd;
    static constexpr auto kSessionTokenFieldName = "sessionToken"_sd;
    static constexpr auto kUrlFieldName = "url"_sd;

    AwsKMS();
    AwsKMS(std::string accessKeyId, std::string secretAccessKey);

    static AwsKMS parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getAccessKeyId() const& { return _accessKeyId; }
    void getAccessKeyId() && = delete;
    void setAccessKeyId(StringData value) & { auto _tmpValue = value.toString();  _accessKeyId = std::move(_tmpValue); _hasAccessKeyId = true; }

    const StringData getSecretAccessKey() const& { return _secretAccessKey; }
    void getSecretAccessKey() && = delete;
    void setSecretAccessKey(StringData value) & { auto _tmpValue = value.toString();  _secretAccessKey = std::move(_tmpValue); _hasSecretAccessKey = true; }

    const boost::optional<StringData> getSessionToken() const& { return boost::optional<StringData>{_sessionToken}; }
    void getSessionToken() && = delete;
    void setSessionToken(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _sessionToken = std::move(_tmpValue);
    } else {
        _sessionToken = boost::none;
    }
      }

    const boost::optional<StringData> getUrl() const& { return boost::optional<StringData>{_url}; }
    void getUrl() && = delete;
    void setUrl(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _url = std::move(_tmpValue);
    } else {
        _url = boost::none;
    }
      }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _accessKeyId;
    std::string _secretAccessKey;
    boost::optional<std::string> _sessionToken;
    boost::optional<std::string> _url;
    bool _hasAccessKeyId : 1;
    bool _hasSecretAccessKey : 1;
};

/**
 * Azure KMS Error
 */
class AzureKMSError {
public:
    static constexpr auto kCodeFieldName = "code"_sd;
    static constexpr auto kMessageFieldName = "message"_sd;

    AzureKMSError();
    AzureKMSError(std::string code, std::string message);

    static AzureKMSError parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getCode() const& { return _code; }
    void getCode() && = delete;
    void setCode(StringData value) & { auto _tmpValue = value.toString();  _code = std::move(_tmpValue); _hasCode = true; }

    const StringData getMessage() const& { return _message; }
    void getMessage() && = delete;
    void setMessage(StringData value) & { auto _tmpValue = value.toString();  _message = std::move(_tmpValue); _hasMessage = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _code;
    std::string _message;
    bool _hasCode : 1;
    bool _hasMessage : 1;
};

/**
 * Azure KMS config
 */
class AzureKMS {
public:
    static constexpr auto kClientIdFieldName = "clientId"_sd;
    static constexpr auto kClientSecretFieldName = "clientSecret"_sd;
    static constexpr auto kIdentityPlatformEndpointFieldName = "identityPlatformEndpoint"_sd;
    static constexpr auto kTenantIdFieldName = "tenantId"_sd;

    AzureKMS();
    AzureKMS(std::string tenantId, std::string clientId, std::string clientSecret);

    static AzureKMS parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getTenantId() const& { return _tenantId; }
    void getTenantId() && = delete;
    void setTenantId(StringData value) & { auto _tmpValue = value.toString();  _tenantId = std::move(_tmpValue); _hasTenantId = true; }

    const StringData getClientId() const& { return _clientId; }
    void getClientId() && = delete;
    void setClientId(StringData value) & { auto _tmpValue = value.toString();  _clientId = std::move(_tmpValue); _hasClientId = true; }

    const StringData getClientSecret() const& { return _clientSecret; }
    void getClientSecret() && = delete;
    void setClientSecret(StringData value) & { auto _tmpValue = value.toString();  _clientSecret = std::move(_tmpValue); _hasClientSecret = true; }

    const boost::optional<StringData> getIdentityPlatformEndpoint() const& { return boost::optional<StringData>{_identityPlatformEndpoint}; }
    void getIdentityPlatformEndpoint() && = delete;
    void setIdentityPlatformEndpoint(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _identityPlatformEndpoint = std::move(_tmpValue);
    } else {
        _identityPlatformEndpoint = boost::none;
    }
      }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _tenantId;
    std::string _clientId;
    std::string _clientSecret;
    boost::optional<std::string> _identityPlatformEndpoint;
    bool _hasTenantId : 1;
    bool _hasClientId : 1;
    bool _hasClientSecret : 1;
};

/**
 * GCP KMS Error
 */
class GcpKMSError {
public:
    static constexpr auto kCodeFieldName = "code"_sd;
    static constexpr auto kMessageFieldName = "message"_sd;
    static constexpr auto kStatusFieldName = "status"_sd;

    GcpKMSError();
    GcpKMSError(std::int32_t code, std::string message, std::string status);

    static GcpKMSError parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    std::int32_t getCode() const { return _code; }
    void setCode(std::int32_t value) & {  _code = std::move(value); _hasCode = true; }

    const StringData getMessage() const& { return _message; }
    void getMessage() && = delete;
    void setMessage(StringData value) & { auto _tmpValue = value.toString();  _message = std::move(_tmpValue); _hasMessage = true; }

    const StringData getStatus() const& { return _status; }
    void getStatus() && = delete;
    void setStatus(StringData value) & { auto _tmpValue = value.toString();  _status = std::move(_tmpValue); _hasStatus = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::int32_t _code;
    std::string _message;
    std::string _status;
    bool _hasCode : 1;
    bool _hasMessage : 1;
    bool _hasStatus : 1;
};

/**
 * GCP KMS config
 */
class GcpKMS {
public:
    static constexpr auto kEmailFieldName = "email"_sd;
    static constexpr auto kEndpointFieldName = "endpoint"_sd;
    static constexpr auto kPrivateKeyFieldName = "privateKey"_sd;

    GcpKMS();
    GcpKMS(std::string email, std::string privateKey);

    static GcpKMS parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getEmail() const& { return _email; }
    void getEmail() && = delete;
    void setEmail(StringData value) & { auto _tmpValue = value.toString();  _email = std::move(_tmpValue); _hasEmail = true; }

    const boost::optional<StringData> getEndpoint() const& { return boost::optional<StringData>{_endpoint}; }
    void getEndpoint() && = delete;
    void setEndpoint(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _endpoint = std::move(_tmpValue);
    } else {
        _endpoint = boost::none;
    }
      }

    const StringData getPrivateKey() const& { return _privateKey; }
    void getPrivateKey() && = delete;
    void setPrivateKey(StringData value) & { auto _tmpValue = value.toString();  _privateKey = std::move(_tmpValue); _hasPrivateKey = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _email;
    boost::optional<std::string> _endpoint;
    std::string _privateKey;
    bool _hasEmail : 1;
    bool _hasPrivateKey : 1;
};

/**
 * Local KMS config
 */
class LocalKMS {
public:
    static constexpr auto kKeyFieldName = "key"_sd;

    LocalKMS();
    LocalKMS(std::vector<std::uint8_t> key);

    static LocalKMS parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const ConstDataRange getKey() const& { return ConstDataRange(_key); }
    void getKey() && = delete;
    void setKey(ConstDataRange value) & { auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.data()), reinterpret_cast<const uint8_t*>(value.data()) + value.length());  _key = std::move(_tmpValue); _hasKey = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::vector<std::uint8_t> _key;
    bool _hasKey : 1;
};

/**
 * Supported KMS Providers
 */
class KmsProviders {
public:
    static constexpr auto kAwsFieldName = "aws"_sd;
    static constexpr auto kAzureFieldName = "azure"_sd;
    static constexpr auto kGcpFieldName = "gcp"_sd;
    static constexpr auto kLocalFieldName = "local"_sd;

    KmsProviders();

    static KmsProviders parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const boost::optional<mongo::AwsKMS>& getAws() const& { return _aws; }
    void getAws() && = delete;
    void setAws(boost::optional<mongo::AwsKMS> value) & {  _aws = std::move(value);  }

    const boost::optional<mongo::AzureKMS>& getAzure() const& { return _azure; }
    void getAzure() && = delete;
    void setAzure(boost::optional<mongo::AzureKMS> value) & {  _azure = std::move(value);  }

    const boost::optional<mongo::GcpKMS>& getGcp() const& { return _gcp; }
    void getGcp() && = delete;
    void setGcp(boost::optional<mongo::GcpKMS> value) & {  _gcp = std::move(value);  }

    const boost::optional<mongo::LocalKMS>& getLocal() const& { return _local; }
    void getLocal() && = delete;
    void setLocal(boost::optional<mongo::LocalKMS> value) & {  _local = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    boost::optional<mongo::AwsKMS> _aws;
    boost::optional<mongo::AzureKMS> _azure;
    boost::optional<mongo::GcpKMS> _gcp;
    boost::optional<mongo::LocalKMS> _local;
};

/**
 * FLE Options inputted through the Mongo constructor in the shell
 */
class ClientSideFLEOptions {
public:
    static constexpr auto kBypassAutoEncryptionFieldName = "bypassAutoEncryption"_sd;
    static constexpr auto kKeyVaultClientFieldName = "keyVaultClient"_sd;
    static constexpr auto kKeyVaultNamespaceFieldName = "keyVaultNamespace"_sd;
    static constexpr auto kKmsProvidersFieldName = "kmsProviders"_sd;
    static constexpr auto kSchemaMapFieldName = "schemaMap"_sd;

    ClientSideFLEOptions();
    ClientSideFLEOptions(std::string keyVaultNamespace, mongo::KmsProviders kmsProviders);

    static ClientSideFLEOptions parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getKeyVaultNamespace() const& { return _keyVaultNamespace; }
    void getKeyVaultNamespace() && = delete;
    void setKeyVaultNamespace(StringData value) & { auto _tmpValue = value.toString();  _keyVaultNamespace = std::move(_tmpValue); _hasKeyVaultNamespace = true; }

    const mongo::KmsProviders& getKmsProviders() const { return _kmsProviders; }
    mongo::KmsProviders& getKmsProviders() { return _kmsProviders; }
    void setKmsProviders(mongo::KmsProviders value) & {  _kmsProviders = std::move(value); _hasKmsProviders = true; }

    const boost::optional<mongo::BSONObj>& getSchemaMap() const& { return _schemaMap; }
    void getSchemaMap() && = delete;
    void setSchemaMap(boost::optional<mongo::BSONObj> value) & {  _schemaMap = std::move(value);  }

    const boost::optional<bool> getBypassAutoEncryption() const& { return _bypassAutoEncryption; }
    void getBypassAutoEncryption() && = delete;
    void setBypassAutoEncryption(boost::optional<bool> value) & {  _bypassAutoEncryption = std::move(value);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _keyVaultNamespace;
    mongo::KmsProviders _kmsProviders;
    boost::optional<mongo::BSONObj> _schemaMap;
    boost::optional<bool> _bypassAutoEncryption;
    bool _hasKeyVaultNamespace : 1;
    bool _hasKmsProviders : 1;
};

/**
 * Response from AWS KMS Encrypt request, i.e. TrentService.Encrypt
 */
class AwsEncryptResponse {
public:
    static constexpr auto kCiphertextBlobFieldName = "CiphertextBlob"_sd;
    static constexpr auto kKeyIdFieldName = "KeyId"_sd;

    AwsEncryptResponse();
    AwsEncryptResponse(std::string ciphertextBlob, std::string keyId);

    static AwsEncryptResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getCiphertextBlob() const& { return _ciphertextBlob; }
    void getCiphertextBlob() && = delete;
    void setCiphertextBlob(StringData value) & { auto _tmpValue = value.toString();  _ciphertextBlob = std::move(_tmpValue); _hasCiphertextBlob = true; }

    const StringData getKeyId() const& { return _keyId; }
    void getKeyId() && = delete;
    void setKeyId(StringData value) & { auto _tmpValue = value.toString();  _keyId = std::move(_tmpValue); _hasKeyId = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _ciphertextBlob;
    std::string _keyId;
    bool _hasCiphertextBlob : 1;
    bool _hasKeyId : 1;
};

/**
 * Response from AWS KMS Decrypt request, i.e. TrentService.Decrypt
 */
class AwsDecryptResponse {
public:
    static constexpr auto kKeyIdFieldName = "KeyId"_sd;
    static constexpr auto kPlaintextFieldName = "Plaintext"_sd;

    AwsDecryptResponse();
    AwsDecryptResponse(std::string plaintext, std::string keyId);

    static AwsDecryptResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getPlaintext() const& { return _plaintext; }
    void getPlaintext() && = delete;
    void setPlaintext(StringData value) & { auto _tmpValue = value.toString();  _plaintext = std::move(_tmpValue); _hasPlaintext = true; }

    const StringData getKeyId() const& { return _keyId; }
    void getKeyId() && = delete;
    void setKeyId(StringData value) & { auto _tmpValue = value.toString();  _keyId = std::move(_tmpValue); _hasKeyId = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _plaintext;
    std::string _keyId;
    bool _hasPlaintext : 1;
    bool _hasKeyId : 1;
};

/**
 * AWS KMS Key Store Description
 */
class AwsMasterKey {
public:
    static constexpr auto kEndpointFieldName = "endpoint"_sd;
    static constexpr auto kKeyFieldName = "key"_sd;
    static constexpr auto kProviderFieldName = "provider"_sd;
    static constexpr auto kRegionFieldName = "region"_sd;

    AwsMasterKey();
    AwsMasterKey(std::string key, std::string region);

    static AwsMasterKey parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getProvider() const& { return _provider; }
    void getProvider() && = delete;
    void setProvider(StringData value) & { auto _tmpValue = value.toString();  _provider = std::move(_tmpValue);  }

    const StringData getKey() const& { return _key; }
    void getKey() && = delete;
    void setKey(StringData value) & { auto _tmpValue = value.toString();  _key = std::move(_tmpValue); _hasKey = true; }

    const StringData getRegion() const& { return _region; }
    void getRegion() && = delete;
    void setRegion(StringData value) & { auto _tmpValue = value.toString();  _region = std::move(_tmpValue); _hasRegion = true; }

    const boost::optional<StringData> getEndpoint() const& { return boost::optional<StringData>{_endpoint}; }
    void getEndpoint() && = delete;
    void setEndpoint(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _endpoint = std::move(_tmpValue);
    } else {
        _endpoint = boost::none;
    }
      }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _provider{"aws"};
    std::string _key;
    std::string _region;
    boost::optional<std::string> _endpoint;
    bool _hasKey : 1;
    bool _hasRegion : 1;
};

/**
 * AWS KMS Key Material Description
 */
class AwsMasterKeyAndMaterial {
public:
    static constexpr auto kKeyMaterialFieldName = "keyMaterial"_sd;
    static constexpr auto kMasterKeyFieldName = "masterKey"_sd;

    AwsMasterKeyAndMaterial();
    AwsMasterKeyAndMaterial(std::vector<std::uint8_t> keyMaterial, mongo::AwsMasterKey masterKey);

    static AwsMasterKeyAndMaterial parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const ConstDataRange getKeyMaterial() const& { return ConstDataRange(_keyMaterial); }
    void getKeyMaterial() && = delete;
    void setKeyMaterial(ConstDataRange value) & { auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.data()), reinterpret_cast<const uint8_t*>(value.data()) + value.length());  _keyMaterial = std::move(_tmpValue); _hasKeyMaterial = true; }

    const mongo::AwsMasterKey& getMasterKey() const { return _masterKey; }
    mongo::AwsMasterKey& getMasterKey() { return _masterKey; }
    void setMasterKey(mongo::AwsMasterKey value) & {  _masterKey = std::move(value); _hasMasterKey = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::vector<std::uint8_t> _keyMaterial;
    mongo::AwsMasterKey _masterKey;
    bool _hasKeyMaterial : 1;
    bool _hasMasterKey : 1;
};

/**
 * Response from Azure KMS wrapKey request
 */
class AzureEncryptResponse {
public:
    static constexpr auto kKidFieldName = "kid"_sd;
    static constexpr auto kValueFieldName = "value"_sd;

    AzureEncryptResponse();
    AzureEncryptResponse(std::string kid, std::string value);

    static AzureEncryptResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getKid() const& { return _kid; }
    void getKid() && = delete;
    void setKid(StringData value) & { auto _tmpValue = value.toString();  _kid = std::move(_tmpValue); _hasKid = true; }

    const StringData getValue() const& { return _value; }
    void getValue() && = delete;
    void setValue(StringData value) & { auto _tmpValue = value.toString();  _value = std::move(_tmpValue); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _kid;
    std::string _value;
    bool _hasKid : 1;
    bool _hasValue : 1;
};

/**
 * Response from Azure KMS unwrapKey request
 */
class AzureDecryptResponse {
public:
    static constexpr auto kKidFieldName = "kid"_sd;
    static constexpr auto kValueFieldName = "value"_sd;

    AzureDecryptResponse();
    AzureDecryptResponse(std::string kid, std::string value);

    static AzureDecryptResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getKid() const& { return _kid; }
    void getKid() && = delete;
    void setKid(StringData value) & { auto _tmpValue = value.toString();  _kid = std::move(_tmpValue); _hasKid = true; }

    const StringData getValue() const& { return _value; }
    void getValue() && = delete;
    void setValue(StringData value) & { auto _tmpValue = value.toString();  _value = std::move(_tmpValue); _hasValue = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _kid;
    std::string _value;
    bool _hasKid : 1;
    bool _hasValue : 1;
};

/**
 * Azure KMS Key Store Description
 */
class AzureMasterKey {
public:
    static constexpr auto kKeyNameFieldName = "keyName"_sd;
    static constexpr auto kKeyVaultEndpointFieldName = "keyVaultEndpoint"_sd;
    static constexpr auto kKeyVersionFieldName = "keyVersion"_sd;
    static constexpr auto kProviderFieldName = "provider"_sd;

    AzureMasterKey();
    AzureMasterKey(std::string keyName, std::string keyVaultEndpoint);

    static AzureMasterKey parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getProvider() const& { return _provider; }
    void getProvider() && = delete;
    void setProvider(StringData value) & { auto _tmpValue = value.toString();  _provider = std::move(_tmpValue);  }

    const StringData getKeyName() const& { return _keyName; }
    void getKeyName() && = delete;
    void setKeyName(StringData value) & { auto _tmpValue = value.toString();  _keyName = std::move(_tmpValue); _hasKeyName = true; }

    const boost::optional<StringData> getKeyVersion() const& { return boost::optional<StringData>{_keyVersion}; }
    void getKeyVersion() && = delete;
    void setKeyVersion(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _keyVersion = std::move(_tmpValue);
    } else {
        _keyVersion = boost::none;
    }
      }

    const StringData getKeyVaultEndpoint() const& { return _keyVaultEndpoint; }
    void getKeyVaultEndpoint() && = delete;
    void setKeyVaultEndpoint(StringData value) & { auto _tmpValue = value.toString();  _keyVaultEndpoint = std::move(_tmpValue); _hasKeyVaultEndpoint = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _provider{"azure"};
    std::string _keyName;
    boost::optional<std::string> _keyVersion;
    std::string _keyVaultEndpoint;
    bool _hasKeyName : 1;
    bool _hasKeyVaultEndpoint : 1;
};

/**
 * Azure KMS Key Material Description
 */
class AzureMasterKeyAndMaterial {
public:
    static constexpr auto kKeyMaterialFieldName = "keyMaterial"_sd;
    static constexpr auto kMasterKeyFieldName = "masterKey"_sd;

    AzureMasterKeyAndMaterial();
    AzureMasterKeyAndMaterial(std::vector<std::uint8_t> keyMaterial, mongo::AzureMasterKey masterKey);

    static AzureMasterKeyAndMaterial parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const ConstDataRange getKeyMaterial() const& { return ConstDataRange(_keyMaterial); }
    void getKeyMaterial() && = delete;
    void setKeyMaterial(ConstDataRange value) & { auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.data()), reinterpret_cast<const uint8_t*>(value.data()) + value.length());  _keyMaterial = std::move(_tmpValue); _hasKeyMaterial = true; }

    const mongo::AzureMasterKey& getMasterKey() const { return _masterKey; }
    mongo::AzureMasterKey& getMasterKey() { return _masterKey; }
    void setMasterKey(mongo::AzureMasterKey value) & {  _masterKey = std::move(value); _hasMasterKey = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::vector<std::uint8_t> _keyMaterial;
    mongo::AzureMasterKey _masterKey;
    bool _hasKeyMaterial : 1;
    bool _hasMasterKey : 1;
};

/**
 * Response from GCP KMS Encrypt request
 */
class GcpEncryptResponse {
public:
    static constexpr auto kCiphertextFieldName = "ciphertext"_sd;
    static constexpr auto kNameFieldName = "name"_sd;

    GcpEncryptResponse();
    GcpEncryptResponse(std::string name, std::string ciphertext);

    static GcpEncryptResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getName() const& { return _name; }
    void getName() && = delete;
    void setName(StringData value) & { auto _tmpValue = value.toString();  _name = std::move(_tmpValue); _hasName = true; }

    const StringData getCiphertext() const& { return _ciphertext; }
    void getCiphertext() && = delete;
    void setCiphertext(StringData value) & { auto _tmpValue = value.toString();  _ciphertext = std::move(_tmpValue); _hasCiphertext = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _name;
    std::string _ciphertext;
    bool _hasName : 1;
    bool _hasCiphertext : 1;
};

/**
 * Response from GCP KMS Decrypt request
 */
class GcpDecryptResponse {
public:
    static constexpr auto kPlaintextFieldName = "plaintext"_sd;

    GcpDecryptResponse();
    GcpDecryptResponse(std::string plaintext);

    static GcpDecryptResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getPlaintext() const& { return _plaintext; }
    void getPlaintext() && = delete;
    void setPlaintext(StringData value) & { auto _tmpValue = value.toString();  _plaintext = std::move(_tmpValue); _hasPlaintext = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _plaintext;
    bool _hasPlaintext : 1;
};

/**
 * GCP KMS Key Store Description
 */
class GcpMasterKey {
public:
    static constexpr auto kEndpointFieldName = "endpoint"_sd;
    static constexpr auto kKeyNameFieldName = "keyName"_sd;
    static constexpr auto kKeyRingFieldName = "keyRing"_sd;
    static constexpr auto kKeyVersionFieldName = "keyVersion"_sd;
    static constexpr auto kLocationFieldName = "location"_sd;
    static constexpr auto kProjectIdFieldName = "projectId"_sd;
    static constexpr auto kProviderFieldName = "provider"_sd;

    GcpMasterKey();
    GcpMasterKey(std::string keyName, std::string keyRing, std::string location, std::string projectId);

    static GcpMasterKey parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getProvider() const& { return _provider; }
    void getProvider() && = delete;
    void setProvider(StringData value) & { auto _tmpValue = value.toString();  _provider = std::move(_tmpValue);  }

    const StringData getKeyName() const& { return _keyName; }
    void getKeyName() && = delete;
    void setKeyName(StringData value) & { auto _tmpValue = value.toString();  _keyName = std::move(_tmpValue); _hasKeyName = true; }

    const StringData getKeyRing() const& { return _keyRing; }
    void getKeyRing() && = delete;
    void setKeyRing(StringData value) & { auto _tmpValue = value.toString();  _keyRing = std::move(_tmpValue); _hasKeyRing = true; }

    const boost::optional<StringData> getKeyVersion() const& { return boost::optional<StringData>{_keyVersion}; }
    void getKeyVersion() && = delete;
    void setKeyVersion(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _keyVersion = std::move(_tmpValue);
    } else {
        _keyVersion = boost::none;
    }
      }

    const StringData getLocation() const& { return _location; }
    void getLocation() && = delete;
    void setLocation(StringData value) & { auto _tmpValue = value.toString();  _location = std::move(_tmpValue); _hasLocation = true; }

    const StringData getProjectId() const& { return _projectId; }
    void getProjectId() && = delete;
    void setProjectId(StringData value) & { auto _tmpValue = value.toString();  _projectId = std::move(_tmpValue); _hasProjectId = true; }

    const boost::optional<StringData> getEndpoint() const& { return boost::optional<StringData>{_endpoint}; }
    void getEndpoint() && = delete;
    void setEndpoint(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _endpoint = std::move(_tmpValue);
    } else {
        _endpoint = boost::none;
    }
      }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _provider{"gcp"};
    std::string _keyName;
    std::string _keyRing;
    boost::optional<std::string> _keyVersion;
    std::string _location;
    std::string _projectId;
    boost::optional<std::string> _endpoint;
    bool _hasKeyName : 1;
    bool _hasKeyRing : 1;
    bool _hasLocation : 1;
    bool _hasProjectId : 1;
};

/**
 * GCP KMS Key Material Description
 */
class GcpMasterKeyAndMaterial {
public:
    static constexpr auto kKeyMaterialFieldName = "keyMaterial"_sd;
    static constexpr auto kMasterKeyFieldName = "masterKey"_sd;

    GcpMasterKeyAndMaterial();
    GcpMasterKeyAndMaterial(std::vector<std::uint8_t> keyMaterial, mongo::GcpMasterKey masterKey);

    static GcpMasterKeyAndMaterial parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const ConstDataRange getKeyMaterial() const& { return ConstDataRange(_keyMaterial); }
    void getKeyMaterial() && = delete;
    void setKeyMaterial(ConstDataRange value) & { auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.data()), reinterpret_cast<const uint8_t*>(value.data()) + value.length());  _keyMaterial = std::move(_tmpValue); _hasKeyMaterial = true; }

    const mongo::GcpMasterKey& getMasterKey() const { return _masterKey; }
    mongo::GcpMasterKey& getMasterKey() { return _masterKey; }
    void setMasterKey(mongo::GcpMasterKey value) & {  _masterKey = std::move(value); _hasMasterKey = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::vector<std::uint8_t> _keyMaterial;
    mongo::GcpMasterKey _masterKey;
    bool _hasKeyMaterial : 1;
    bool _hasMasterKey : 1;
};

/**
 * Local KMS Key Store Description
 */
class LocalMasterKey {
public:
    static constexpr auto kProviderFieldName = "provider"_sd;

    LocalMasterKey();

    static LocalMasterKey parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getProvider() const& { return _provider; }
    void getProvider() && = delete;
    void setProvider(StringData value) & { auto _tmpValue = value.toString();  _provider = std::move(_tmpValue);  }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _provider{"local"};
};

/**
 * Local KMS Key Material Description
 */
class LocalMasterKeyAndMaterial {
public:
    static constexpr auto kKeyMaterialFieldName = "keyMaterial"_sd;
    static constexpr auto kMasterKeyFieldName = "masterKey"_sd;

    LocalMasterKeyAndMaterial();
    LocalMasterKeyAndMaterial(std::vector<std::uint8_t> keyMaterial, mongo::LocalMasterKey masterKey);

    static LocalMasterKeyAndMaterial parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const ConstDataRange getKeyMaterial() const& { return ConstDataRange(_keyMaterial); }
    void getKeyMaterial() && = delete;
    void setKeyMaterial(ConstDataRange value) & { auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.data()), reinterpret_cast<const uint8_t*>(value.data()) + value.length());  _keyMaterial = std::move(_tmpValue); _hasKeyMaterial = true; }

    const mongo::LocalMasterKey& getMasterKey() const { return _masterKey; }
    mongo::LocalMasterKey& getMasterKey() { return _masterKey; }
    void setMasterKey(mongo::LocalMasterKey value) & {  _masterKey = std::move(value); _hasMasterKey = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::vector<std::uint8_t> _keyMaterial;
    mongo::LocalMasterKey _masterKey;
    bool _hasKeyMaterial : 1;
    bool _hasMasterKey : 1;
};

/**
 * A V0 Key Store Record
 */
class KeyStoreRecord {
public:
    static constexpr auto k_idFieldName = "_id"_sd;
    static constexpr auto kCreationDateFieldName = "creationDate"_sd;
    static constexpr auto kKeyAltNamesFieldName = "keyAltNames"_sd;
    static constexpr auto kKeyMaterialFieldName = "keyMaterial"_sd;
    static constexpr auto kMasterKeyFieldName = "masterKey"_sd;
    static constexpr auto kStatusFieldName = "status"_sd;
    static constexpr auto kUpdateDateFieldName = "updateDate"_sd;
    static constexpr auto kVersionFieldName = "version"_sd;

    KeyStoreRecord();
    KeyStoreRecord(mongo::UUID _id, std::vector<std::uint8_t> keyMaterial, mongo::Date_t creationDate, mongo::Date_t updateDate, std::int32_t status, mongo::BSONObj masterKey);

    static KeyStoreRecord parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const mongo::UUID& get_id() const { return __id; }
    void set_id(mongo::UUID value) & {  __id = std::move(value); _has_id = true; }

    const ConstDataRange getKeyMaterial() const& { return ConstDataRange(_keyMaterial); }
    void getKeyMaterial() && = delete;
    void setKeyMaterial(ConstDataRange value) & { auto _tmpValue = std::vector<std::uint8_t>(reinterpret_cast<const uint8_t*>(value.data()), reinterpret_cast<const uint8_t*>(value.data()) + value.length());  _keyMaterial = std::move(_tmpValue); _hasKeyMaterial = true; }

    const mongo::Date_t& getCreationDate() const { return _creationDate; }
    void setCreationDate(mongo::Date_t value) & {  _creationDate = std::move(value); _hasCreationDate = true; }

    const mongo::Date_t& getUpdateDate() const { return _updateDate; }
    void setUpdateDate(mongo::Date_t value) & {  _updateDate = std::move(value); _hasUpdateDate = true; }

    std::int32_t getStatus() const { return _status; }
    void setStatus(std::int32_t value) & {  _status = std::move(value); _hasStatus = true; }

    std::int64_t getVersion() const { return _version; }
    void setVersion(std::int64_t value) & {  _version = std::move(value);  }

    const mongo::BSONObj& getMasterKey() const { return _masterKey; }
    void setMasterKey(mongo::BSONObj value) & {  _masterKey = std::move(value); _hasMasterKey = true; }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    mongo::UUID __id;
    std::vector<std::uint8_t> _keyMaterial;
    mongo::Date_t _creationDate;
    mongo::Date_t _updateDate;
    std::int32_t _status;
    std::int64_t _version{0};
    mongo::BSONObj _masterKey;
    bool _has_id : 1;
    bool _hasKeyMaterial : 1;
    bool _hasCreationDate : 1;
    bool _hasUpdateDate : 1;
    bool _hasStatus : 1;
    bool _hasMasterKey : 1;
};

/**
 * An oauth response with a token
 */
class OAuthResponse {
public:
    static constexpr auto kAccess_tokenFieldName = "access_token"_sd;
    static constexpr auto kExpires_inFieldName = "expires_in"_sd;
    static constexpr auto kScopeFieldName = "scope"_sd;
    static constexpr auto kToken_typeFieldName = "token_type"_sd;

    OAuthResponse();
    OAuthResponse(std::string access_token, std::string token_type);

    static OAuthResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getAccess_token() const& { return _access_token; }
    void getAccess_token() && = delete;
    void setAccess_token(StringData value) & { auto _tmpValue = value.toString();  _access_token = std::move(_tmpValue); _hasAccess_token = true; }

    const StringData getToken_type() const& { return _token_type; }
    void getToken_type() && = delete;
    void setToken_type(StringData value) & { auto _tmpValue = value.toString();  _token_type = std::move(_tmpValue); _hasToken_type = true; }

    const boost::optional<std::int32_t> getExpires_in() const& { return _expires_in; }
    void getExpires_in() && = delete;
    void setExpires_in(boost::optional<std::int32_t> value) & {  _expires_in = std::move(value);  }

    const boost::optional<StringData> getScope() const& { return boost::optional<StringData>{_scope}; }
    void getScope() && = delete;
    void setScope(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _scope = std::move(_tmpValue);
    } else {
        _scope = boost::none;
    }
      }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _access_token;
    std::string _token_type;
    boost::optional<std::int32_t> _expires_in;
    boost::optional<std::string> _scope;
    bool _hasAccess_token : 1;
    bool _hasToken_type : 1;
};

/**
 * An oauth response with a token
 */
class OAuthErrorResponse {
public:
    static constexpr auto kErrorFieldName = "error"_sd;
    static constexpr auto kError_descriptionFieldName = "error_description"_sd;
    static constexpr auto kError_uriFieldName = "error_uri"_sd;

    OAuthErrorResponse();
    OAuthErrorResponse(std::string error);

    static OAuthErrorResponse parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);
    void serialize(BSONObjBuilder* builder) const;
    BSONObj toBSON() const;

    const StringData getError() const& { return _error; }
    void getError() && = delete;
    void setError(StringData value) & { auto _tmpValue = value.toString();  _error = std::move(_tmpValue); _hasError = true; }

    const boost::optional<StringData> getError_description() const& { return boost::optional<StringData>{_error_description}; }
    void getError_description() && = delete;
    void setError_description(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _error_description = std::move(_tmpValue);
    } else {
        _error_description = boost::none;
    }
      }

    const boost::optional<StringData> getError_uri() const& { return boost::optional<StringData>{_error_uri}; }
    void getError_uri() && = delete;
    void setError_uri(boost::optional<StringData> value) & { if (value.is_initialized()) {
        auto _tmpValue = value.get().toString();
        
        _error_uri = std::move(_tmpValue);
    } else {
        _error_uri = boost::none;
    }
      }

protected:
    void parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject);

private:
    std::string _error;
    boost::optional<std::string> _error_description;
    boost::optional<std::string> _error_uri;
    bool _hasError : 1;
};

}  // namespace mongo
