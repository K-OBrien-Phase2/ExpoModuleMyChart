//
//  WPAppDelegate.h
//
//  Created by Epic on 6/1/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
@import UserNotifications;

/**
 * \brief Main Delegate for the Mychart Mobile
 */
@interface WPAppDelegate : NSObject <UIApplicationDelegate, UNUserNotificationCenterDelegate>

/// execute healthkit queries in a branded-safe way
+ (void)executeAllObserverQueries;
@end

