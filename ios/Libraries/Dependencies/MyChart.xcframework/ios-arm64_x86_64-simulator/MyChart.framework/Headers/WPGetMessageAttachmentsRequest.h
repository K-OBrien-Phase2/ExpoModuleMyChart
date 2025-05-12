//
//  WPGetMessageAttachmentsRequest.h
//  MyChart
//
//  Created by Yash Vaka on 2/1/18.
//  Copyright © 2018-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>
#import <MyChart/WPGetMessageAttachmentsResponse.h>

@interface WPGetMessageAttachmentsRequest : WPRequest

- (instancetype)initGetMessageAttachmentsRequest:(NSString *)messageID organization:(WPOrganizationInfo *)org;
- (WPGetMessageAttachmentsResponse *)allocResponse;

@end
