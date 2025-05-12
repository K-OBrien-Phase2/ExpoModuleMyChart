//
//  WPFlowsheetDetailViewController.h
//  iChart
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPTableViewController.h>
#import <MyChart/WPSegmentedDateIntervalControl.h>

@class WPFlowsheet;
@class WPFlowsheetRow;

@interface WPFlowsheetDetailViewController : WPTableViewController <WPSegmentedDateIntervalControlDelegate>

@property (nonatomic, weak) IBOutlet WPSegmentedDateIntervalControl *dateIntervalControl;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *headerYConstraint;
@property (weak, nonatomic) IBOutlet CoreButton *healthConnectionsButton;
@property (nonatomic, weak) IBOutlet UINavigationBar *dateIntervalBackgroundView;
@property (nonatomic, strong) IBOutlet UITableViewCell *headerCell;

- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet;

- (void) setIsHome:(BOOL)isHome;

@end
