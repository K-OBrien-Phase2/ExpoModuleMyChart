//
//  WPTableViewController.h
//
//  Created by Chetan Satish on 2/18/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.

#import <UIKit/UIKit.h>
#import <MyChart/WPViewController.h>

typedef NS_ENUM(NSInteger, LoadStatus) {
	kLoadStatusNotLoaded,				// Nothing loaded at all
	kLoadStatusError,					// There was an error with the request
	kLoadStatusInProgress,				// A request is currently in progress (data may have already
										//   been loaded if it is being paged
	kLoadStatusInProgressPartiallyDone,	// A request is executing and a prev. one has already executed
	kLoadStatusDone,					// All data has been loaded for the given request
	kLoadStatusPartiallyDone			// Some data has been loaded and a request is not in progress
} ;

typedef NS_ENUM(NSInteger, SaveStatus) {
    kSaveStatusDone,                    // Nothing loaded at all
    kSaveStatusError,                   // There was an error with the request
} ;

@interface WPTableViewController : WPViewController <UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, strong, nullable)               NSIndexPath     *selectedIndexPath;
@property (nonatomic, strong, nullable)				NSMutableArray  *contents;
@property (nonatomic)						LoadStatus		loadStatus;

@property (nonatomic, weak, nullable)	IBOutlet	UITableView         *myTableView;

@property (weak, nonatomic, nullable) IBOutlet NSLayoutConstraint *buttonLeadingConstraint;
@property (weak, nonatomic, nullable) IBOutlet NSLayoutConstraint *buttonWidthConstraint;
@property (weak, nonatomic, nullable) IBOutlet CoreButton *bottomButton;
@property (weak, nonatomic, nullable) IBOutlet UIView *bottomView;

- (BOOL)voiceOverSelectCellAtIndexPath:(nullable NSIndexPath *)indexPath; //Voiceover select cell, returns if selection was successful
- (void)voiceOverSelectFirstCell;

- (nullable instancetype)initWithCoder:(nullable NSCoder *)aDecoder NS_UNAVAILABLE;
- (nullable instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil contents:(nullable NSMutableArray *)contents NS_DESIGNATED_INITIALIZER;
- (void)setUpBottomButtonWithTitle:(nonnull NSString *)buttonTitle andImage:(nonnull UIImage *)buttonImage;


@end
