//
//  WPInsulinRow.h
//  MyChart
//
//  Created by Jacob Andrews-Ohlman on 7/3/19.
//  Copyright © 2019-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPFlowsheetRow.h>
#import <MyChart/WPFlowsheetReading.h>

@interface WPInsulinRow : WPFlowsheetRow

@property (nonatomic, strong) WPFlowsheetRow* basalRow;
@property (nonatomic, strong) WPFlowsheetRow* bolusRow;

- (id) initWithBasalRow:(WPFlowsheetRow*)basalRow andBolusRow:(WPFlowsheetRow*)bolusRow;
- (void)processRows;

@end
