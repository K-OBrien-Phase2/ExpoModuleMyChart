//
//  WPGetPatientPreferencesResult.h
//  MyChart
//
//  Created by Alex J White on 12/8/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>

@interface WPGetPatientPreferencesResult : WPObject

@property (nonatomic, strong, nullable) NSString *emailAddress;
@property (nonatomic, strong, nullable) NSString *phoneNumber;
@property (nonatomic, strong, nullable) NSString *passwordLastUpdated;
@property (nonatomic) BOOL isUserOptedIntoPreviewFeatures;

@end
