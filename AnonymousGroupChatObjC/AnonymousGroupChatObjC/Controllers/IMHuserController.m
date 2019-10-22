//
//  IMHuserController.m
//  AnonymousGroupChatObjC
//
//  Created by Ian Hall on 10/4/19.
//  Copyright © 2019 Ian Hall. All rights reserved.
//

#import "IMHuserController.h"

@implementation IMHuserController
//shared instance
+ (IMHuserController *)shared;
{
    static IMHuserController *shared = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shared = [IMHuserController new];
    });
    return shared;
}

//initializer
- (instancetype)init
{
    self = [super init];
    if (self) {
        _databaseReference = [[FIRDatabase database] reference];
    }
    return self;
}

- (void)createInitialUser
{
    
}

- (void)retrieveUserFromFireBase
{
    
}

- (void)saveUserToFirebase
{
    
}
@end
