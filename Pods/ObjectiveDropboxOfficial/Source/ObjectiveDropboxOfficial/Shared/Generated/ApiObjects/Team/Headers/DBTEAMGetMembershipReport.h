///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMBaseDfbReport.h"

@class DBTEAMGetMembershipReport;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetMembershipReport` struct.
///
/// Membership Report Result. Each of the items in the storage report is an
/// array of values, one value per day. If there is no data for a day, then the
/// value will be None.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGetMembershipReport : DBTEAMBaseDfbReport <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Team size, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> *teamSize;

/// The number of pending invites to the team, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> *pendingInvites;

/// The number of members that joined the team, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> *membersJoined;

/// The number of suspended team members, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> *suspendedMembers;

/// The total number of licenses the team has, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> *licenses;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param startDate First date present in the results as 'YYYY-MM-DD' or None.
/// @param teamSize Team size, for each day.
/// @param pendingInvites The number of pending invites to the team, for each
/// day.
/// @param membersJoined The number of members that joined the team, for each
/// day.
/// @param suspendedMembers The number of suspended team members, for each day.
/// @param licenses The total number of licenses the team has, for each day.
///
/// @return An initialized instance.
///
- (instancetype)initWithStartDate:(NSString *)startDate
                         teamSize:(NSArray<NSNumber *> *)teamSize
                   pendingInvites:(NSArray<NSNumber *> *)pendingInvites
                    membersJoined:(NSArray<NSNumber *> *)membersJoined
                 suspendedMembers:(NSArray<NSNumber *> *)suspendedMembers
                         licenses:(NSArray<NSNumber *> *)licenses;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetMembershipReport` struct.
///
@interface DBTEAMGetMembershipReportSerializer : NSObject

///
/// Serializes `DBTEAMGetMembershipReport` instances.
///
/// @param instance An instance of the `DBTEAMGetMembershipReport` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGetMembershipReport` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMGetMembershipReport *)instance;

///
/// Deserializes `DBTEAMGetMembershipReport` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGetMembershipReport` API object.
///
/// @return An instantiation of the `DBTEAMGetMembershipReport` object.
///
+ (DBTEAMGetMembershipReport *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END