//
//  BlockBackground.h
//  arrived
//
//  Created by Gustavo Ambrozio on 29/11/11.
//  Copyright (c) 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BlockBackground : UIWindow

+ (BlockBackground *) sharedInstance;

- (void)addToMainWindow:(UIView *)view;
- (void)removeView:(UIView *)view;

@property (nonatomic, weak) UIView *backgroundView;
@property (nonatomic, readwrite) BOOL vignetteBackground;

@end
