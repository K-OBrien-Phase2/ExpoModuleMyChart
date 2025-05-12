//
//  WPNotificationPreferencesViewController.h
//  MyChart
//
//  Created by Alex J White on 11/13/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPViewController.h>

static NSString * const kWPEmailDictionaryKey = @"emailDictionary";
static NSString * const kWPPhoneDictionaryKey = @"phoneDictionary";
extern NSString * const EMAIL;
extern NSString * const PHONE;
extern NSString * const EDIT_CONTACT_INFORMATION;

@interface WPNotificationPreferencesViewController : WPViewController <UITextFieldDelegate>

- (instancetype)initWithEmail:(NSString *)email andSMS:(NSString *)smsNumber;
+ (void)saveNotificationPreferencesWithEmail:(NSString*)email andPhone:(NSString*)phone;

@end
