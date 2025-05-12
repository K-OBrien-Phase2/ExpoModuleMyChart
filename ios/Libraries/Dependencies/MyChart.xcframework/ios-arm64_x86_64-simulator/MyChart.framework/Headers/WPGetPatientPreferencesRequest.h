//
//  WPGetPatientPreferencesRequest.h
//  MyChart
//
//  Created by Alex J White on 12/8/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPGetPatientPreferencesResponse.h>

@interface WPGetPatientPreferencesRequest : WPRequest
- (WPGetPatientPreferencesResponse *)allocResponse;

@end
