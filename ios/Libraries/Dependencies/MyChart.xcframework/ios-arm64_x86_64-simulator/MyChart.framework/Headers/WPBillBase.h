//
//  WPBillBase.h
//  MyChart
//
//  Created by Matthew Flatau on 6/8/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
#import <MyChart/WPPaymentPlan.h>

/**
 * Shared baseclass for WPBillSummary and WPBillDetail
 */
@interface WPBillBase : WPObject

// outstanding balance for this account
@property (nonatomic, strong) NSDecimalNumber *outstandingBalance;

// amount due for this account
@property (nonatomic, strong) NSDecimalNumber *amountDue;

// payment plan info for this account
@property (nonatomic, strong) WPPaymentPlan *paymentPlan;

@end
