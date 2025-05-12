//
//  WPCenteredMessageTextView.h
//
//  Created by Epic on 4/12/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 04/2014 309967 Fixing formatting/spelling
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 09/2015 384452 Cleanup/modernizing

#import <UIKit/UIKit.h>
#import <MyChart/WPUtil_Strings.h>
#import <MyChart/WPUtil_UI.h>

typedef NS_ENUM(NSInteger, WPCenteredMessageTextViewStyle) { 
	WPCenteredMessageTextViewStyleClear,
	WPCenteredMessageTextViewStyleGreyedOut,
} ;

/**
 * This is a view that provides a simple gray label with an optional loading spinner
 */
@interface WPCenteredMessageTextView : UIView

@property (nonatomic, strong) UILabel* _Nonnull textLabel;                           /** Text to display */
@property (nonatomic, strong) UIActivityIndicatorView* _Nonnull activityIndicator;   /** Progress indicator */
@property (nonatomic, assign) BOOL textMode;                                         /** Set to YES to hide and ignore activity indicator */

- (void) showLoadingErrorMessage;
- (void) showLoadingErrorMessage:(NSString *_Nonnull)message;
- (void) showLoadingMessage:(NSString *_Nonnull)message;
- (void) showMessageWithStyle:(WPCenteredMessageTextViewStyle)style withMessage:(NSString *_Nonnull)message;
- (void) showMessageWithStyle:(WPCenteredMessageTextViewStyle)style withMessage:(NSString *_Nonnull)message isTextMode:(BOOL)textMode;
- (void) showMessageWithStyle:(WPCenteredMessageTextViewStyle)style withMessage:(NSString *_Nonnull)message isTextMode:(BOOL)textMode postAccessibilityNotification:(BOOL)postAccessibilityNotification;
- (void) hide;
- (void) hide:(BOOL)animated;
- (void) hide:(BOOL)animated onFinishedHiding:(nullable void (^)(void))callback skipAccessibilityNotification:(BOOL)skipAccessibilityNotification;


@end
