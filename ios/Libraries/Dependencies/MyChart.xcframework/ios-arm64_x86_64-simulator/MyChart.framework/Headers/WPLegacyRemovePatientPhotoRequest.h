//
//  WPLegacyRemovePatientPhotoRequest.h
//  MyChart
//
//  Created by Yechan Hong on 1/14/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPLegacyRemovePatientPhotoResponse.h>

@interface WPLegacyRemovePatientPhotoRequest : WPRequest

@property (nonatomic, assign) NSInteger patientIndex;

/**
 * Allocates a new response object
 *
 * @return a new allocated WPLegacyRemovePatientPhotoResponse
 */
- (instancetype)initWithPatientIndex:(NSInteger)patientIndex;

- (WPLegacyRemovePatientPhotoResponse *)allocResponse;

@end
