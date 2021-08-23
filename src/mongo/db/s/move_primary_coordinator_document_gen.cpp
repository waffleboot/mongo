/**
 * WARNING: This is a generated file. Do not modify.
 *
 * Source: buildscripts/idl/idlc.py --include src --base_dir build/opt --target_arch x86_64 --header build/opt/mongo/db/s/move_primary_coordinator_document_gen.h --output build/opt/mongo/db/s/move_primary_coordinator_document_gen.cpp src/mongo/db/s/move_primary_coordinator_document.idl
 */

#include "mongo/platform/basic.h"

#include "mongo/db/s/move_primary_coordinator_document_gen.h"

#include <bitset>
#include <set>

#include "mongo/bson/bsonobjbuilder.h"
#include "mongo/db/auth/authorization_contract.h"
#include "mongo/db/commands.h"
#include "mongo/idl/command_generic_argument.h"

namespace mongo {

constexpr StringData MovePrimaryCoordinatorDocument::kShardingDDLCoordinatorMetadataFieldName;
constexpr StringData MovePrimaryCoordinatorDocument::kDatabaseVersionFieldName;
constexpr StringData MovePrimaryCoordinatorDocument::kForwardableOpMetadataFieldName;
constexpr StringData MovePrimaryCoordinatorDocument::kIdFieldName;
constexpr StringData MovePrimaryCoordinatorDocument::kRecoveredFromDiskFieldName;
constexpr StringData MovePrimaryCoordinatorDocument::kSessionFieldName;
constexpr StringData MovePrimaryCoordinatorDocument::kToShardIdFieldName;


MovePrimaryCoordinatorDocument::MovePrimaryCoordinatorDocument() : _toShardId(mongo::idl::preparsedValue<decltype(_toShardId)>()), _hasToShardId(false) {
    // Used for initialization only
}
MovePrimaryCoordinatorDocument::MovePrimaryCoordinatorDocument(mongo::ShardId toShardId) : _toShardId(std::move(toShardId)), _hasToShardId(true) {
    // Used for initialization only
}


MovePrimaryCoordinatorDocument MovePrimaryCoordinatorDocument::parse(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    auto object = mongo::idl::preparsedValue<MovePrimaryCoordinatorDocument>();
    object.parseProtected(ctxt, bsonObject);
    return object;
}
void MovePrimaryCoordinatorDocument::parseProtected(const IDLParserErrorContext& ctxt, const BSONObj& bsonObject) {
    std::bitset<7> usedFields;
    const size_t kIdBit = 0;
    const size_t kRecoveredFromDiskBit = 1;
    const size_t kForwardableOpMetadataBit = 2;
    const size_t kDatabaseVersionBit = 3;
    const size_t kSessionBit = 4;
    const size_t kToShardIdBit = 5;

    for (const auto& element :bsonObject) {
        const auto fieldName = element.fieldNameStringData();


        if (fieldName == kIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kIdBit);

                IDLParserErrorContext tempContext(kIdFieldName, &ctxt);
                const auto localObject = element.Obj();
                _shardingDDLCoordinatorMetadata.setId(mongo::ShardingDDLCoordinatorId::parse(tempContext, localObject));
            }
        }
        else if (fieldName == kRecoveredFromDiskFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Bool))) {
                if (MONGO_unlikely(usedFields[kRecoveredFromDiskBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kRecoveredFromDiskBit);

                _shardingDDLCoordinatorMetadata.setRecoveredFromDisk(element.boolean());
            }
        }
        else if (fieldName == kForwardableOpMetadataFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kForwardableOpMetadataBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kForwardableOpMetadataBit);

                const BSONObj localObject = element.Obj();
                _shardingDDLCoordinatorMetadata.setForwardableOpMetadata(boost::optional<mongo::ForwardableOperationMetadata>(ForwardableOperationMetadata(localObject)));
            }
        }
        else if (fieldName == kDatabaseVersionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kDatabaseVersionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kDatabaseVersionBit);

                const BSONObj localObject = element.Obj();
                _shardingDDLCoordinatorMetadata.setDatabaseVersion(boost::optional<mongo::DatabaseVersion>(DatabaseVersion(localObject)));
            }
        }
        else if (fieldName == kSessionFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, Object))) {
                if (MONGO_unlikely(usedFields[kSessionBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kSessionBit);

                IDLParserErrorContext tempContext(kSessionFieldName, &ctxt);
                const auto localObject = element.Obj();
                _shardingDDLCoordinatorMetadata.setSession(boost::optional<mongo::ShardingDDLSession>(mongo::ShardingDDLSession::parse(tempContext, localObject)));
            }
        }
        else if (fieldName == kToShardIdFieldName) {
            if (MONGO_likely(ctxt.checkAndAssertType(element, String))) {
                if (MONGO_unlikely(usedFields[kToShardIdBit])) {
                    ctxt.throwDuplicateField(element);
                }

                usedFields.set(kToShardIdBit);

                _hasToShardId = true;
                _toShardId = element.str();
            }
        }
        else {
            ctxt.throwUnknownField(fieldName);
        }
    }

    if (MONGO_unlikely(!usedFields.all())) {
        if (!usedFields[kIdBit]) {
            ctxt.throwMissingField(kIdFieldName);
        }
        if (!usedFields[kRecoveredFromDiskBit]) {
            _shardingDDLCoordinatorMetadata.setRecoveredFromDisk(false);
        }
        if (!usedFields[kToShardIdBit]) {
            ctxt.throwMissingField(kToShardIdFieldName);
        }
    }

}


void MovePrimaryCoordinatorDocument::serialize(BSONObjBuilder* builder) const {
    invariant(_hasToShardId);

    {
        _shardingDDLCoordinatorMetadata.serialize(builder);
    }

    {
        builder->append(kToShardIdFieldName, _toShardId.toString());
    }

}


BSONObj MovePrimaryCoordinatorDocument::toBSON() const {
    BSONObjBuilder builder;
    serialize(&builder);
    return builder.obj();
}

}  // namespace mongo
