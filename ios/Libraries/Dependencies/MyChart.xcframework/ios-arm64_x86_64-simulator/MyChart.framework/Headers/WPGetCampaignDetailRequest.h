//
//  WPGetCampaignDetailRequest.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/24/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>
#import <MyChart/WPGetCampaignDetailResponse.h>


@class WPGetCampaignDetailResponse;

/**
 * Represents the request object for web service to get details about a given campaign
 */
@interface WPGetCampaignDetailRequest : WPRequest

/**
 * initializes the request with the campaign ID for which detail is being requested
 * @param campaignID of the campaign whose detail is being requested
 */
- (instancetype)initWithCampaignID:(NSString *)campaignID;

/**
 * allocates the response class for this request class
 */
- (WPGetCampaignDetailResponse *)allocResponse;

-(NSData *)XMLData;

@end
