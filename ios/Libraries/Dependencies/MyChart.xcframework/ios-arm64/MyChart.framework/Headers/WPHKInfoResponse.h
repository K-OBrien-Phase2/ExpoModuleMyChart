//
//  WPHKInfoResponse.h
//
//  Created by Ben Drda on 8/12/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <MyChart/WPResponse.h>
#import <MyChart/WPHKInfoResult.h>
#import <MyChart/WPFlowsheetRowInfo.h>

/*!
 @author Ben Drda
 */
@interface WPHKInfoResponse : WPResponse

/*!
 @brief The result
 */
@property (nonatomic, strong) WPHKInfoResult *result;

@end
#endif
