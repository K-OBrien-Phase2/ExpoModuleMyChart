//
//  WPShareViewController.h
//  MyChart
//
//  Created by David Schanker on 12/24/18.
//  Copyright © 2018-2023 Epic Systems Corporation. All rights reserved.
//

@protocol WPShareDelegate;

@interface WPShareViewController : WPViewController

/// Displays a standard dialog to share items
/// @param itemsToShare the items to be shared
/// @param presenter the presenter that is displaying the share dialog
/// @param sourceView the source view to anchor the dialog on larger screens
/// @param delegate callback delegate
+ (void)displayShareDialogWithItems:(NSArray *)itemsToShare inPresenter:(WPViewController *)presenter fromSourceView:(UIView *)sourceView callback:(id <WPShareDelegate>)delegate;


/// Displays a standard dialog to share items
/// @param itemsToShare the items to be shared
/// @param presenter the presenter that is displaying the share dialog
/// @param barButtonItem the bar button item to anchor the dialog on larger screens
/// @param delegate callback delegate
+ (void)displayShareDialogWithItems:(NSArray *)itemsToShare inPresenter:(WPViewController *)presenter fromBarButtonItem:(UIBarButtonItem *)barButtonItem callback:(id <WPShareDelegate>) delegate;


/// Checks if the user has previously accepted the share warning displayed when they attempt to share content outside of the app
/// - Returns: true if the user has previously accepted the share warning, false otherwise
+ (BOOL)didAcceptShareWarning;

/// Sets the value returned by ``WPShareViewController/didAcceptShareWarning``
/// @param didAccept the value to set
+ (void)setDidAcceptShareWarning:(BOOL)didAccept;

@end

@protocol WPShareDelegate <NSObject>

/**
 * @brief Delegate method that should be implemented to handle when the share dialog gets shown.
 */
- (void) didShowShareDialog;

/**
 * @brief Delegate method that should be implemented to handle the user canceling the share dialog
 */
- (void) didCancelShareDialog;

@end
