//
//  WPAddToWaitListResponse.h
//  MyChart
//
//  Created by Alex J White on 1/5/15.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>

@interface WPAddToWaitListResult : WPObject

@property (nonatomic, assign) BOOL success;

@end


@interface WPAddToWaitListResponse : WPResponse

@property (nonatomic, strong, nullable) WPAddToWaitListResult *result;


@end
