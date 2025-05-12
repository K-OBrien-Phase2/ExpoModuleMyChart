//
//  WPMessageReplySettingsResult.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 8/14/19.
//  Copyright © 2019-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
#import <MyChart/WPMessageReplySettings.h>

@interface WPMessageReplySettingsResult : WPObject

@property (nonatomic, strong) WPMessageReplySettings* settings;
@property (strong, nonatomic) NSString* medicalAdviceHeader;

@end
