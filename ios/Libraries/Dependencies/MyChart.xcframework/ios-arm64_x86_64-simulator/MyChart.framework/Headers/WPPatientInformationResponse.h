//
//  WPPatientInformationResponse.h
//
//  Created by Chetan Satish on 1/26/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

#import <MyChart/WPPatientInfoResult.h>

@interface WPPatientInformationResponse : WPResponse {
	WPPatientInfoResult *patInfo;
}

@property (nonatomic, strong) WPPatientInfoResult *patInfo;

@end

