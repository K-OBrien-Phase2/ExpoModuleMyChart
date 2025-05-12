//
//  WPApplication.h
//  MyChart
//
//  Created by Mike on 7/21/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.

#import <Foundation/Foundation.h>


@interface WPApplication : UIApplication
/// get the date for beta library expiration
+ (nullable NSDate *)getLibraryExpirationDate;

/// Set the expiration date for a library; can only be set once.
/// @param date the date to set, or nil to just retrieve what has already been set
/// @return the finalized date set for library expiration
+ (nullable NSDate *)trySetLibraryExpirationDate:(nullable NSDate *)date;
@end
