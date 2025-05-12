//
//  WPDummyAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/29/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
#import <MyChart/WPAlertType.h>

@interface WPDummyAlert : WPObject <NSCoding>

@property (nonatomic, assign) WPAlertType type;
@property (nonatomic, assign) NSInteger count;
@property (nonatomic, assign) NSInteger priority;
@property (nonatomic, assign) BOOL isPersistent;
@property (nonatomic, strong) NSMutableArray *options;
@property (nonatomic, strong) NSMutableDictionary *optionDictionary;


@end
