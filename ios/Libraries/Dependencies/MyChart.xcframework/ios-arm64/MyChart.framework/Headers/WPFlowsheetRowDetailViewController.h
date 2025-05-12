//
//  WPFlowsheetRowDetailViewController.h
//
//  Created by Matthew Flatau on 8/6/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPTableViewController.h>
#import <MyChart/EFGraphView.h>
#import <MyChart/WPSegmentedDateIntervalControl.h>

@class WPFlowsheet;
@class WPFlowsheetRow;
@class WPFlowsheetReadingsLoadCount;

@interface WPFlowsheetRowDetailViewController : WPTableViewController <WPSegmentedDateIntervalControlDelegate>

@property (nonatomic, weak) IBOutlet WPSegmentedDateIntervalControl *dateIntervalControl;
@property (weak, nonatomic) IBOutlet EFGraphView *graphView;

@property (weak, nonatomic) IBOutlet UINavigationBar *dateIntervalBackgroundView;

@property (nonatomic, weak) IBOutlet NSLayoutConstraint *headerYConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *tableYConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *graphBottomToParentConstraint;

@property (weak, nonatomic) IBOutlet UIView *lastReadingContainer;
@property (weak, nonatomic) IBOutlet UILabel *lastReadingLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lastReadingCenterXConstraint;
@property (weak, nonatomic) IBOutlet UIView *lastReadingLine;

@property (weak, nonatomic) IBOutlet UILabel *abnormalLabel;
@property (weak, nonatomic) IBOutlet UIImageView *abnormalImage;
@property (weak, nonatomic) IBOutlet UIView *abnormalView;

@property (nonatomic, strong) WPFlowsheetReadingsLoadCount *numberOfReadingsRequests;
@property BOOL hasAbnormalData;

- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet row:(WPFlowsheetRow *)row;

- (IBAction)graphTapped:(id)sender;

@end
