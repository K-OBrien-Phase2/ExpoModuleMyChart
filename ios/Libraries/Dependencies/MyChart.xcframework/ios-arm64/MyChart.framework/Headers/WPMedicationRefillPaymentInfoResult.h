//
//  WPMedicationRefillPaymentInfoResult.h
//
//  Created by Jesse Dumke on 9/3/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>
#import <MyChart/WPMedicationPaymentInfo.h>

@interface WPMedicationRefillPaymentInfoResult : WPObject {
    BOOL gatewayConfigured_;
    NSDecimalNumber *totalEstimatedPrice_;
    NSDecimalNumber *totalPreAuthorizationAmount_;
    NSMutableArray *medicationsRefillPaymentInformation_;
}

@property (nonatomic) BOOL gatewayConfigured;
@property (nonatomic, strong) NSDecimalNumber *totalEstimatedPrice;
@property (nonatomic, strong) NSDecimalNumber *totalPreAuthorizationAmount;
@property (nonatomic, strong) NSMutableArray *medicationsRefillPaymentInformation;

@end
