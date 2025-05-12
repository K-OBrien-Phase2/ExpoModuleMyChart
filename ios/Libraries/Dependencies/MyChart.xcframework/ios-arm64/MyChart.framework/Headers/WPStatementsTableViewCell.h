//
//  WPStatementsTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 1/20/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//




#import <UIKit/UIKit.h>
#import <MyChart/WPCustomSelectionTableViewCell.h>
#import <PECore/PECore.h>

@interface WPStatementsTableViewCell : WPCustomSelectionTableViewCell


@property (weak, nonatomic) IBOutlet UnreadIndicatorView *readIndicatorView;
@property (weak, nonatomic) IBOutlet MyChartUILabel *mainLabel;
@property (weak, nonatomic) IBOutlet MyChartUILabel *detailLabel;
@property (weak, nonatomic) IBOutlet UIImageView *disclosureIndicator;

@end
