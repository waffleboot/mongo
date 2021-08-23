/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/shell/kms_gen.h --output build/opt/mongo/shell/kms_gen.cpp src/mongo/shell/kms.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/shell/kms_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {

/**
 * Enumeration of supported KMS Providers
 */
namespace  {
constexpr StringData kKMSProvider_aws = "aws"_sd;
constexpr StringData kKMSProvider_azure = "azure"_sd;
constexpr StringData kKMSProvider_gcp = "gcp"_sd;
constexpr StringData kKMSProvider_local = "local"_sd;
}  // namespace 

KMSProviderEnum KMSProvider_parse(const IDLParserErrorContext& ctxt, StringData value) {
    if (value == kKMSProvider_aws) {
        return KMSProviderEnum::aws;
    }
    if (value == kKMSProvider_azure) {
        return KMSProviderEnum::azure;
    }
    if (value == kKMSProvider_gcp) {
        return KMSProviderEnum::gcp;
    }
    if (value == kKMSProvider_local) {
        return KMSProviderEnum::local;
    }
    ctxt.throwBadEnumValue(value);
}

StringData KMSProvider_serializer(KMSProviderEnum value) {
    if (value == KMSProviderEnum::aws) {
        return kKMSProvider_aws;
    }
    if (value == KMSProviderEnum::azure) {
        return kKMSProvider_azure;
    }
    if (value == KMSProviderEnum::gcp) {
        return kKMSProvider_gcp;
    }
    if (value == KMSProviderEnum::local) {
        return kKMSProvider_local;
    }
    MONGO_UNREACHABLE;
    return StringData();
}

constexpr StringData AwsKMSError::kMessageFieldName;
constexpr StringData AwsKMSError::kTypeFieldName;


AwsKMSError::AwsKMSError() : _type(mongo::idl::preparsedValue<decltype(_type)>()), _message(mongo::idl::preparsedValue<decltype(_message)>()), _hasType(false), _hasMessage(false) {
    // Used for initialization only
}
AwsKMSError::AwsKMSError(std::string type, std::string message) : _type(std::move(type)), _message(std::move(message)), _hasType(true), _hasMessage(true) {
    // Used for initialization only
}


AwsKMSError AwsKMSError::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AwsKMSError>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AwsKMSError::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kTypeBit = 0;
    const size_t kMessageBit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kTypeFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kTypeBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kTypeBit);

                _hasType = true;
                _type = element.str();
            }
        }
        else if (fieldName == kMessageFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kMessageBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMessageBit);

                _hasMessage = true;
                _message = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kTypeBit]) {
            ctxt.throwMissingField(kTypeFieldName);
        }
        if (!usedFields[kMessageBit]) {
            ctxt.throwMissingField(kMessageFieldName);
        }
    }

}


void AwsKMSError::serialize(BSONObjBuilder* builder) const {
    invariant(_hasType && _hasMessage);

    builder->append(kTypeFieldName, _type);

    builder->append(kMessageFieldName, _message);

}


BSONObj AwsKMSError::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AwsKMS::kAccessKeyIdFieldName;
constexpr StringData AwsKMS::kSecretAccessKeyFieldName;
constexpr StringData AwsKMS::kSessionTokenFieldName;
constexpr StringData AwsKMS::kUrlFieldName;


AwsKMS::AwsKMS() : _accessKeyId(mongo::idl::preparsedValue<decltype(_accessKeyId)>()), _secretAccessKey(mongo::idl::preparsedValue<decltype(_secretAccessKey)>()), _hasAccessKeyId(false), _hasSecretAccessKey(false) {
    // Used for initialization only
}
AwsKMS::AwsKMS(std::string accessKeyId, std::string secretAccessKey) : _accessKeyId(std::move(accessKeyId)), _secretAccessKey(std::move(secretAccessKey)), _hasAccessKeyId(true), _hasSecretAccessKey(true) {
    // Used for initialization only
}


AwsKMS AwsKMS::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AwsKMS>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AwsKMS::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kAccessKeyIdBit = 0;
    const size_t kSecretAccessKeyBit = 1;
    const size_t kSessionTokenBit = 2;
    const size_t kUrlBit = 3;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kAccessKeyIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kAccessKeyIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kAccessKeyIdBit);

                _hasAccessKeyId = true;
                _accessKeyId = element.str();
            }
        }
        else if (fieldName == kSecretAccessKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kSecretAccessKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kSecretAccessKeyBit);

                _hasSecretAccessKey = true;
                _secretAccessKey = element.str();
            }
        }
        else if (fieldName == kSessionTokenFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kSessionTokenBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kSessionTokenBit);

                _sessionToken = element.str();
            }
        }
        else if (fieldName == kUrlFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kUrlBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kUrlBit);

                _url = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kAccessKeyIdBit]) {
            ctxt.throwMissingField(kAccessKeyIdFieldName);
        }
        if (!usedFields[kSecretAccessKeyBit]) {
            ctxt.throwMissingField(kSecretAccessKeyFieldName);
        }
    }

}


void AwsKMS::serialize(BSONObjBuilder* builder) const {
    invariant(_hasAccessKeyId && _hasSecretAccessKey);

    builder->append(kAccessKeyIdFieldName, _accessKeyId);

    builder->append(kSecretAccessKeyFieldName, _secretAccessKey);

    if (_sessionToken.is_initialized()) {
        builder->append(kSessionTokenFieldName, _sessionToken.get());
    }

    if (_url.is_initialized()) {
        builder->append(kUrlFieldName, _url.get());
    }

}


BSONObj AwsKMS::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AzureKMSError::kCodeFieldName;
constexpr StringData AzureKMSError::kMessageFieldName;


AzureKMSError::AzureKMSError() : _code(mongo::idl::preparsedValue<decltype(_code)>()), _message(mongo::idl::preparsedValue<decltype(_message)>()), _hasCode(false), _hasMessage(false) {
    // Used for initialization only
}
AzureKMSError::AzureKMSError(std::string code, std::string message) : _code(std::move(code)), _message(std::move(message)), _hasCode(true), _hasMessage(true) {
    // Used for initialization only
}


AzureKMSError AzureKMSError::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AzureKMSError>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AzureKMSError::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kCodeBit = 0;
    const size_t kMessageBit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kCodeFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kCodeBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCodeBit);

                _hasCode = true;
                _code = element.str();
            }
        }
        else if (fieldName == kMessageFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kMessageBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMessageBit);

                _hasMessage = true;
                _message = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kCodeBit]) {
            ctxt.throwMissingField(kCodeFieldName);
        }
        if (!usedFields[kMessageBit]) {
            ctxt.throwMissingField(kMessageFieldName);
        }
    }

}


void AzureKMSError::serialize(BSONObjBuilder* builder) const {
    invariant(_hasCode && _hasMessage);

    builder->append(kCodeFieldName, _code);

    builder->append(kMessageFieldName, _message);

}


BSONObj AzureKMSError::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AzureKMS::kClientIdFieldName;
constexpr StringData AzureKMS::kClientSecretFieldName;
constexpr StringData AzureKMS::kIdentityPlatformEndpointFieldName;
constexpr StringData AzureKMS::kTenantIdFieldName;


AzureKMS::AzureKMS() : _tenantId(mongo::idl::preparsedValue<decltype(_tenantId)>()), _clientId(mongo::idl::preparsedValue<decltype(_clientId)>()), _clientSecret(mongo::idl::preparsedValue<decltype(_clientSecret)>()), _hasTenantId(false), _hasClientId(false), _hasClientSecret(false) {
    // Used for initialization only
}
AzureKMS::AzureKMS(std::string tenantId, std::string clientId, std::string clientSecret) : _tenantId(std::move(tenantId)), _clientId(std::move(clientId)), _clientSecret(std::move(clientSecret)), _hasTenantId(true), _hasClientId(true), _hasClientSecret(true) {
    // Used for initialization only
}


AzureKMS AzureKMS::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AzureKMS>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AzureKMS::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kTenantIdBit = 0;
    const size_t kClientIdBit = 1;
    const size_t kClientSecretBit = 2;
    const size_t kIdentityPlatformEndpointBit = 3;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kTenantIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kTenantIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kTenantIdBit);

                _hasTenantId = true;
                _tenantId = element.str();
            }
        }
        else if (fieldName == kClientIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kClientIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kClientIdBit);

                _hasClientId = true;
                _clientId = element.str();
            }
        }
        else if (fieldName == kClientSecretFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kClientSecretBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kClientSecretBit);

                _hasClientSecret = true;
                _clientSecret = element.str();
            }
        }
        else if (fieldName == kIdentityPlatformEndpointFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kIdentityPlatformEndpointBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIdentityPlatformEndpointBit);

                _identityPlatformEndpoint = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kTenantIdBit]) {
            ctxt.throwMissingField(kTenantIdFieldName);
        }
        if (!usedFields[kClientIdBit]) {
            ctxt.throwMissingField(kClientIdFieldName);
        }
        if (!usedFields[kClientSecretBit]) {
            ctxt.throwMissingField(kClientSecretFieldName);
        }
    }

}


void AzureKMS::serialize(BSONObjBuilder* builder) const {
    invariant(_hasTenantId && _hasClientId && _hasClientSecret);

    builder->append(kTenantIdFieldName, _tenantId);

    builder->append(kClientIdFieldName, _clientId);

    builder->append(kClientSecretFieldName, _clientSecret);

    if (_identityPlatformEndpoint.is_initialized()) {
        builder->append(kIdentityPlatformEndpointFieldName, _identityPlatformEndpoint.get());
    }

}


BSONObj AzureKMS::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData GcpKMSError::kCodeFieldName;
constexpr StringData GcpKMSError::kMessageFieldName;
constexpr StringData GcpKMSError::kStatusFieldName;


GcpKMSError::GcpKMSError() : _code(mongo::idl::preparsedValue<decltype(_code)>()), _message(mongo::idl::preparsedValue<decltype(_message)>()), _status(mongo::idl::preparsedValue<decltype(_status)>()), _hasCode(false), _hasMessage(false), _hasStatus(false) {
    // Used for initialization only
}
GcpKMSError::GcpKMSError(std::int32_t code, std::string message, std::string status) : _code(std::move(code)), _message(std::move(message)), _status(std::move(status)), _hasCode(true), _hasMessage(true), _hasStatus(true) {
    // Used for initialization only
}


GcpKMSError GcpKMSError::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<GcpKMSError>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void GcpKMSError::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kCodeBit = 0;
    const size_t kMessageBit = 1;
    const size_t kStatusBit = 2;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kCodeFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kCodeBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCodeBit);

                _hasCode = true;
                _code = element._numberInt();
            }
        }
        else if (fieldName == kMessageFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kMessageBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMessageBit);

                _hasMessage = true;
                _message = element.str();
            }
        }
        else if (fieldName == kStatusFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kStatusBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStatusBit);

                _hasStatus = true;
                _status = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kCodeBit]) {
            ctxt.throwMissingField(kCodeFieldName);
        }
        if (!usedFields[kMessageBit]) {
            ctxt.throwMissingField(kMessageFieldName);
        }
        if (!usedFields[kStatusBit]) {
            ctxt.throwMissingField(kStatusFieldName);
        }
    }

}


void GcpKMSError::serialize(BSONObjBuilder* builder) const {
    invariant(_hasCode && _hasMessage && _hasStatus);

    builder->append(kCodeFieldName, _code);

    builder->append(kMessageFieldName, _message);

    builder->append(kStatusFieldName, _status);

}


BSONObj GcpKMSError::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData GcpKMS::kEmailFieldName;
constexpr StringData GcpKMS::kEndpointFieldName;
constexpr StringData GcpKMS::kPrivateKeyFieldName;


GcpKMS::GcpKMS() : _email(mongo::idl::preparsedValue<decltype(_email)>()), _privateKey(mongo::idl::preparsedValue<decltype(_privateKey)>()), _hasEmail(false), _hasPrivateKey(false) {
    // Used for initialization only
}
GcpKMS::GcpKMS(std::string email, std::string privateKey) : _email(std::move(email)), _privateKey(std::move(privateKey)), _hasEmail(true), _hasPrivateKey(true) {
    // Used for initialization only
}


GcpKMS GcpKMS::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<GcpKMS>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void GcpKMS::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kEmailBit = 0;
    const size_t kEndpointBit = 1;
    const size_t kPrivateKeyBit = 2;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kEmailFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kEmailBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEmailBit);

                _hasEmail = true;
                _email = element.str();
            }
        }
        else if (fieldName == kEndpointFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kEndpointBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEndpointBit);

                _endpoint = element.str();
            }
        }
        else if (fieldName == kPrivateKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kPrivateKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPrivateKeyBit);

                _hasPrivateKey = true;
                _privateKey = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kEmailBit]) {
            ctxt.throwMissingField(kEmailFieldName);
        }
        if (!usedFields[kPrivateKeyBit]) {
            ctxt.throwMissingField(kPrivateKeyFieldName);
        }
    }

}


void GcpKMS::serialize(BSONObjBuilder* builder) const {
    invariant(_hasEmail && _hasPrivateKey);

    builder->append(kEmailFieldName, _email);

    if (_endpoint.is_initialized()) {
        builder->append(kEndpointFieldName, _endpoint.get());
    }

    builder->append(kPrivateKeyFieldName, _privateKey);

}


BSONObj GcpKMS::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData LocalKMS::kKeyFieldName;


LocalKMS::LocalKMS() : _key(mongo::idl::preparsedValue<decltype(_key)>()), _hasKey(false) {
    // Used for initialization only
}
LocalKMS::LocalKMS(std::vector<std::uint8_t> key) : _key(std::move(key)), _hasKey(true) {
    // Used for initialization only
}


LocalKMS LocalKMS::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<LocalKMS>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void LocalKMS::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kKeyBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyBit);

                _hasKey = true;
                _key = element._binDataVector();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kKeyBit]) {
            ctxt.throwMissingField(kKeyFieldName);
        }
    }

}


void LocalKMS::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKey);

    {
        ConstDataRange tempCDR(_key);
        builder->append(kKeyFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

}


BSONObj LocalKMS::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData KmsProviders::kAwsFieldName;
constexpr StringData KmsProviders::kAzureFieldName;
constexpr StringData KmsProviders::kGcpFieldName;
constexpr StringData KmsProviders::kLocalFieldName;


KmsProviders::KmsProviders()  {
    // Used for initialization only
}


KmsProviders KmsProviders::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<KmsProviders>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void KmsProviders::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kAwsBit = 0;
    const size_t kAzureBit = 1;
    const size_t kGcpBit = 2;
    const size_t kLocalBit = 3;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kAwsFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kAwsBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kAwsBit);

                IDLParserErrorContext tempContext(kAwsFieldName, &ctxt);
                const auto localObject = element.Obj();
                _aws = mongo::AwsKMS::parse(tempContext, localObject);
            }
        }
        else if (fieldName == kAzureFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kAzureBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kAzureBit);

                IDLParserErrorContext tempContext(kAzureFieldName, &ctxt);
                const auto localObject = element.Obj();
                _azure = mongo::AzureKMS::parse(tempContext, localObject);
            }
        }
        else if (fieldName == kGcpFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kGcpBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kGcpBit);

                IDLParserErrorContext tempContext(kGcpFieldName, &ctxt);
                const auto localObject = element.Obj();
                _gcp = mongo::GcpKMS::parse(tempContext, localObject);
            }
        }
        else if (fieldName == kLocalFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kLocalBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kLocalBit);

                IDLParserErrorContext tempContext(kLocalFieldName, &ctxt);
                const auto localObject = element.Obj();
                _local = mongo::LocalKMS::parse(tempContext, localObject);
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
    }

}


void KmsProviders::serialize(BSONObjBuilder* builder) const {
    if (_aws.is_initialized()) {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kAwsFieldName));
        _aws.get().serialize(&subObjBuilder);
    }

    if (_azure.is_initialized()) {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kAzureFieldName));
        _azure.get().serialize(&subObjBuilder);
    }

    if (_gcp.is_initialized()) {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kGcpFieldName));
        _gcp.get().serialize(&subObjBuilder);
    }

    if (_local.is_initialized()) {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kLocalFieldName));
        _local.get().serialize(&subObjBuilder);
    }

}


BSONObj KmsProviders::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData ClientSideFLEOptions::kBypassAutoEncryptionFieldName;
constexpr StringData ClientSideFLEOptions::kKeyVaultClientFieldName;
constexpr StringData ClientSideFLEOptions::kKeyVaultNamespaceFieldName;
constexpr StringData ClientSideFLEOptions::kKmsProvidersFieldName;
constexpr StringData ClientSideFLEOptions::kSchemaMapFieldName;


ClientSideFLEOptions::ClientSideFLEOptions() : _keyVaultNamespace(mongo::idl::preparsedValue<decltype(_keyVaultNamespace)>()), _kmsProviders(mongo::idl::preparsedValue<decltype(_kmsProviders)>()), _hasKeyVaultNamespace(false), _hasKmsProviders(false) {
    // Used for initialization only
}
ClientSideFLEOptions::ClientSideFLEOptions(std::string keyVaultNamespace, mongo::KmsProviders kmsProviders) : _keyVaultNamespace(std::move(keyVaultNamespace)), _kmsProviders(std::move(kmsProviders)), _hasKeyVaultNamespace(true), _hasKmsProviders(true) {
    // Used for initialization only
}


ClientSideFLEOptions ClientSideFLEOptions::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<ClientSideFLEOptions>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void ClientSideFLEOptions::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<5> usedFields;
    const size_t kKeyVaultClientBit = 0;
    const size_t kKeyVaultNamespaceBit = 1;
    const size_t kKmsProvidersBit = 2;
    const size_t kSchemaMapBit = 3;
    const size_t kBypassAutoEncryptionBit = 4;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kKeyVaultClientFieldName) {
            if (MONGO_unlikely(usedFields[kKeyVaultClientBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kKeyVaultClientBit);

            // ignore field
        }
        else if (fieldName == kKeyVaultNamespaceFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyVaultNamespaceBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyVaultNamespaceBit);

                _hasKeyVaultNamespace = true;
                _keyVaultNamespace = element.str();
            }
        }
        else if (fieldName == kKmsProvidersFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kKmsProvidersBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKmsProvidersBit);

                _hasKmsProviders = true;
                IDLParserErrorContext tempContext(kKmsProvidersFieldName, &ctxt);
                const auto localObject = element.Obj();
                _kmsProviders = mongo::KmsProviders::parse(tempContext, localObject);
            }
        }
        else if (fieldName == kSchemaMapFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kSchemaMapBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kSchemaMapBit);

                _schemaMap = element.Obj();
            }
        }
        else if (fieldName == kBypassAutoEncryptionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kBypassAutoEncryptionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kBypassAutoEncryptionBit);

                _bypassAutoEncryption = element.boolean();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kKeyVaultNamespaceBit]) {
            ctxt.throwMissingField(kKeyVaultNamespaceFieldName);
        }
        if (!usedFields[kKmsProvidersBit]) {
            ctxt.throwMissingField(kKmsProvidersFieldName);
        }
    }

}


void ClientSideFLEOptions::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKeyVaultNamespace && _hasKmsProviders);

    builder->append(kKeyVaultNamespaceFieldName, _keyVaultNamespace);

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kKmsProvidersFieldName));
        _kmsProviders.serialize(&subObjBuilder);
    }

    if (_schemaMap.is_initialized()) {
        builder->append(kSchemaMapFieldName, _schemaMap.get());
    }

    if (_bypassAutoEncryption.is_initialized()) {
        builder->append(kBypassAutoEncryptionFieldName, _bypassAutoEncryption.get());
    }

}


BSONObj ClientSideFLEOptions::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AwsEncryptResponse::kCiphertextBlobFieldName;
constexpr StringData AwsEncryptResponse::kKeyIdFieldName;


AwsEncryptResponse::AwsEncryptResponse() : _ciphertextBlob(mongo::idl::preparsedValue<decltype(_ciphertextBlob)>()), _keyId(mongo::idl::preparsedValue<decltype(_keyId)>()), _hasCiphertextBlob(false), _hasKeyId(false) {
    // Used for initialization only
}
AwsEncryptResponse::AwsEncryptResponse(std::string ciphertextBlob, std::string keyId) : _ciphertextBlob(std::move(ciphertextBlob)), _keyId(std::move(keyId)), _hasCiphertextBlob(true), _hasKeyId(true) {
    // Used for initialization only
}


AwsEncryptResponse AwsEncryptResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AwsEncryptResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AwsEncryptResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kCiphertextBlobBit = 0;
    const size_t kKeyIdBit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kCiphertextBlobFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kCiphertextBlobBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCiphertextBlobBit);

                _hasCiphertextBlob = true;
                _ciphertextBlob = element.str();
            }
        }
        else if (fieldName == kKeyIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyIdBit);

                _hasKeyId = true;
                _keyId = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kCiphertextBlobBit]) {
            ctxt.throwMissingField(kCiphertextBlobFieldName);
        }
        if (!usedFields[kKeyIdBit]) {
            ctxt.throwMissingField(kKeyIdFieldName);
        }
    }

}


void AwsEncryptResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasCiphertextBlob && _hasKeyId);

    builder->append(kCiphertextBlobFieldName, _ciphertextBlob);

    builder->append(kKeyIdFieldName, _keyId);

}


BSONObj AwsEncryptResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AwsDecryptResponse::kKeyIdFieldName;
constexpr StringData AwsDecryptResponse::kPlaintextFieldName;


AwsDecryptResponse::AwsDecryptResponse() : _plaintext(mongo::idl::preparsedValue<decltype(_plaintext)>()), _keyId(mongo::idl::preparsedValue<decltype(_keyId)>()), _hasPlaintext(false), _hasKeyId(false) {
    // Used for initialization only
}
AwsDecryptResponse::AwsDecryptResponse(std::string plaintext, std::string keyId) : _plaintext(std::move(plaintext)), _keyId(std::move(keyId)), _hasPlaintext(true), _hasKeyId(true) {
    // Used for initialization only
}


AwsDecryptResponse AwsDecryptResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AwsDecryptResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AwsDecryptResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kPlaintextBit = 0;
    const size_t kKeyIdBit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kPlaintextFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kPlaintextBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPlaintextBit);

                _hasPlaintext = true;
                _plaintext = element.str();
            }
        }
        else if (fieldName == kKeyIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyIdBit);

                _hasKeyId = true;
                _keyId = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kPlaintextBit]) {
            ctxt.throwMissingField(kPlaintextFieldName);
        }
        if (!usedFields[kKeyIdBit]) {
            ctxt.throwMissingField(kKeyIdFieldName);
        }
    }

}


void AwsDecryptResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasPlaintext && _hasKeyId);

    builder->append(kPlaintextFieldName, _plaintext);

    builder->append(kKeyIdFieldName, _keyId);

}


BSONObj AwsDecryptResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AwsMasterKey::kEndpointFieldName;
constexpr StringData AwsMasterKey::kKeyFieldName;
constexpr StringData AwsMasterKey::kProviderFieldName;
constexpr StringData AwsMasterKey::kRegionFieldName;


AwsMasterKey::AwsMasterKey() : _key(mongo::idl::preparsedValue<decltype(_key)>()), _region(mongo::idl::preparsedValue<decltype(_region)>()), _hasKey(false), _hasRegion(false) {
    // Used for initialization only
}
AwsMasterKey::AwsMasterKey(std::string key, std::string region) : _key(std::move(key)), _region(std::move(region)), _hasKey(true), _hasRegion(true) {
    // Used for initialization only
}


AwsMasterKey AwsMasterKey::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AwsMasterKey>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AwsMasterKey::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kProviderBit = 0;
    const size_t kKeyBit = 1;
    const size_t kRegionBit = 2;
    const size_t kEndpointBit = 3;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kProviderFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kProviderBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kProviderBit);

                _provider = element.str();
            }
        }
        else if (fieldName == kKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyBit);

                _hasKey = true;
                _key = element.str();
            }
        }
        else if (fieldName == kRegionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kRegionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kRegionBit);

                _hasRegion = true;
                _region = element.str();
            }
        }
        else if (fieldName == kEndpointFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kEndpointBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEndpointBit);

                _endpoint = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kProviderBit]) {
            _provider = "aws";
        }
        if (!usedFields[kKeyBit]) {
            ctxt.throwMissingField(kKeyFieldName);
        }
        if (!usedFields[kRegionBit]) {
            ctxt.throwMissingField(kRegionFieldName);
        }
    }

}


void AwsMasterKey::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKey && _hasRegion);

    builder->append(kProviderFieldName, _provider);

    builder->append(kKeyFieldName, _key);

    builder->append(kRegionFieldName, _region);

    if (_endpoint.is_initialized()) {
        builder->append(kEndpointFieldName, _endpoint.get());
    }

}


BSONObj AwsMasterKey::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AwsMasterKeyAndMaterial::kKeyMaterialFieldName;
constexpr StringData AwsMasterKeyAndMaterial::kMasterKeyFieldName;


AwsMasterKeyAndMaterial::AwsMasterKeyAndMaterial() : _keyMaterial(mongo::idl::preparsedValue<decltype(_keyMaterial)>()), _masterKey(mongo::idl::preparsedValue<decltype(_masterKey)>()), _hasKeyMaterial(false), _hasMasterKey(false) {
    // Used for initialization only
}
AwsMasterKeyAndMaterial::AwsMasterKeyAndMaterial(std::vector<std::uint8_t> keyMaterial, mongo::AwsMasterKey masterKey) : _keyMaterial(std::move(keyMaterial)), _masterKey(std::move(masterKey)), _hasKeyMaterial(true), _hasMasterKey(true) {
    // Used for initialization only
}


AwsMasterKeyAndMaterial AwsMasterKeyAndMaterial::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AwsMasterKeyAndMaterial>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AwsMasterKeyAndMaterial::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kKeyMaterialBit = 0;
    const size_t kMasterKeyBit = 1;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kKeyMaterialFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kKeyMaterialBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyMaterialBit);

                _hasKeyMaterial = true;
                _keyMaterial = element._binDataVector();
            }
        }
        else if (fieldName == kMasterKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kMasterKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMasterKeyBit);

                _hasMasterKey = true;
                IDLParserErrorContext tempContext(kMasterKeyFieldName, &ctxt);
                const auto localObject = element.Obj();
                _masterKey = mongo::AwsMasterKey::parse(tempContext, localObject);
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kKeyMaterialBit]) {
            ctxt.throwMissingField(kKeyMaterialFieldName);
        }
        if (!usedFields[kMasterKeyBit]) {
            ctxt.throwMissingField(kMasterKeyFieldName);
        }
    }

}


void AwsMasterKeyAndMaterial::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKeyMaterial && _hasMasterKey);

    {
        ConstDataRange tempCDR(_keyMaterial);
        builder->append(kKeyMaterialFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kMasterKeyFieldName));
        _masterKey.serialize(&subObjBuilder);
    }

}


BSONObj AwsMasterKeyAndMaterial::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AzureEncryptResponse::kKidFieldName;
constexpr StringData AzureEncryptResponse::kValueFieldName;


AzureEncryptResponse::AzureEncryptResponse() : _kid(mongo::idl::preparsedValue<decltype(_kid)>()), _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasKid(false), _hasValue(false) {
    // Used for initialization only
}
AzureEncryptResponse::AzureEncryptResponse(std::string kid, std::string value) : _kid(std::move(kid)), _value(std::move(value)), _hasKid(true), _hasValue(true) {
    // Used for initialization only
}


AzureEncryptResponse AzureEncryptResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AzureEncryptResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AzureEncryptResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kKidBit = 0;
    const size_t kValueBit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kKidFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKidBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKidBit);

                _hasKid = true;
                _kid = element.str();
            }
        }
        else if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kKidBit]) {
            ctxt.throwMissingField(kKidFieldName);
        }
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void AzureEncryptResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKid && _hasValue);

    builder->append(kKidFieldName, _kid);

    builder->append(kValueFieldName, _value);

}


BSONObj AzureEncryptResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AzureDecryptResponse::kKidFieldName;
constexpr StringData AzureDecryptResponse::kValueFieldName;


AzureDecryptResponse::AzureDecryptResponse() : _kid(mongo::idl::preparsedValue<decltype(_kid)>()), _value(mongo::idl::preparsedValue<decltype(_value)>()), _hasKid(false), _hasValue(false) {
    // Used for initialization only
}
AzureDecryptResponse::AzureDecryptResponse(std::string kid, std::string value) : _kid(std::move(kid)), _value(std::move(value)), _hasKid(true), _hasValue(true) {
    // Used for initialization only
}


AzureDecryptResponse AzureDecryptResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AzureDecryptResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AzureDecryptResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kKidBit = 0;
    const size_t kValueBit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kKidFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKidBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKidBit);

                _hasKid = true;
                _kid = element.str();
            }
        }
        else if (fieldName == kValueFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kValueBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kValueBit);

                _hasValue = true;
                _value = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kKidBit]) {
            ctxt.throwMissingField(kKidFieldName);
        }
        if (!usedFields[kValueBit]) {
            ctxt.throwMissingField(kValueFieldName);
        }
    }

}


void AzureDecryptResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKid && _hasValue);

    builder->append(kKidFieldName, _kid);

    builder->append(kValueFieldName, _value);

}


BSONObj AzureDecryptResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AzureMasterKey::kKeyNameFieldName;
constexpr StringData AzureMasterKey::kKeyVaultEndpointFieldName;
constexpr StringData AzureMasterKey::kKeyVersionFieldName;
constexpr StringData AzureMasterKey::kProviderFieldName;


AzureMasterKey::AzureMasterKey() : _keyName(mongo::idl::preparsedValue<decltype(_keyName)>()), _keyVaultEndpoint(mongo::idl::preparsedValue<decltype(_keyVaultEndpoint)>()), _hasKeyName(false), _hasKeyVaultEndpoint(false) {
    // Used for initialization only
}
AzureMasterKey::AzureMasterKey(std::string keyName, std::string keyVaultEndpoint) : _keyName(std::move(keyName)), _keyVaultEndpoint(std::move(keyVaultEndpoint)), _hasKeyName(true), _hasKeyVaultEndpoint(true) {
    // Used for initialization only
}


AzureMasterKey AzureMasterKey::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AzureMasterKey>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AzureMasterKey::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kProviderBit = 0;
    const size_t kKeyNameBit = 1;
    const size_t kKeyVersionBit = 2;
    const size_t kKeyVaultEndpointBit = 3;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kProviderFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kProviderBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kProviderBit);

                _provider = element.str();
            }
        }
        else if (fieldName == kKeyNameFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyNameBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyNameBit);

                _hasKeyName = true;
                _keyName = element.str();
            }
        }
        else if (fieldName == kKeyVersionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyVersionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyVersionBit);

                _keyVersion = element.str();
            }
        }
        else if (fieldName == kKeyVaultEndpointFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyVaultEndpointBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyVaultEndpointBit);

                _hasKeyVaultEndpoint = true;
                _keyVaultEndpoint = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kProviderBit]) {
            _provider = "azure";
        }
        if (!usedFields[kKeyNameBit]) {
            ctxt.throwMissingField(kKeyNameFieldName);
        }
        if (!usedFields[kKeyVaultEndpointBit]) {
            ctxt.throwMissingField(kKeyVaultEndpointFieldName);
        }
    }

}


void AzureMasterKey::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKeyName && _hasKeyVaultEndpoint);

    builder->append(kProviderFieldName, _provider);

    builder->append(kKeyNameFieldName, _keyName);

    if (_keyVersion.is_initialized()) {
        builder->append(kKeyVersionFieldName, _keyVersion.get());
    }

    builder->append(kKeyVaultEndpointFieldName, _keyVaultEndpoint);

}


BSONObj AzureMasterKey::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData AzureMasterKeyAndMaterial::kKeyMaterialFieldName;
constexpr StringData AzureMasterKeyAndMaterial::kMasterKeyFieldName;


AzureMasterKeyAndMaterial::AzureMasterKeyAndMaterial() : _keyMaterial(mongo::idl::preparsedValue<decltype(_keyMaterial)>()), _masterKey(mongo::idl::preparsedValue<decltype(_masterKey)>()), _hasKeyMaterial(false), _hasMasterKey(false) {
    // Used for initialization only
}
AzureMasterKeyAndMaterial::AzureMasterKeyAndMaterial(std::vector<std::uint8_t> keyMaterial, mongo::AzureMasterKey masterKey) : _keyMaterial(std::move(keyMaterial)), _masterKey(std::move(masterKey)), _hasKeyMaterial(true), _hasMasterKey(true) {
    // Used for initialization only
}


AzureMasterKeyAndMaterial AzureMasterKeyAndMaterial::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<AzureMasterKeyAndMaterial>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void AzureMasterKeyAndMaterial::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kKeyMaterialBit = 0;
    const size_t kMasterKeyBit = 1;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kKeyMaterialFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kKeyMaterialBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyMaterialBit);

                _hasKeyMaterial = true;
                _keyMaterial = element._binDataVector();
            }
        }
        else if (fieldName == kMasterKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kMasterKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMasterKeyBit);

                _hasMasterKey = true;
                IDLParserErrorContext tempContext(kMasterKeyFieldName, &ctxt);
                const auto localObject = element.Obj();
                _masterKey = mongo::AzureMasterKey::parse(tempContext, localObject);
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kKeyMaterialBit]) {
            ctxt.throwMissingField(kKeyMaterialFieldName);
        }
        if (!usedFields[kMasterKeyBit]) {
            ctxt.throwMissingField(kMasterKeyFieldName);
        }
    }

}


void AzureMasterKeyAndMaterial::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKeyMaterial && _hasMasterKey);

    {
        ConstDataRange tempCDR(_keyMaterial);
        builder->append(kKeyMaterialFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kMasterKeyFieldName));
        _masterKey.serialize(&subObjBuilder);
    }

}


BSONObj AzureMasterKeyAndMaterial::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData GcpEncryptResponse::kCiphertextFieldName;
constexpr StringData GcpEncryptResponse::kNameFieldName;


GcpEncryptResponse::GcpEncryptResponse() : _name(mongo::idl::preparsedValue<decltype(_name)>()), _ciphertext(mongo::idl::preparsedValue<decltype(_ciphertext)>()), _hasName(false), _hasCiphertext(false) {
    // Used for initialization only
}
GcpEncryptResponse::GcpEncryptResponse(std::string name, std::string ciphertext) : _name(std::move(name)), _ciphertext(std::move(ciphertext)), _hasName(true), _hasCiphertext(true) {
    // Used for initialization only
}


GcpEncryptResponse GcpEncryptResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<GcpEncryptResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void GcpEncryptResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kNameBit = 0;
    const size_t kCiphertextBit = 1;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kNameFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kNameBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kNameBit);

                _hasName = true;
                _name = element.str();
            }
        }
        else if (fieldName == kCiphertextFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kCiphertextBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCiphertextBit);

                _hasCiphertext = true;
                _ciphertext = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kNameBit]) {
            ctxt.throwMissingField(kNameFieldName);
        }
        if (!usedFields[kCiphertextBit]) {
            ctxt.throwMissingField(kCiphertextFieldName);
        }
    }

}


void GcpEncryptResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasName && _hasCiphertext);

    builder->append(kNameFieldName, _name);

    builder->append(kCiphertextFieldName, _ciphertext);

}


BSONObj GcpEncryptResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData GcpDecryptResponse::kPlaintextFieldName;


GcpDecryptResponse::GcpDecryptResponse() : _plaintext(mongo::idl::preparsedValue<decltype(_plaintext)>()), _hasPlaintext(false) {
    // Used for initialization only
}
GcpDecryptResponse::GcpDecryptResponse(std::string plaintext) : _plaintext(std::move(plaintext)), _hasPlaintext(true) {
    // Used for initialization only
}


GcpDecryptResponse GcpDecryptResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<GcpDecryptResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void GcpDecryptResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kPlaintextBit = 0;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kPlaintextFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kPlaintextBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kPlaintextBit);

                _hasPlaintext = true;
                _plaintext = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kPlaintextBit]) {
            ctxt.throwMissingField(kPlaintextFieldName);
        }
    }

}


void GcpDecryptResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasPlaintext);

    builder->append(kPlaintextFieldName, _plaintext);

}


BSONObj GcpDecryptResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData GcpMasterKey::kEndpointFieldName;
constexpr StringData GcpMasterKey::kKeyNameFieldName;
constexpr StringData GcpMasterKey::kKeyRingFieldName;
constexpr StringData GcpMasterKey::kKeyVersionFieldName;
constexpr StringData GcpMasterKey::kLocationFieldName;
constexpr StringData GcpMasterKey::kProjectIdFieldName;
constexpr StringData GcpMasterKey::kProviderFieldName;


GcpMasterKey::GcpMasterKey() : _keyName(mongo::idl::preparsedValue<decltype(_keyName)>()), _keyRing(mongo::idl::preparsedValue<decltype(_keyRing)>()), _location(mongo::idl::preparsedValue<decltype(_location)>()), _projectId(mongo::idl::preparsedValue<decltype(_projectId)>()), _hasKeyName(false), _hasKeyRing(false), _hasLocation(false), _hasProjectId(false) {
    // Used for initialization only
}
GcpMasterKey::GcpMasterKey(std::string keyName, std::string keyRing, std::string location, std::string projectId) : _keyName(std::move(keyName)), _keyRing(std::move(keyRing)), _location(std::move(location)), _projectId(std::move(projectId)), _hasKeyName(true), _hasKeyRing(true), _hasLocation(true), _hasProjectId(true) {
    // Used for initialization only
}


GcpMasterKey GcpMasterKey::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<GcpMasterKey>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void GcpMasterKey::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<7> usedFields;
    const size_t kProviderBit = 0;
    const size_t kKeyNameBit = 1;
    const size_t kKeyRingBit = 2;
    const size_t kKeyVersionBit = 3;
    const size_t kLocationBit = 4;
    const size_t kProjectIdBit = 5;
    const size_t kEndpointBit = 6;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kProviderFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kProviderBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kProviderBit);

                _provider = element.str();
            }
        }
        else if (fieldName == kKeyNameFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyNameBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyNameBit);

                _hasKeyName = true;
                _keyName = element.str();
            }
        }
        else if (fieldName == kKeyRingFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyRingBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyRingBit);

                _hasKeyRing = true;
                _keyRing = element.str();
            }
        }
        else if (fieldName == kKeyVersionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kKeyVersionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyVersionBit);

                _keyVersion = element.str();
            }
        }
        else if (fieldName == kLocationFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kLocationBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kLocationBit);

                _hasLocation = true;
                _location = element.str();
            }
        }
        else if (fieldName == kProjectIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kProjectIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kProjectIdBit);

                _hasProjectId = true;
                _projectId = element.str();
            }
        }
        else if (fieldName == kEndpointFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kEndpointBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kEndpointBit);

                _endpoint = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kProviderBit]) {
            _provider = "gcp";
        }
        if (!usedFields[kKeyNameBit]) {
            ctxt.throwMissingField(kKeyNameFieldName);
        }
        if (!usedFields[kKeyRingBit]) {
            ctxt.throwMissingField(kKeyRingFieldName);
        }
        if (!usedFields[kLocationBit]) {
            ctxt.throwMissingField(kLocationFieldName);
        }
        if (!usedFields[kProjectIdBit]) {
            ctxt.throwMissingField(kProjectIdFieldName);
        }
    }

}


void GcpMasterKey::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKeyName && _hasKeyRing && _hasLocation && _hasProjectId);

    builder->append(kProviderFieldName, _provider);

    builder->append(kKeyNameFieldName, _keyName);

    builder->append(kKeyRingFieldName, _keyRing);

    if (_keyVersion.is_initialized()) {
        builder->append(kKeyVersionFieldName, _keyVersion.get());
    }

    builder->append(kLocationFieldName, _location);

    builder->append(kProjectIdFieldName, _projectId);

    if (_endpoint.is_initialized()) {
        builder->append(kEndpointFieldName, _endpoint.get());
    }

}


BSONObj GcpMasterKey::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData GcpMasterKeyAndMaterial::kKeyMaterialFieldName;
constexpr StringData GcpMasterKeyAndMaterial::kMasterKeyFieldName;


GcpMasterKeyAndMaterial::GcpMasterKeyAndMaterial() : _keyMaterial(mongo::idl::preparsedValue<decltype(_keyMaterial)>()), _masterKey(mongo::idl::preparsedValue<decltype(_masterKey)>()), _hasKeyMaterial(false), _hasMasterKey(false) {
    // Used for initialization only
}
GcpMasterKeyAndMaterial::GcpMasterKeyAndMaterial(std::vector<std::uint8_t> keyMaterial, mongo::GcpMasterKey masterKey) : _keyMaterial(std::move(keyMaterial)), _masterKey(std::move(masterKey)), _hasKeyMaterial(true), _hasMasterKey(true) {
    // Used for initialization only
}


GcpMasterKeyAndMaterial GcpMasterKeyAndMaterial::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<GcpMasterKeyAndMaterial>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void GcpMasterKeyAndMaterial::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kKeyMaterialBit = 0;
    const size_t kMasterKeyBit = 1;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kKeyMaterialFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kKeyMaterialBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyMaterialBit);

                _hasKeyMaterial = true;
                _keyMaterial = element._binDataVector();
            }
        }
        else if (fieldName == kMasterKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kMasterKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMasterKeyBit);

                _hasMasterKey = true;
                IDLParserErrorContext tempContext(kMasterKeyFieldName, &ctxt);
                const auto localObject = element.Obj();
                _masterKey = mongo::GcpMasterKey::parse(tempContext, localObject);
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kKeyMaterialBit]) {
            ctxt.throwMissingField(kKeyMaterialFieldName);
        }
        if (!usedFields[kMasterKeyBit]) {
            ctxt.throwMissingField(kMasterKeyFieldName);
        }
    }

}


void GcpMasterKeyAndMaterial::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKeyMaterial && _hasMasterKey);

    {
        ConstDataRange tempCDR(_keyMaterial);
        builder->append(kKeyMaterialFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kMasterKeyFieldName));
        _masterKey.serialize(&subObjBuilder);
    }

}


BSONObj GcpMasterKeyAndMaterial::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData LocalMasterKey::kProviderFieldName;


LocalMasterKey::LocalMasterKey()  {
    // Used for initialization only
}


LocalMasterKey LocalMasterKey::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<LocalMasterKey>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void LocalMasterKey::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<1> usedFields;
    const size_t kProviderBit = 0;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kProviderFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kProviderBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kProviderBit);

                _provider = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kProviderBit]) {
            _provider = "local";
        }
    }

}


void LocalMasterKey::serialize(BSONObjBuilder* builder) const {
    builder->append(kProviderFieldName, _provider);

}


BSONObj LocalMasterKey::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData LocalMasterKeyAndMaterial::kKeyMaterialFieldName;
constexpr StringData LocalMasterKeyAndMaterial::kMasterKeyFieldName;


LocalMasterKeyAndMaterial::LocalMasterKeyAndMaterial() : _keyMaterial(mongo::idl::preparsedValue<decltype(_keyMaterial)>()), _masterKey(mongo::idl::preparsedValue<decltype(_masterKey)>()), _hasKeyMaterial(false), _hasMasterKey(false) {
    // Used for initialization only
}
LocalMasterKeyAndMaterial::LocalMasterKeyAndMaterial(std::vector<std::uint8_t> keyMaterial, mongo::LocalMasterKey masterKey) : _keyMaterial(std::move(keyMaterial)), _masterKey(std::move(masterKey)), _hasKeyMaterial(true), _hasMasterKey(true) {
    // Used for initialization only
}


LocalMasterKeyAndMaterial LocalMasterKeyAndMaterial::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<LocalMasterKeyAndMaterial>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void LocalMasterKeyAndMaterial::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<2> usedFields;
    const size_t kKeyMaterialBit = 0;
    const size_t kMasterKeyBit = 1;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kKeyMaterialFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kKeyMaterialBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyMaterialBit);

                _hasKeyMaterial = true;
                _keyMaterial = element._binDataVector();
            }
        }
        else if (fieldName == kMasterKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kMasterKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMasterKeyBit);

                _hasMasterKey = true;
                IDLParserErrorContext tempContext(kMasterKeyFieldName, &ctxt);
                const auto localObject = element.Obj();
                _masterKey = mongo::LocalMasterKey::parse(tempContext, localObject);
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kKeyMaterialBit]) {
            ctxt.throwMissingField(kKeyMaterialFieldName);
        }
        if (!usedFields[kMasterKeyBit]) {
            ctxt.throwMissingField(kMasterKeyFieldName);
        }
    }

}


void LocalMasterKeyAndMaterial::serialize(BSONObjBuilder* builder) const {
    invariant(_hasKeyMaterial && _hasMasterKey);

    {
        ConstDataRange tempCDR(_keyMaterial);
        builder->append(kKeyMaterialFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

    {
        BSONObjBuilder subObjBuilder(builder->subobjStart(kMasterKeyFieldName));
        _masterKey.serialize(&subObjBuilder);
    }

}


BSONObj LocalMasterKeyAndMaterial::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData KeyStoreRecord::k_idFieldName;
constexpr StringData KeyStoreRecord::kCreationDateFieldName;
constexpr StringData KeyStoreRecord::kKeyAltNamesFieldName;
constexpr StringData KeyStoreRecord::kKeyMaterialFieldName;
constexpr StringData KeyStoreRecord::kMasterKeyFieldName;
constexpr StringData KeyStoreRecord::kStatusFieldName;
constexpr StringData KeyStoreRecord::kUpdateDateFieldName;
constexpr StringData KeyStoreRecord::kVersionFieldName;


KeyStoreRecord::KeyStoreRecord() : __id(mongo::idl::preparsedValue<decltype(__id)>()), _keyMaterial(mongo::idl::preparsedValue<decltype(_keyMaterial)>()), _creationDate(mongo::idl::preparsedValue<decltype(_creationDate)>()), _updateDate(mongo::idl::preparsedValue<decltype(_updateDate)>()), _status(mongo::idl::preparsedValue<decltype(_status)>()), _masterKey(mongo::idl::preparsedValue<decltype(_masterKey)>()), _has_id(false), _hasKeyMaterial(false), _hasCreationDate(false), _hasUpdateDate(false), _hasStatus(false), _hasMasterKey(false) {
    // Used for initialization only
}
KeyStoreRecord::KeyStoreRecord(mongo::UUID _id, std::vector<std::uint8_t> keyMaterial, mongo::Date_t creationDate, mongo::Date_t updateDate, std::int32_t status, mongo::BSONObj masterKey) : __id(std::move(_id)), _keyMaterial(std::move(keyMaterial)), _creationDate(std::move(creationDate)), _updateDate(std::move(updateDate)), _status(std::move(status)), _masterKey(std::move(masterKey)), _has_id(true), _hasKeyMaterial(true), _hasCreationDate(true), _hasUpdateDate(true), _hasStatus(true), _hasMasterKey(true) {
    // Used for initialization only
}


KeyStoreRecord KeyStoreRecord::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<KeyStoreRecord>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void KeyStoreRecord::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<8> usedFields;
    const size_t k_idBit = 0;
    const size_t kKeyMaterialBit = 1;
    const size_t kCreationDateBit = 2;
    const size_t kUpdateDateBit = 3;
    const size_t kStatusBit = 4;
    const size_t kVersionBit = 5;
    const size_t kMasterKeyBit = 6;
    const size_t kKeyAltNamesBit = 7;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == k_idFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, newUUID))) {
                if (MONGO_unlikely(usedFields[k_idBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(k_idBit);

                _has_id = true;
                __id = UUID(uassertStatusOK(UUID::parse(element)));
            }
        }
        else if (fieldName == kKeyMaterialFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertBinDataType(element, BinDataGeneral))) {
                if (MONGO_unlikely(usedFields[kKeyMaterialBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kKeyMaterialBit);

                _hasKeyMaterial = true;
                _keyMaterial = element._binDataVector();
            }
        }
        else if (fieldName == kCreationDateFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Date))) {
                if (MONGO_unlikely(usedFields[kCreationDateBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kCreationDateBit);

                _hasCreationDate = true;
                _creationDate = element.date();
            }
        }
        else if (fieldName == kUpdateDateFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Date))) {
                if (MONGO_unlikely(usedFields[kUpdateDateBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kUpdateDateBit);

                _hasUpdateDate = true;
                _updateDate = element.date();
            }
        }
        else if (fieldName == kStatusFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kStatusBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kStatusBit);

                _hasStatus = true;
                _status = element._numberInt();
            }
        }
        else if (fieldName == kVersionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberLong))) {
                if (MONGO_unlikely(usedFields[kVersionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kVersionBit);

                _version = element._numberLong();
            }
        }
        else if (fieldName == kMasterKeyFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kMasterKeyBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kMasterKeyBit);

                _hasMasterKey = true;
                _masterKey = element.Obj();
            }
        }
        else if (fieldName == kKeyAltNamesFieldName) {
            if (MONGO_unlikely(usedFields[kKeyAltNamesBit])) {
                ctxt.throwDuplicateField(element);
            }

            usedFields.set(kKeyAltNamesBit);

            // ignore field
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[k_idBit]) {
            ctxt.throwMissingField(k_idFieldName);
        }
        if (!usedFields[kKeyMaterialBit]) {
            ctxt.throwMissingField(kKeyMaterialFieldName);
        }
        if (!usedFields[kCreationDateBit]) {
            ctxt.throwMissingField(kCreationDateFieldName);
        }
        if (!usedFields[kUpdateDateBit]) {
            ctxt.throwMissingField(kUpdateDateFieldName);
        }
        if (!usedFields[kStatusBit]) {
            ctxt.throwMissingField(kStatusFieldName);
        }
        if (!usedFields[kVersionBit]) {
            _version = 0;
        }
        if (!usedFields[kMasterKeyBit]) {
            ctxt.throwMissingField(kMasterKeyFieldName);
        }
    }

}


void KeyStoreRecord::serialize(BSONObjBuilder* builder) const {
    invariant(_has_id && _hasKeyMaterial && _hasCreationDate && _hasUpdateDate && _hasStatus && _hasMasterKey);

    {
        ConstDataRange tempCDR = __id.toCDR();
        builder->append(k_idFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), newUUID));
    }

    {
        ConstDataRange tempCDR(_keyMaterial);
        builder->append(kKeyMaterialFieldName, BSONBinData(tempCDR.data(), tempCDR.length(), BinDataGeneral));
    }

    builder->append(kCreationDateFieldName, _creationDate);

    builder->append(kUpdateDateFieldName, _updateDate);

    builder->append(kStatusFieldName, _status);

    builder->append(kVersionFieldName, _version);

    builder->append(kMasterKeyFieldName, _masterKey);

}


BSONObj KeyStoreRecord::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData OAuthResponse::kAccess_tokenFieldName;
constexpr StringData OAuthResponse::kExpires_inFieldName;
constexpr StringData OAuthResponse::kScopeFieldName;
constexpr StringData OAuthResponse::kToken_typeFieldName;


OAuthResponse::OAuthResponse() : _access_token(mongo::idl::preparsedValue<decltype(_access_token)>()), _token_type(mongo::idl::preparsedValue<decltype(_token_type)>()), _hasAccess_token(false), _hasToken_type(false) {
    // Used for initialization only
}
OAuthResponse::OAuthResponse(std::string access_token, std::string token_type) : _access_token(std::move(access_token)), _token_type(std::move(token_type)), _hasAccess_token(true), _hasToken_type(true) {
    // Used for initialization only
}


OAuthResponse OAuthResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<OAuthResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void OAuthResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<4> usedFields;
    const size_t kAccess_tokenBit = 0;
    const size_t kToken_typeBit = 1;
    const size_t kExpires_inBit = 2;
    const size_t kScopeBit = 3;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kAccess_tokenFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kAccess_tokenBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kAccess_tokenBit);

                _hasAccess_token = true;
                _access_token = element.str();
            }
        }
        else if (fieldName == kToken_typeFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kToken_typeBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kToken_typeBit);

                _hasToken_type = true;
                _token_type = element.str();
            }
        }
        else if (fieldName == kExpires_inFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, NumberInt))) {
                if (MONGO_unlikely(usedFields[kExpires_inBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kExpires_inBit);

                _expires_in = element._numberInt();
            }
        }
        else if (fieldName == kScopeFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kScopeBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kScopeBit);

                _scope = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kAccess_tokenBit]) {
            ctxt.throwMissingField(kAccess_tokenFieldName);
        }
        if (!usedFields[kToken_typeBit]) {
            ctxt.throwMissingField(kToken_typeFieldName);
        }
    }

}


void OAuthResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasAccess_token && _hasToken_type);

    builder->append(kAccess_tokenFieldName, _access_token);

    builder->append(kToken_typeFieldName, _token_type);

    if (_expires_in.is_initialized()) {
        builder->append(kExpires_inFieldName, _expires_in.get());
    }

    if (_scope.is_initialized()) {
        builder->append(kScopeFieldName, _scope.get());
    }

}


BSONObj OAuthResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

constexpr StringData OAuthErrorResponse::kErrorFieldName;
constexpr StringData OAuthErrorResponse::kError_descriptionFieldName;
constexpr StringData OAuthErrorResponse::kError_uriFieldName;


OAuthErrorResponse::OAuthErrorResponse() : _error(mongo::idl::preparsedValue<decltype(_error)>()), _hasError(false) {
    // Used for initialization only
}
OAuthErrorResponse::OAuthErrorResponse(std::string error) : _error(std::move(error)), _hasError(true) {
    // Used for initialization only
}


OAuthErrorResponse OAuthErrorResponse::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<OAuthErrorResponse>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void OAuthErrorResponse::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<3> usedFields;
    const size_t kErrorBit = 0;
    const size_t kError_descriptionBit = 1;
    const size_t kError_uriBit = 2;
    std::set<StringData> usedFieldSet;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kErrorFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kErrorBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kErrorBit);

                _hasError = true;
                _error = element.str();
            }
        }
        else if (fieldName == kError_descriptionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kError_descriptionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kError_descriptionBit);

                _error_description = element.str();
            }
        }
        else if (fieldName == kError_uriFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kError_uriBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kError_uriBit);

                _error_uri = element.str();
            }
        }
        else {
            auto push_result = usedFieldSet.insert(fieldName);
            if (MONGO_unlikely(push_result.second == false)) {
                ctxt.throwDuplicateField(fieldName);
            }
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kErrorBit]) {
            ctxt.throwMissingField(kErrorFieldName);
        }
    }

}


void OAuthErrorResponse::serialize(BSONObjBuilder* builder) const {
    invariant(_hasError);

    builder->append(kErrorFieldName, _error);

    if (_error_description.is_initialized()) {
        builder->append(kError_descriptionFieldName, _error_description.get());
    }

    if (_error_uri.is_initialized()) {
        builder->append(kError_uriFieldName, _error_uri.get());
    }

}


BSONObj OAuthErrorResponse::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

}  // namespace mongo
