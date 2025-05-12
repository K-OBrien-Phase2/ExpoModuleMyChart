//
//  WPMARSettingsServiceResponse.h
//
//  Created by Chetan Satish on 9/8/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPMARSettingsResult.h>

@interface WPMARSettingsServiceResponse : WPResponse

@property (nonatomic, strong) WPMARSettingsResult *marSettingsResult;

@end
