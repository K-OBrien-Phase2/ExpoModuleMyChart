//
//  EFBloodPressureGrapher.h
//  EFGraphingLibrary
//
//  Created by Mike Epley on 7/25/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/EFLineGrapher.h>
#import <MyChart/EFBloodPressureDataSet.h>

@interface EFBloodPressureGrapher : EFLineGrapher

- (id) initWithDataSet:(EFBloodPressureDataSet *)bpDataSet;

@property EFBloodPressureDataSet *bpDataSet;

@end
