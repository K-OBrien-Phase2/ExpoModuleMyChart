//
//  WPWarningTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 10/21/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPCustomSelectionTableViewCell.h>

@interface WPWarningTableViewCell : WPCustomSelectionTableViewCell

- (void)setWarningText:(NSString *)text showInfoIcon:(BOOL)showInfoIcon;
@end
