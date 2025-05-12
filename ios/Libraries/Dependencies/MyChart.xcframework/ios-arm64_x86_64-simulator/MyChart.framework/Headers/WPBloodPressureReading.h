//
//  WPBloodPressureReading.h
//
//  Created by Matthew Flatau on 9/5/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPFlowsheetReading.h>

@interface WPFlowsheetReading (Blood)
@property (nonatomic, readonly) BOOL isBloodPressure;
@end

@interface WPBloodPressureReading : WPFlowsheetReading

@property (nonatomic, strong) WPFlowsheetReading *systolicReading;
@property (nonatomic, strong) WPFlowsheetReading *diastolicReading;

- (id)initWithSystolicReading:(WPFlowsheetReading *)systolicReading andDiastolicReading:(WPFlowsheetReading *)diastolicReading;

- (void)createDisplayString;

@end
