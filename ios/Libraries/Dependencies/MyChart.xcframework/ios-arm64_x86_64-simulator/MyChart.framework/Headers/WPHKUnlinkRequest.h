//
//  WPHKUnlinkRequest.h
//
//  Created by Ben Drda on 8/18/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <MyChart/WPRequest.h>
#import <MyChart/WPHKUnlinkResponse.h>
#import <MyChart/WPDeviceInfo.h>

/*!
 @brief Request object for a Flowsheets/HealthKit/Unlink call
 @author Ben Drda
 */
@interface WPHKUnlinkRequest : WPRequest

/*!
 @brief The device being unlinked
 */
@property (nonatomic,strong) WPDeviceInfo *device;
/*!
 @brief Initialize the response object
 @return the response object
 */
-(WPHKUnlinkResponse *) allocResponse;

@end
#endif
