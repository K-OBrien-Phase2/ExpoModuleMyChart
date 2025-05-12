//
//  WPAlertOperationForUserServiceRequest.h
//  MyChart
//
//  Created by Alex J White on 1/21/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPAlertOperationForUserServiceResponse.h>

@interface WPAlertOperationForUserServiceRequest : WPRequest


@property (nonatomic) NSInteger visibleIndex; /** The index that was visible at the time this alert was triggered */

-(instancetype)initWithPatientIndex:(NSInteger)index;


/**
 * Allocates a new response object
 *
 * @return a new allocated PatientInformationResponse
 */
-(WPAlertOperationForUserServiceResponse*)allocResponse;

@end


