//
//  IMHuserController.h
//  AnonymousGroupChatObjC
//
//  Created by Ian Hall on 10/4/19.
//  Copyright © 2019 Ian Hall. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "user.h"
NS_ASSUME_NONNULL_BEGIN

@interface IMHuserController : NSObject

//singleton
+ (IMHuserController *) shared;

//source of truth
- (user *) currentUser;

//apple id to find the user profile
- (NSString *) appleUserID;

//to be used the first time upon creating a users profile
- (void) createInitialUser;

//save that user to the cloud
- (void) saveUserToCloud;

//retrieve user from cloud
- (void) retrieveUserFromCloud;

//func to retireve their user
- (void) retrieveUsersAppleIDFromCloud;

@end

NS_ASSUME_NONNULL_END
