//
//  WPPatientVisitGuideLoadingViewController.h
//  MyChart
//
//  Created by Alex J White on 2/27/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPViewController.h>
#import <MyChart/WPPopupViewController.h>
#import <MyChart/WPGetPatientVisitGuideResponse.h>

@protocol WPPatientVisitGuideLoadedProtocol

- (void) visitGuideLoadedWithData:(nullable NSData *) data;

@end

@interface WPPatientVisitGuideLoadingViewController : WPPopupViewController

@property (nonatomic, weak, nullable) id <WPPatientVisitGuideLoadedProtocol> delegate;
@property (nonatomic, weak, nullable) IBOutlet UILabel *loadingText;
@property (nonatomic, weak, nullable) IBOutlet UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, weak, nullable) IBOutlet NSLayoutConstraint *textToSuperBottomConstraint;
@property (nonatomic, weak, nullable) IBOutlet NSLayoutConstraint *textToLoadingBottomConstraint;

- (void)launchGuideWithData:(NSData *_Nonnull)data;
- (void)didReceiveVisitGuideWithResponse:(WPGetPatientVisitGuideResponse *_Nonnull)response;

@end
