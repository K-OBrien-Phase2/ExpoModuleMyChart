//
//  WPAccountManagementWebViewController.h
//  MyChart
//
//  Created by Yash Vaka on 2/2/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPWebViewController.h>
#import <MyChart/WPServer.h>


typedef NS_ENUM(NSInteger, WPAccountManagementType) {
    kWPAccountManagementTypeSignup = 0,
    kWPAccountManagementTypeRecoverPassword = 1,
    kWPAccountManagementTypeRecoverUsername = 2,
    kWPAccountManagementTypeResetPassword = 3,
    kWPAccountManagementTypeResetPasswordOnMaxPasswordAttemptsExceeded = 4,
} ;

@interface WPAccountManagementWebViewController : WPWebViewController

- (instancetype)initWithServer:(WPServer*)server accountManagementType:(WPAccountManagementType)type;

@end
