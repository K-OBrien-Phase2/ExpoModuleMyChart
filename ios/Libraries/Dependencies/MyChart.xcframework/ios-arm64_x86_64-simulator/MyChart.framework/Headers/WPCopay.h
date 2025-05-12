//
//  WPCopay.h
//
//  Created by Larry Irwin II on 8/13/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//  REVISION HISTORY:
//  *jdumke 08/12 242239 add support for copay payment in Upcoming Appt details
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import <MyChart/WPObject.h>

@class WPVisitAutoPay;

@interface WPCopay : WPObject

@property (nonatomic, strong, nullable) NSDecimalNumber *amount;
@property (nonatomic, strong, nullable) NSDecimalNumber *amountPaid;
@property (nonatomic, strong, nullable) WPVisitAutoPay *visitAutoPay;

@property (nonatomic, strong, nullable) NSDecimalNumber *prepayAmount;
@property (nonatomic, strong, nullable) NSDecimalNumber *amountDiscountedRaw;

@property (nonatomic, assign) BOOL askPatient;
@property (nonatomic, assign) BOOL enablePayment;
@property (nonatomic, assign) BOOL authorized;
@property (nonatomic, assign) BOOL isPaid;
@property (nonatomic, assign) BOOL mayOfferPaymentPlan;
@property (nonatomic, assign) BOOL isOnPaymentPlan;

@end
