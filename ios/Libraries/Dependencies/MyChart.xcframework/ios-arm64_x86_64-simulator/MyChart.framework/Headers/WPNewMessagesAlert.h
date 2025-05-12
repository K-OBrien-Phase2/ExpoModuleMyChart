//
//  WPNewMessagesAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/30/16.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPAlert.h>

@interface WPNewMessagesAlert : WPAlert <IWPNewMessagesAlert>

@property (nonatomic, strong) NSString *providerName;
@property (nonatomic, strong) NSString *messageSubject;

@end
