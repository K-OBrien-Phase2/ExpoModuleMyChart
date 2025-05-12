//
//  WPFlowsheetDatePickerViewController.h
//
//  Created by Matthew Flatau on 9/18/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPPopupDatePickerViewController.h>

@class WPFlowsheet;

@interface WPFlowsheetDatePickerViewController : WPPopupDatePickerViewController

- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet;

@end
