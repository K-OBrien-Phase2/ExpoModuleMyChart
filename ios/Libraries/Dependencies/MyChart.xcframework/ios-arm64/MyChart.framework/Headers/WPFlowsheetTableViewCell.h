//
//  WPFlowsheetTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 1/26/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPCustomSelectionTableViewCell.h>

@interface WPFlowsheetTableViewCell : WPCustomSelectionTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *flowsheetTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *flowsheetRowsLabel;
@property (weak, nonatomic) IBOutlet UILabel *startDateLabel;
@property (weak, nonatomic) IBOutlet UIView *startDateSeparator;
@property (weak, nonatomic) IBOutlet UILabel *flowsheetStartDateLabel;
@property (weak, nonatomic) IBOutlet UIView *endDateSeparator;
@property (weak, nonatomic) IBOutlet UILabel *endDateLabel;
@property (weak, nonatomic) IBOutlet UILabel *flowsheetEndDateLabel;
@property (weak, nonatomic) NSString *flowsheetRowsAccessibilityLabel;

-(void)setStartDate:(NSDate *)date;
-(void)setEndDate:(NSDate *)date;
-(NSString *)getAccessibilityHint;

@end
