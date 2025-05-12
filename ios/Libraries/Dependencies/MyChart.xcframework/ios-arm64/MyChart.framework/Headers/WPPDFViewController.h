//
//  WPPDFViewController.h
//
//  Created by Jesse Dumke on 8/13/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import <MyChart/WPTableViewController.h>

@class WPStatement;

@interface WPPDFViewController : WPViewController <UIScrollViewDelegate>

@property (nonatomic, strong) WPStatement *statement;
@property (nonatomic) CGPDFDocumentRef pdf;

- (instancetype)initWithStatement:(WPStatement *)statement;

@end
