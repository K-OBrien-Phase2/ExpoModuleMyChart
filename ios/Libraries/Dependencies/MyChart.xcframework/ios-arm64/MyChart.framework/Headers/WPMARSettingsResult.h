//
//  WPMARSettingsResult.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 7/24/19.
//  Copyright © 2019-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
#import <MyChart/WPMedicalAdviceSettings.h>

@interface WPMARSettingsResult : WPObject

@property (strong, nonatomic) WPMedicalAdviceSettings* settings;
@property (strong, nonatomic) NSString* medicalAdviceHeader;

@end
