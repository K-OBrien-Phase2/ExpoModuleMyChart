//
//  WPMessagesTableViewController.h
//
//  Created by Epic on 9/2/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPTableViewController.h>
#import <MyChart/WPMessage.h>
#import <MyChart/WPMessagesTabBarController.h>

@interface WPMessagesTableViewController : WPTableViewController 

- (instancetype) initWithFolderType:(WPMessageFolder)folder;
- (void)composeButtonClicked;

/*!
* @brief Returns if ask a question is allowed.   Either customer service or medical advice.
*/
+(BOOL)isAskAQuestionAllowed;

@end
