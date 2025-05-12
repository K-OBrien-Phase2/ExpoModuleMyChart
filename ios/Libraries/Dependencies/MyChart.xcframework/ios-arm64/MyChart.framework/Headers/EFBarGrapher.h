//
//  EFBarGrapher.h
//  EFGrapher
//
//  Created by Mike Epley on 7/17/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/EFDataSet.h>
#import <MyChart/EFGrapher.h>

@interface EFBarGrapher : EFGrapher

extern const float BarGraphBarSpacingCoefficient;

- (void) drawGraphData;

@property CGFloat barWidth;

+ (void) setMaxTimeInterval:(NSTimeInterval)maxTimeInterval;
+ (NSTimeInterval)maxTimeInterval;

@end
