//
//  WPLegacySetPatientDisplayNameRequest.h
//  MyChart
//
//  Created by Yechan Hong on 1/14/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPLegacySetPatientDisplayNameResponse.h>

@interface WPLegacySetPatientDisplayNameRequest : WPRequest

@property (nonatomic, strong) NSString *displayName;
@property (nonatomic, assign) NSInteger patientIndex;

/**
 * Allocates a new response object
 *
 * @return a new allocated WPLegacySetPatientDisplayNameResponse
 */
- (instancetype)initWithDisplayName:(NSString *)displayName patientIndex:(NSInteger)patientIndex;

- (WPLegacySetPatientDisplayNameResponse *)allocResponse;

@end
