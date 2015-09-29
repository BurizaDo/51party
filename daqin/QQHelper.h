//
//  LoginUtil.h
//  daqin
//
//  Created by BurizaDo on 7/24/14.
//  Copyright (c) 2014 BurizaDo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventDefinition.h"
#import "LoginDelegate.h"

@interface QQHelper : NSObject
@property (nonatomic, assign) id<LoginDelegate> delegate;

+ (instancetype)sharedInstance;

- (void)doLogin;

- (void)getUserInfo;
@end
