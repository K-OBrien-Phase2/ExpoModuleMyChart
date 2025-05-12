//
//  NSDate.h
//  EpicOnHand
//
//  Created by Mike on 2/4/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (WPSystemTime)

+(NSTimeInterval) timeIntervalSinceSystemStartup;
-(NSTimeInterval) timeIntervalSinceSystemStartup;
+(NSDate *) dateOfSystemStartup;

@end

