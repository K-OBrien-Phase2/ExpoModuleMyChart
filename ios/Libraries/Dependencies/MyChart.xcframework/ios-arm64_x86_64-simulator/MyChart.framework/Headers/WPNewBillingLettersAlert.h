//
//  WPNewBillingLettersAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/2/16.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPAlert.h>

@interface WPNewBillingLettersAlert : WPAlert <IWPNewBillingLettersAlert>

@property (nonatomic, assign) NSInteger guarantorCount;
@property (nonatomic, strong) NSString *accountID;

@end
