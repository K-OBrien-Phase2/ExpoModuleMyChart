//
//  WPCreditCardTableCell.h
//
//  Created by Jesse Dumke on 7/10/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import <MyChart/WPCardView.h>
#import <MyChart/WPCustomSelectionTableViewCell.h>

static NSString * const kWPCreditCardTableCellReuseIdentifier = @"WPCreditCardTableCell";

@interface WPCreditCardTableCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *cardholderName;
@property (nonatomic, weak) IBOutlet UILabel *cardEndingInLastFourDigitsLabel;
@property (nonatomic, weak) IBOutlet UILabel *expirationDate;
@property (weak, nonatomic) IBOutlet UIImageView *creditCardImage;
@property (weak, nonatomic) IBOutlet UIButton *selectedImageView;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *cardTopPaddingConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *cardBottomPaddingConstraint;

@end
