//
//  user.m
//  AnonymousGroupChatObjC
//
//  Created by Ian Hall on 10/3/19.
//  Copyright © 2019 Ian Hall. All rights reserved.
//

#import "user.h"

@implementation user

- (instancetype)initWithName:(NSString *)name appleUserID:(NSString *)appleUserID
{
    self = [super init];
    if (self) {
        NSString * uuid = [[NSUUID UUID] UUIDString];
        _userName = name;
        _chatRooms = [NSMutableArray alloc];
        _profilePic = NULL;
        _ckrecordID = [[CKRecordID alloc] initWithRecordName: uuid];
        _appleID = appleUserID;
    }
    return self;
}

- (instancetype)initWithRecord:(CKRecord *)record
{
    self = [super init];
    if (self){
        _userName = record[userRecordTypeKey];
        _chatRooms = [NSMutableArray alloc];
        _profilePic = record[userProfilePictureKey];
        _ckrecordID = record.recordID;
        _appleID = record[userAppleIDKey];
        NSString * listAsReference = record[userBlockedByList]
        
    }
    return self;
}



@end
//
//@implementation CKRecord (user);
//
//- (instancetype)initWithUser:(user *)user
//{
//    self = [super init];
//    if (self){
//        ck
//    }
//}
//
//@end
