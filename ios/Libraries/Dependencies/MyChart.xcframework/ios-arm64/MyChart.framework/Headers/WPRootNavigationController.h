//
//  WPRootNavigationController.h
//
//  Created by Chetan Satish on 10/7/13.
//  Copyright © 2013-2023 Epic Systems Corporation. All rights reserved.
//
//

#import <UIKit/UIKit.h>

extern CGFloat const kWPDefaultAnimatorDuration;

@interface WPRootNavigationController : UINavigationController

- (void)setOnboardingStatus:(BOOL)status;
- (void)setTheme:(id <PEThemeProtocol>)theme;

@end
