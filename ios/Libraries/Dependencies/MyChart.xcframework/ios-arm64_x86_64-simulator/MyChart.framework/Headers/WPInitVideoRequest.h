//
//  WPInitVideoRequest.h
//  iChart
//
//  Created by Matthew Flatau on 12/16/13.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>
#import <MyChart/WPInitVideoResponse.h>

@interface WPInitVideoRequest : WPRequest

@property (nonatomic, strong, nullable) NSString *dat;
@property (nonatomic, strong, nullable) WPOrganizationInfo *organization;

-(nonnull WPInitVideoResponse*)allocResponse;

@end

