//
//  WPDetailedTableViewCell.h
//
//  Created by Matthew Flatau on 8/6/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPCustomSelectionTableViewCell.h>

@interface WPDetailedTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak) IBOutlet UILabel *subtitleLabel;
@property (nonatomic, weak) IBOutlet UILabel *valueLabel;
@property (nonatomic, weak) IBOutlet UILabel *metadataLabel;
@property (nonatomic, weak) IBOutlet UIImageView *valueIconView;

@end
