//
//  WPLongTextEntryTableViewCell.h
//
//  Created by Matthew Flatau on 8/15/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPEditTableViewCellProtocol.h>
#import <MyChart/WPTextView.h>
#import <MyChart/WPCustomSelectionTableViewCell.h>

@class WPLongTextEntryTableViewCell;

@protocol WPLongTextEntryTableViewCellDelegate <NSObject>

- (void)startedEditingCell:(WPLongTextEntryTableViewCell *)cell;
- (void)cellDidEdit:(WPLongTextEntryTableViewCell *)cell;
- (void)endedEditingCell:(WPLongTextEntryTableViewCell *)cell;
- (void)didAcceptInfoAlert;

@optional

- (BOOL)shouldBeginEditing:(WPLongTextEntryTableViewCell *)cell;
- (UIView *)keyboardAccessoryView;

@end

extern NSString * const kWPLongTextEntryTableViewCellReuseIdentifier;

@interface WPLongTextEntryTableViewCell : WPCustomSelectionTableViewCell <UITextViewDelegate, WPEditTableViewCellProtocol>

@property (nonatomic, weak) IBOutlet WPTextView *inputTextView;
@property (nonatomic, weak) UIViewController <WPLongTextEntryTableViewCellDelegate> *delegate;

@property (nonatomic, assign) BOOL showInfoButton;
@property (nonatomic, assign) BOOL showDetailLabel;

@property (nonatomic, weak) id objectTag;
@property (nonatomic, strong) NSString *instructions;
@property (nonatomic, strong) NSIndexPath *indexPath;
@property (nonatomic, assign) BOOL allowsTextEntry;

- (void)setPlaceholder:(NSString *)placeholder;

@end
