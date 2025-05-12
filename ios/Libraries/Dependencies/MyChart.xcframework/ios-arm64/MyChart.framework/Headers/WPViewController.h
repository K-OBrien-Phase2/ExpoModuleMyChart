//
//  WPViewController.h
//
//  Created by Epic on 6/17/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.

#import <UIKit/UIKit.h>
#import <MyChart/WPSpringboardInfo.h>
#import <MyChart/WPSpringboardManager.h>
#import <MyChart/WPCenteredMessageTextView.h>

@class WPNavigationTitleView;

/**
 *\brief Root epic view controller
 *
 * All Epic view controllers subclass this view controler
 */
@interface WPViewController : UIViewController <WPSpringboardManager, PEDeepLinkLaunchableProtocol>

@property (nonatomic, strong, nullable) WPCenteredMessageTextView *messageOverlay;
@property (nonatomic, strong, nonnull) UIImageView * epicLogo;
@property (nonatomic, strong, nonnull) UIImageView * patientImage;
@property (nonatomic, strong, nonnull) UIImageView * orgImage;
@property (nonatomic, assign) BOOL shouldHideEpicLogo;
@property (nonatomic, assign) BOOL shouldHidePhoto;
@property (nonatomic, assign) BOOL shouldHideMenuIcon;
@property (nonatomic, assign) BOOL shouldKeepUpNavBarSubViews;
@property (nonatomic, strong, nullable) WPNavigationTitleView *primaryTitleView;
@property (nonatomic, strong, nullable) WPNavigationTitleView *secondaryTitleView;
@property (nonatomic, strong, nullable) UIView * secondBarContainer;
@property (nonatomic, strong, nullable) UINavigationBar * navigationBar;
@property (nonatomic, assign) CGFloat navigationBarFullHeight;
@property (nonatomic, assign) CGFloat navigationBarOriginalHeight;
@property (nonatomic, assign) BOOL hasNavigationBarFullyExpanded;
@property (nonatomic, assign) BOOL hasDisabledExpandingNavigationBar;
@property (nonatomic, assign) BOOL isNavigationBarCollapsing;
@property (nonatomic, assign) BOOL shouldShowUserInfoInTitleBar;
@property (nonatomic, strong, nullable) NSDictionary *deepLinkParameters;
@property (nonatomic, assign) BOOL shouldCollapseTitle;

+(nullable WPSpringboardInfo *)springboardItem;

- (void) showErrorAlert;
- (void) showErrorAlertAndClose;
- (void) showLanguageDisallowedAlert;
- (void)showAlertWithTitle:(nonnull NSString *) title message:(nonnull NSString *)message cancelButtonTitle:(nonnull NSString *)cancelButtonTitle shouldPopController:(BOOL)shouldPop;

//Show various message on the screen
//The messages appear centered to the frame on top and hiding all subviews.
- (void)showMessage:(nullable NSString *)message;
- (void)showMessage:(nullable NSString *)message withAccessibilityNotification:(BOOL)postAccessibilityNotification;
- (void)showMessageGray:(nullable NSString *)message;
- (void)showLoadingErrorMessage;
- (void)showLoadingErrorMessage:(nullable NSString *)message;
- (void)showLoadingMessage;
- (void)showLoadingMessage:(nullable NSString *)message;
- (void)showLoadingMessageGray;
- (void)showLoadingMessageGray:(nullable NSString *)message;
- (void)showLoadingMessageGrayWithAccess:(BOOL)postAccessibilityNotification;

//hides the message
- (void)hideMessage;
- (void)hideMessageWithCallback:(nullable void (^)(void))callback;
- (void)hideMessageWithCallback:(nullable void (^)(void))callback skipAccessibilityNotification:(BOOL)skipAccessibilityNotification;

//rotates the device to the specified orientation
- (void)willRotateToLandscape:(BOOL)isLandscape;

- (void)setTitle:(nullable NSString *)title atPatientIndex:(NSInteger)patientIndex shouldSetAccessibilityLabel:(BOOL)shouldSetAccessibilityLabel;
- (void)showMenuInNavBar:(BOOL)show;
- (void)addNavBarMenuActions:(NSArray<UIAlertAction*>*_Nullable)actions;
- (void)setupPatientNameInTitleBar;
@end
