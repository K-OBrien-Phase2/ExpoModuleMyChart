//
//  WPNotificationPopdownViewController.h
//  MyChart
//
//  Created by Matthew Flatau on 2/16/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPPopdownViewController.h>

@interface WPNotificationPopdownViewController : WPPopdownViewController

extern NSString *const FROM_ALERT;

@property (assign, nonatomic) BOOL shouldShowPushAlert;
@property (nonatomic, weak) UINavigationController* initializerNavigationController;

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController;

@end
