//
//  WPDeviceListRequest.h
//  MyChart
//
//  Created by Yechan Hong on 4/16/15.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//


#import <MyChart/WPRequest.h>
#import <MyChart/WPDeviceListResponse.h>

@interface WPDeviceListRequest : WPRequest

- (WPDeviceListResponse *)allocResponse;
@end
