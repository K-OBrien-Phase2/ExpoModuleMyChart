//
//  WPPaymentPlan.h
//  MyChart
//
//  Created by Jesse Dumke on 8/7/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>

@interface WPPaymentPlan : WPObject

@property (nonatomic, strong) NSDecimalNumber *amountDue;

@property (nonatomic, strong) NSDecimalNumber *totalDue;

// total number of payments for PB or number of payments remaining for HB
@property (nonatomic) NSInteger duration;

@property (nonatomic, strong) NSDate *nextPaymentDueDate;

@property (nonatomic) BOOL isOverdue;

@property (nonatomic, strong) NSDecimalNumber *overdueAmount;

@property (nonatomic, assign) BOOL isAutomated;

@end
