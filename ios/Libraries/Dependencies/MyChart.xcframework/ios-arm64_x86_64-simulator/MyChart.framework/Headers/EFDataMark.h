//
//  EFDataMark.h
//  EFGrapher
//
//  Created by Mike Epley on 7/18/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface EFDataMark : NSObject

- (id)initWithValue:(NSNumber *)value decimals:(int)decimals;

@property (readonly) NSNumber *value;
@property int decimals; //number of decimal places to display
@property CGFloat y;

@end
