//
//  WPAlertOperationForUserServiceResponse.h
//  MyChart
//
//  Created by Alex J White on 1/21/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPAlertOperationForUserServiceResult.h>

@interface WPAlertOperationForUserServiceResponse : WPResponse

@property (nonatomic,strong) WPAlertOperationForUserServiceResult* result;   /**< Object that holds a List of WPAlert objects */
@property (nonatomic) NSInteger index;

@end
