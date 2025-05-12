//
//  WPSaveNotificationPreferencesResult.h
//  MyChart
//
//  Created by Surender Pal Singh on 8/30/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>

@interface WPSaveNotificationPreferencesResult : WPObject

@property (assign, nonatomic) BOOL isPhoneValid;
@property (assign, nonatomic) BOOL success;
@property (assign, nonatomic) BOOL hasMismatchedEmail;
@property (assign, nonatomic) BOOL hasMismatchedPhone;
@property (assign, nonatomic) BOOL contactVerificationDisabled;

@end
