//
//  user.h
//  AnonymousGroupChatObjC
//
//  Created by Ian Hall on 10/3/19.
//  Copyright © 2019 Ian Hall. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <CloudKit/CloudKit.h>

#import "Constants.h"
NS_ASSUME_NONNULL_BEGIN

@interface user : NSObject

@property (nonatomic) NSString *userName;

@property (nonatomic,nullable) NSData *profilePic;

@property (nonatomic) NSMutableArray *chatRooms;

@property (nonatomic) CKRecordID *ckrecordID;

@property (nonatomic, readonly) NSString *appleID;

@property (nonatomic) NSMutableArray *blockedByList;

- (instancetype) initWithName: (NSString *) name appleUserID:(NSString *) appleUserID;

- (instancetype) initWithRecord:(CKRecord *) record;


@end
//
//@interface CKRecord (user)
//
//- (instancetype) initWithUser:(user *) user;
//
//@end


NS_ASSUME_NONNULL_END
