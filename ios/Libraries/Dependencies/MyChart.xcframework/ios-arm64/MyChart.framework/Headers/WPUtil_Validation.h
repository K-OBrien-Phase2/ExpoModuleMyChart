//
//  WPUtil_Validation.h
//
//  Created by Jesse Dumke on 10/16/12.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPCreditCard.h>
#import <MyChart/WPViewController.h>

@interface WPUtil_Validation : NSObject

+ (BOOL)validateEmail: (NSString *)email;
+ (BOOL)checkOnlyAllowedCharactersForString:(NSString *)string inViewController:(UIViewController *)viewController;

@end
