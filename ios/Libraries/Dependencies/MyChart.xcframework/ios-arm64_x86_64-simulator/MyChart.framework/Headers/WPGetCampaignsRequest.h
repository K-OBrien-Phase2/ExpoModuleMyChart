//
//  WPGetCampaignsRequest.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/7/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>
#import <MyChart/WPGetCampaignsResponse.h>


@class WPGetCampaignsResponse;

/**
 * Represents the request object for web service to get campaigns for patient
 */
@interface WPGetCampaignsRequest : WPRequest{
}

/**
 * allocates the response class for this request class
 */
- (WPGetCampaignsResponse *)allocResponse;

@end
