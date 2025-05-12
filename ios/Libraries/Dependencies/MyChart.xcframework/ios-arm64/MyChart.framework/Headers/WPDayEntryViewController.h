//
//  WPDayEntryViewController.h
//
//  Created by Matthew Flatau on 8/25/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPTableViewController.h>

@class WPFlowsheetReading;
@class WPFlowsheetRow;

static NSString * const READINGS_PLACEHOLDER = @"\u2014";  //em-dash "–"

@interface WPDayEntryViewController : WPTableViewController <UITextViewDelegate, UITextFieldDelegate>

- (instancetype)initWithReading:(WPFlowsheetReading *)reading andRow:(WPFlowsheetRow *)row;

@end
