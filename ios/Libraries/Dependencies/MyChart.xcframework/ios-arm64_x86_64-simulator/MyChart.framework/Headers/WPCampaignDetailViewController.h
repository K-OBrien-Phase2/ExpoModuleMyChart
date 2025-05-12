//
//  CampaignDetailViewController.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/24/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPCampaignCard.h>
#import <MyChart/WPGetCampaignDetailRequest.h>
#import <MyChart/WPActivityActionButton.h>
#import <WebKit/WebKit.h>

/**
 * View controller that displays details about a campaign
 */
@interface WPCampaignDetailViewController : WPViewController<WKUIDelegate>

/**
 * intialize view controller with the campaign whose details is to be displayed
 * @param campaign object
 */
- (instancetype)initWithCampaign:(WPCampaignCard *)campaign;

@end
