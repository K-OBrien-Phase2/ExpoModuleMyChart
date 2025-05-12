//
//  WPUrgentCareDepartmentsRequest.h
//  MyChart
//
//  Created by Yechan Hong on 3/24/15.
//  Copyright © 2015-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
//
#import <MyChart/WPRequest.h>
#import <MyChart/WPUrgentCareDepartmentsResponse.h>

@class WPUrgentCareDepartmentsResponse;

@interface WPUrgentCareDepartmentsRequest : WPRequest {
    
}

- (WPUrgentCareDepartmentsResponse *)allocResponse;

@end
