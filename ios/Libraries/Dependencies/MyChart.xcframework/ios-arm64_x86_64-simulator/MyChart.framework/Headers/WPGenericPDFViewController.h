//
//  WPGenericPDFViewController.h
//  MyChart
//
//  Created by Alex J White on 2/27/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPViewController.h>
#import <MyChart/WPShareViewController.h>

@interface WPGenericPDFViewController : WPViewController <WPShareDelegate, WKNavigationDelegate>

@property (weak, nonatomic) IBOutlet UIView *bannerView;
@property (weak, nonatomic) IBOutlet UILabel *bannerHeader;
@property (weak, nonatomic) IBOutlet WKWebView *webView;
@property (nonatomic) BOOL hasSetVoiceOverFocus;

- (instancetype)initWithPDFData:(NSData *)pdfData;
- (instancetype)initForModalViewWithPDFData:(NSData *)pdfData;
- (instancetype)initForModalViewWithPDFData:(NSData *)pdfData withName:(NSString*)pdfName allowShare:(BOOL)allowShare isPatientDocument:(BOOL)isPatientDocument dcsID:(NSString *)dcsID;
- (instancetype)initForModalViewWithPDFData:(NSData *)pdfData withName:(NSString *)pdfName allowShare:(BOOL)allowShare isPatientDocument:(BOOL)isPatientDocument dcsID:(NSString *)dcsID bannerMessage:(NSString *)bannerMessage;
- (instancetype)initCore:(NSData *)pdfData isModal:(BOOL)isModal withName:(NSString *)pdfName allowShare:(BOOL)allowShare isPatientDocument:(BOOL)isPatientDocument dcsID:(NSString *)dcsID bannerMessage:(NSString *)bannerMessage;

@end
