//
//  WPBillingBalanceDueAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/1/16.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPAlert.h>

@interface WPBillingBalanceDueAlert : WPAlert <IWPBillingBalanceDueAlert>

@property (nonatomic, assign) BOOL isOverdue;
@property (nonatomic, strong) NSString *balanceDue;
@property (nonatomic, strong) NSString *accountID;

@end
