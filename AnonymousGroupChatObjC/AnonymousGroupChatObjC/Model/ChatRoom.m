//
//  ChatRoom.m
//  AnonymousGroupChatObjC
//
//  Created by Ian Hall on 10/3/19.
//  Copyright © 2019 Ian Hall. All rights reserved.
//

#import "ChatRoom.h"

@implementation ChatRoom

- (instancetype)init
{
    self = [super init];
    if (self) {
        CFUUIDRef uuidRef = CFUUIDCreate(NULL);
//           _chatRoomID = CFUUIDCreateString(NULL, uuidRef);
//           CFRelease(uuidRef);
//           _chatRoomID = [(NSString *)uuidStringRef autorelease];
    }
    return self;
}

@end
