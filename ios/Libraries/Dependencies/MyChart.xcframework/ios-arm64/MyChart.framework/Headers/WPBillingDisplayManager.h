//
//  WPBillingDisplayManager.h
//  iChart
//
//  Created by Jesse Dumke on 7/23/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *tgupta  09/2014 329241 Adding support for accessibility

#import <Foundation/Foundation.h>
#import <MyChart/WPCreditCard.h>
#import <MyChart/WPStatement.h>
#import <MyChart/WPBillDetail.h>
#import <MyChart/WPAppointment.h>
#import <MyChart/WPRecentPayment.h>
#import <MyChart/WPBillSummary.h>

@class WPAccount;

@interface WPBillingDisplayManager : NSObject

#pragma mark - Credit Cards
+ (NSString *)buildDisplayStringExpirationDateFromCreditCard:(WPCreditCard *)card;
+ (NSString *)buildDisplayStringLastFourDigitsFromCreditCard:(WPCreditCard *)card;
+ (NSString *)imagePathForBrand:(CreditCardBrands)brand;

#pragma mark - images
+ (UIImage *)localizedMakePaymentImage;
+ (UIImage *)localizedPastPaymentImage;

@end
