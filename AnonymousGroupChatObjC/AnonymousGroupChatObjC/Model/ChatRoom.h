//
//  ChatRoom.h
//  AnonymousGroupChatObjC
//
//  Created by Ian Hall on 10/3/19.
//  Copyright © 2019 Ian Hall. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChatRoom : NSObject

@property (nonatomic, readonly) NSString *chatRoomID;

-(instancetype)init;

@end

NS_ASSUME_NONNULL_END
