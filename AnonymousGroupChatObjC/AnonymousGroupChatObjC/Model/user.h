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

@property (nonatomic) NSMutableArray *blockedByList;

- (instancetype) initWithName: (NSString *) name;



@end


NS_ASSUME_NONNULL_END
