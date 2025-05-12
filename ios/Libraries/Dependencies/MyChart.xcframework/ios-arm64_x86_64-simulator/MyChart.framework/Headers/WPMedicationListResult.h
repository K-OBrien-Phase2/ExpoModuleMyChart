//
//  WPMedicationListResult.h
//  MyChart
//
//  Created by Jesse Dumke on 2/27/15.
//  Copyright © 2015-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>
#import <MyChart/WPOrganizationInfo.h>

@interface WPMedicationListResult : WPObject

@property (nonatomic, assign) NSDate *lastReviewedInstant;
@property (nonatomic, assign) BOOL possiblyFiltered;
@property (nonatomic, strong) NSMutableArray *medications;
@property (nonatomic, strong) WPOrganizationInfo *orgInfo;
@property (nonatomic, assign) BOOL isAdmittedForMedRefill;

@end
