//
//  WPWebViewController.h
//
//  Created by Matthew Flatau on 7/17/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <MyChart/WPViewController.h>
#import <WebKit/WebKit.h>

typedef NS_ENUM(NSInteger, WPViewPresentationStyle) {
	kWPViewPresentationStyleModal,     //show as a modal view
    kWPViewPresentationStyleActivity,  //show as a springboard activity
} ;

@interface WPWebViewController : WPViewController <WKNavigationDelegate, WKUIDelegate, UIScrollViewDelegate, WKScriptMessageHandler, ImageLoaderDelegate>

@property (nonatomic, strong) WPOrganizationInfo *organizationInfo;
@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic, weak) IBOutlet UIView *toolbar;
@property (nonatomic, weak) IBOutlet UIButton *backButton;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *toolbarYConstraint;
@property (nonatomic, strong) NSArray *allowedHosts;
@property (nonatomic, assign) BOOL shouldShowBackNavigation;
@property (nonatomic, assign) BOOL shouldAllowInlinePlayback;
@property (nonatomic, assign) BOOL didLoadFirstPage;
@property (nonatomic, assign) BOOL isWebRTC;
@property (nonatomic, assign) BOOL shouldOpenLinksExternally;
@property (nonatomic, assign) BOOL shouldShowWarningForWebRTC;

- (IBAction)closePressed:(id)sender;
- (IBAction)backPressed:(id)sender;

- (instancetype)initWithRequest:(NSURLRequest *)request andPresentationStyle:(WPViewPresentationStyle)style;
- (instancetype)initWithRequest:(NSURLRequest *)request allowedHosts:(NSArray *)allowHosts andPresentationStyle:(WPViewPresentationStyle)style;

- (BOOL)isURLAllowed:(NSURL *)url;
- (NSDictionary *)queryParametersFromURL:(NSURL *)url;
- (void)updatePreviousNavigationButton:(NSURL *)url;
- (void)openUrlInAppStore:(NSString *)link;

- (void)stopLoadingWebviewAndClearDelegates;
- (void)showOrgBannerView;
//Static Helper
+ (BOOL)isURL:(NSURL *)url supportedByHosts:(NSArray *)hosts;

@end
