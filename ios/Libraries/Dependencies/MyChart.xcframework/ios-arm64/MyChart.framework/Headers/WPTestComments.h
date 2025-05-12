//
//  WPTestComments.h
//  MyChart
//
//  Created by Chetan Satish on 6/10/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>
#import <MyChart/WPUtil_Xml.h>
#import <MyChart/WPOrganizationInfo.h>

@interface WPTestComments : WPObject <ProviderImageDataSource>

@property (nonatomic, strong, nullable) NSString *text;
@property (nonatomic, strong, nullable) NSDate *date;
@property (nonatomic, strong, nullable) NSString *viewedBy;
@property (nonatomic, strong, nullable) NSDate *viewedDate;
@property (nonatomic, strong, nullable) NSString *providerID;
@property (nonatomic, strong, nullable) NSString *providerPhotoURL;
@property (nonatomic, strong, nullable) UIImage *providerImage;
@property (nonatomic, strong, nullable) NSString *providerName;
@property (nonatomic, assign) BOOL hasProviderPhotoOnBlob;
@property (nonatomic, strong, nullable) WPOrganizationInfo *organization;

@end
