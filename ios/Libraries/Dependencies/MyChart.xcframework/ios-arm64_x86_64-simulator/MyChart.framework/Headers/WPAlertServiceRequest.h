//
//  WPAlertServiceRequest.h
//
//  Created by Adam on 7/8/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPAlertServiceResponse;

/**
 * \brief Request detailed information about an encounter
 *
 */
@interface WPAlertServiceRequest : WPRequest

@property (nonatomic) NSInteger visibleIndex; /** The index that was visible at the time this alert was triggered */
@property (nonatomic) NSInteger patientIndex;

/**
 * Allocates a new response object
 *
 * @return a new allocated EncounterResponse
 */
-(WPAlertServiceResponse*)allocResponse;


@end
