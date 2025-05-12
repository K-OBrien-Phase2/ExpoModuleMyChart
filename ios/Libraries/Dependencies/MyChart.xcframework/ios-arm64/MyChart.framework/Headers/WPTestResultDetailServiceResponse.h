//
//  WPTestResultDetailServiceResponse.h
//
//  Created by Epic on 7/1/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

@class WPTestDetail;

/**
 * Service response to get a test detail object
 */
@interface WPTestResultDetailServiceResponse : WPResponse

@property(nonatomic, strong) WPTestDetail * details; /**< Returned test detail or nil of there was an error */


@end
