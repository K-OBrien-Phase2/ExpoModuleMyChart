//
//  WPComposeMessagePopupViewController.h
//  MyChart
//
//  Created by Yash Vaka on 2/19/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <MyChart/WPPopupViewController.h>
#import <MyChart/WPMessage.h>
#import <MyChart/WPCustomerServiceTopic.h>


@interface WPComposeMessagePopupViewController : WPPopupViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) void (^providerCompletionHandler)(WPMessageRecipient *);
@property (nonatomic, strong) void (^topicCompletionHandler)(WPCustomerServiceTopic *);

- (instancetype)initWithMessage:(WPMessage *)message providers:(NSArray *)providers pools:(NSArray *)pools andCompletionHandler:(void (^)(WPMessageRecipient *))completionHandler;

- (instancetype)initWithTopics:(NSArray *)topics andCompletionHandler:(void (^)(WPCustomerServiceTopic *))completionHandler;

@end
