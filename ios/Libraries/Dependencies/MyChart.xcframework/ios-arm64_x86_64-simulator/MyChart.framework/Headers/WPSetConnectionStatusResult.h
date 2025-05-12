//
//  WPSetConnectionStatusResult.h
//  iChart
//
//  Created by Matthew Flatau on 12/20/13.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.

#import <MyChart/WPObject.h>
#import <MyChart/WPTelemedicineError.h>

@class WPTelemedicineError;

@interface WPSetConnectionStatusResult : WPObject

@property (nonatomic, assign) WPTelemedicineResponseStatus status;
@property (nonatomic, strong) WPTelemedicineError *error;

@end

