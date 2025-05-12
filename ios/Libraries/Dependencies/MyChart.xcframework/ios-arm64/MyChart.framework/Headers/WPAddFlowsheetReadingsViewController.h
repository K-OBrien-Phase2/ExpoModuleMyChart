//
//  WPAddFlowsheetReadingsViewController.h
//
//  Created by Matthew Flatau on 7/29/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPTableViewController.h>
#import <MyChart/WPLongTextEntryTableViewCell.h>
#import <MyChart/WPEditableFlowsheetTableViewCell.h>
#import <MyChart/WPCustomListViewController.h>
#import <MyChart/WPCustomSelectionTableViewCell.h>

@class WPFlowsheet;
@class WPDatePickerTableViewCell;

@interface WPAddFlowsheetReadingsViewController : WPTableViewController <UITextFieldDelegate, WPLongTextEntryTableViewCellDelegate,
    WPEditableFlowsheetTableViewCellDelegate, WPCustomListViewDelegate>

@property (nonatomic, strong) IBOutlet UIView *tableHeaderView;
@property (nonatomic, strong) IBOutlet UIView *instructionsView;
@property (nonatomic, strong) IBOutlet UIView *bannerView;
@property (nonatomic, strong) IBOutlet UILabel *instructionsLabel;
@property (nonatomic, strong) IBOutlet UILabel *bannerLabel;

@property (nonatomic, strong) IBOutlet WPCustomSelectionTableViewCell *dateCell;
@property (nonatomic, strong) IBOutlet WPCustomSelectionTableViewCell *deleteCell;
@property (nonatomic, strong) IBOutlet CoreButton *deleteButton;
@property (nonatomic, strong) IBOutlet UIButton *nextButton;
@property (nonatomic, strong) IBOutlet UIButton *previousButton;

@property (nonatomic, strong) WPDatePickerTableViewCell *datePickerCell;
@property (nonatomic, assign) BOOL showsDeleteButton;

- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet;
- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet andDate:(NSDate *)date; //Only currently used for dayentry
- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet readings:(NSDictionary *)readings;

- (instancetype)initWithEpisodeID:(NSString *)episodeID;    //Used for flowsheet deep linking

- (IBAction)nextPressed:(id)sender;
- (IBAction)previousPressed:(id)sender;
@end
