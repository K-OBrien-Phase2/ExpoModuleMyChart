//
//  EFDataPoint.h
//  EFGrapher
//
//  Created by Mike Epley on 7/16/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@protocol EFDataPointSource <NSObject>

- (NSString *) getDisplayValue;
- (NSString *) getDisplayInstant;
- (NSString *) getDisplayUnit;

@end

@interface EFDataPoint : NSObject

- (id)initWithValue:(NSNumber *)value atInstant:(NSDate *)instant;
- (id)initWithValue:(NSNumber *)value atInstant:(NSDate *)instant withSource:(id <EFDataPointSource>)source;
- (id)initWithValue:(NSNumber *)value atInstant:(NSDate *)instant strictMetadata:(NSDictionary*)strictMetadata isAbnormal:(bool)isAbnormal;

@property (readonly) NSDate *instant;
@property (readonly) NSNumber *value;
@property (readonly) id <EFDataPointSource> source;
@property CGPoint coordinate;
@property (readonly) NSDictionary<NSString*, NSString*>* strictMetadata;
@property (readonly) bool isAbnormal;

@end
