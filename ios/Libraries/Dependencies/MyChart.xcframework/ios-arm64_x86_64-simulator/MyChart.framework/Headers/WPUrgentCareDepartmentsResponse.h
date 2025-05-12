//
//  WPUrgentCareDepartmentsResponse.h
//  MyChart
//
//  Created by Yechan Hong on 3/24/15.
//  Copyright © 2015-2023 Epic Systems Corporation. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPUrgentCareDepartmentsResult.h>

@interface WPUrgentCareDepartmentsResponse : WPResponse {
    
}

@property (nonatomic, strong) WPUrgentCareDepartmentsResult *urgentCareDepartmentsResponse;

@end
