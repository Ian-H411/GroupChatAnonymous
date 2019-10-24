//
//  user.m
//  AnonymousGroupChatObjC
//
//  Created by Ian Hall on 10/3/19.
//  Copyright © 2019 Ian Hall. All rights reserved.

#import "user.h"

@implementation user

- (instancetype)initWithName:(NSString *)name
{
    self = [super init];
    if (self) {
        _userName = name;
        _chatRooms = [NSMutableArray alloc];
        _profilePic = NULL;
        _dictionary = [NSDictionary alloc];
    }
    return self;
    
}

@end
