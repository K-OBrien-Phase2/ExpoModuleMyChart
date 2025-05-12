//
//  WPLegacyPatientPreferences.h
//  MyChart
//
//  Created by Surender Pal Singh on 6/13/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
@class WPPatient;
typedef NS_ENUM(NSInteger, WPPhotoUploadStatus) {
    kWPPhotoUploadStatusNoChange = 0,
    kWPPhotoUploadStatusUpload = 1,
    kWPPhotoUploadStatusRemove = 2,
};

@interface WPLegacyPatientPreferences : WPObject
@property (strong, nonatomic) WPPatient * context;
@property (strong, nonatomic) NSString * modifiedNickname;
@property (strong, nonatomic) UIImage *modifiedPhoto;
@property (strong, nonatomic) UIColor* modifiedColor;
@property (assign, nonatomic) WPPhotoUploadStatus photoUploadStatus;

-(instancetype) initWithContext: (WPPatient*) context;

- (BOOL)hasNicknameModified;
- (BOOL)hasPhotoModified;
- (BOOL)hasColorModified;

- (BOOL)hasPreferenceModified;

@end
