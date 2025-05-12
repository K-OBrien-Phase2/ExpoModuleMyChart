//
//  WPHKLinkResponse.h
//
//  Created by Ben Drda on 8/15/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <MyChart/WPResponse.h>
#import <MyChart/WPHKLinkResult.h>

/*!
 @brief Response for a Flowsheets/HealthKit/Link call
 @author Ben Drda
 */
@interface WPHKLinkResponse : WPResponse

/*!
 @brief The result
 */
@property (nonatomic, strong) WPHKLinkResult *result;

@end
#endif
