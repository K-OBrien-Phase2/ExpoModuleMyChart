//
//  WPDetailedCardTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 1/20/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPCustomSelectionTableViewCell.h>

@interface WPDetailedCardTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *mainLabel;
@property (nonatomic, weak) IBOutlet UILabel *detailLabel;
@property (nonatomic, weak) IBOutlet UILabel *descriptionLabel;

@end
