///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMTeamFolderMetadata;
@class DBTEAMTeamFolderStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderMetadata` struct.
///
/// Properties of a team folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderMetadata : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The ID of the team folder.
@property (nonatomic, readonly, copy) NSString *teamFolderId;

/// The name of the team folder.
@property (nonatomic, readonly, copy) NSString *name;

/// The status of the team folder.
@property (nonatomic, readonly) DBTEAMTeamFolderStatus *status;

/// True if this team folder is the team shared dropbox.
@property (nonatomic, readonly) NSNumber *isTeamSharedDropbox;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamFolderId The ID of the team folder.
/// @param name The name of the team folder.
/// @param status The status of the team folder.
/// @param isTeamSharedDropbox True if this team folder is the team shared
/// dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamFolderId:(NSString *)teamFolderId
                                name:(NSString *)name
                              status:(DBTEAMTeamFolderStatus *)status
                 isTeamSharedDropbox:(NSNumber *)isTeamSharedDropbox;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamFolderMetadata` struct.
///
@interface DBTEAMTeamFolderMetadataSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderMetadata` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderMetadata` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMTeamFolderMetadata *)instance;

///
/// Deserializes `DBTEAMTeamFolderMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderMetadata` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderMetadata` object.
///
+ (DBTEAMTeamFolderMetadata *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END