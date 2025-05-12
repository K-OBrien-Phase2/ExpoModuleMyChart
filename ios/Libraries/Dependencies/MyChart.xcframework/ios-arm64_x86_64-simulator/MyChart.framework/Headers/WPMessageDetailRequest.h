//
//  WPMessageDetailRequest.h
//
//  Created by Chetan Satish on 9/21/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPOrganizationInfo.h>
#import <MyChart/WPMessage.h>

@class WPMessageDetailResponse;

@interface WPMessageDetailRequest : WPRequest

@property (nonatomic, strong) WPOrganizationInfo *org;

- (instancetype)initWithMessageID:(NSString *)msgID;
- (instancetype)initMessageDetailRequest:(NSString *) messageID organization:(WPOrganizationInfo *)org messageFolder:(WPMessageFolder)folder isMessageIDEncrypted:(BOOL)isEncrypted;
- (NSData *)XMLData;

- (WPMessageDetailResponse*)allocResponse;

@end

