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
@property (nonatomic) user * currentUser;

//to be used the first time upon creating a users profile
- (void) createInitialUser;

//save that user to the cloud
- (void) saveUserToFirebase;

//retrieve user from cloud
- (void) retrieveUserFromFireBase;


@end

NS_ASSUME_NONNULL_END
