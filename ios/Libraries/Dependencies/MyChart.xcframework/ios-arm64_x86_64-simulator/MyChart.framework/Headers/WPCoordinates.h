//
//  WPCoordinates.h
//  MyChart
//
//  Created by Yechan Hong on 3/25/15.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <MyChart/WPObject.h>

@interface WPCoordinates : WPObject

@property (nonatomic, strong) NSNumber *latitude;
@property (nonatomic, strong) NSNumber *longitude;

@end
