//
//  WPSurgicalProcedure.h
//  MyChart
//
//  Created by David Huntsman on 5/21/18.
//  Copyright © 2018-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
#import <MyChart/WPProvider.h>

@interface WPSurgicalProcedure : WPObject
@property (nonatomic, strong, nullable) WPProvider* primarySurgeon;
@end
