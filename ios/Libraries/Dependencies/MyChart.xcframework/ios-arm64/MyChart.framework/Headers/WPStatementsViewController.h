//
//  WPStatementsViewController.h
//
//  Created by Jesse Dumke on 8/13/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 293103 11/2013 Added check for PB statement details security
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import <MyChart/WPTableViewController.h>
#import <MyChart/WPStatement.h>
#import <PECore/PECore.h>

@interface WPStatementsViewController : WPTableViewController

@property (nonatomic, assign) BOOL hasUnviewableStatements;       //YES if there are more statements available on the webstie and not viewable on mobile.

@property (weak, nonatomic) IBOutlet MyChartUILabel *headerLabel;
@property (nonatomic, strong) IBOutlet UIView *headerView;

- (instancetype)initWithStatements:(NSMutableArray *)statements;
- (instancetype)initWithStatements:(NSMutableArray *)statements hasUnviewableStatements:(BOOL)otherStatements;
- (instancetype)initWithEncryptedAccountId:(NSString *)accountId withEncryptedAccountType: (NSString *)accountType;
@property (nonatomic, assign) BOOL shouldLoadData;

@property (nonatomic, strong) NSString* encryptedAccountId;

@property (nonatomic, strong) NSString* encryptedAccountType;

+ (BOOL)ableToViewDetailsForStatement:(WPStatement *)statement;

@end
