//
//  WPReplySettingsServiceResponse.h
//
//  Created by Chetan Satish on 7/21/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import <MyChart/WPResponse.h>
#import <MyChart/WPMessageReplySettings.h>
#import <MyChart/WPMessageReplySettingsResult.h>

@interface WPReplySettingsServiceResponse : WPResponse

@property (strong, nonatomic) WPMessageReplySettingsResult* replySettingsResult;

@end
