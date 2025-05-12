//
//  WPMedicationRefillPaymentInfoServiceRequest.h
//
//  Created by Jesse Dumke on 9/3/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPMedicationForRefill.h>

@class WPMedicationRefillPaymentInfoServiceResponse;

@interface WPMedicationRefillPaymentInfoServiceRequest : WPRequest {
    NSArray *medicationList_;
	NSString *pharmacyID_;
}

@property (nonatomic, strong) NSArray *medicationList;
@property (nonatomic, strong) NSString *pharmacyID;

-(WPMedicationRefillPaymentInfoServiceResponse *)allocResponse;

@end
