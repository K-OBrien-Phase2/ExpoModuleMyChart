//
//  WPLegacyRemovePatientPhotoResponse.h
//  MyChart
//
//  Created by Yechan Hong on 1/14/16.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPLegacyRemovePatientPhotoResult.h>

@interface WPLegacyRemovePatientPhotoResponse : WPResponse

@property (strong, nonatomic) WPLegacyRemovePatientPhotoResult *result;

@end
