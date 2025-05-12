//
//  WPBloodPressureRow.h
//
//  Created by Matthew Flatau on 9/5/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPFlowsheetRow.h>

@interface WPFlowsheetRow (Blood)
@property (nonatomic, readonly) BOOL isBloodPressure;
@end

@interface WPBloodPressureRow : WPFlowsheetRow

@property (nonatomic, strong) WPFlowsheetRow *systolicRow;
@property (nonatomic, strong) WPFlowsheetRow *diastolicRow;

- (id)initWithSystolicRow:(WPFlowsheetRow *)systolicRow andDiastolicRow:(WPFlowsheetRow *)diastolicRow;
- (void)processRows;
@end
