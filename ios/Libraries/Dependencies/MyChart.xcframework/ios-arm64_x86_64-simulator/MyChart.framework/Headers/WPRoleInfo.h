//
//  WPRoleInfo.h
//  Copyright © 2022-2023 Epic Systems Corporation. All rights reserved.

#import <MyChart/WPObject.h>
#import <MyChart/WPCategory.h>

@interface WPRoleInfo : WPObject

@property (nonatomic, strong) WPCategory*		Relationship;
@property (nonatomic, strong) WPCategory*		PCPType;
@property (nonatomic, strong) WPCategory*		Specialty;

@end
