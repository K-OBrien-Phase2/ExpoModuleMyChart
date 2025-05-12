//
//  WPBillingAutoPayErrorsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/1/16.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPAlert.h>

@interface WPBillingAutoPayErrorsAlert : WPAlert <IWPBillingAutoPayErrorsAlert>

@property (nonatomic, assign) NSInteger guarantorCount;
@property (nonatomic, strong) NSString *accountID;

@end
