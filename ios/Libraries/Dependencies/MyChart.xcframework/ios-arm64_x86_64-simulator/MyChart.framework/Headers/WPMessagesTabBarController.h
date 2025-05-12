//
//  WPMessagesTabBarController.h
//  MyChart
//
//  Created by Yash Vaka on 12/13/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPMessagesTableViewController.h>
@class WPMessagesTableViewController;
@interface WPMessagesTabBarController : UITabBarController
@property (nonatomic) BOOL showMessageTypeDialog;

- (instancetype)initAndLaunchCompose;
- (void)childViewControllerLoaded:(WPMessagesTableViewController *)viewController;
@end
