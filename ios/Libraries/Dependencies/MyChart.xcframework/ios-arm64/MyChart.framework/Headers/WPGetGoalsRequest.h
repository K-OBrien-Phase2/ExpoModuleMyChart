//
//  WPGetGoalsRequest.h
//  MyChart
//
//  Created by Yash Vaka on 1/6/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>
#import <MyChart/WPGetGoalsResponse.h>


@class WPGetGoalsResponse;

@interface WPGetGoalsRequest : WPRequest{
}

- (WPGetGoalsResponse *)allocResponse;

@end

