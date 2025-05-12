//
//  WPAlertServiceResponse.h
//
//  Created by Adam on 7/8/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

/**
 * @brief A list of WPAlert objects
 */
@interface WPAlertServiceResponse : WPResponse

@property (nonatomic, strong) NSMutableArray* alerts;   /**< List of WPAlert objects */
@property (nonatomic) NSInteger index;

@end
