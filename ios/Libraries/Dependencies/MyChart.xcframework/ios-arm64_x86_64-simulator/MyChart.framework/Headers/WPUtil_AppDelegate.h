//
//  WPUtil_AppDelegate.h
//  MyChart
//
//  Created by Matthew Flatau on 9/9/15.
//  Copyright © 2015-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UserNotifications;

@class WPServer;

@interface WPUtil_AppDelegate : NSObject

#pragma mark - Notifications
/*!
 * @brief Provides a shared hook to handle registering for push notifications.
 *
 * @param application - The current application
 * @param deviceToken - The token received by the UIAppDelegate's didRegisterForRemoteNotificationsWithDeviceToken
 */
+ (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

+ (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

+ (void)userNotificationCenter:(UNUserNotificationCenter *)center didReceiveNotificationResponse:(UNNotificationResponse *)response withCompletionHandler:(void(^)(void))completionHandler;

+ (void)registerForNotificationsForApplication:(UIApplication *)application;


/*!
 * @brief Create a notification to be display in-app with the provided payload
 *
 * @param userInfo  payload
 * @return YES if it pertains to the current organization, NO otherwise
 */
+ (void) createInAppNotificationWithPayload:(NSDictionary*)userInfo forCurrentOrg:(BOOL) currentOrg;

+ (void)checkPushNotificationStatusForServer:(WPServer *)server;

/*!
 * @brief Helper to get the organization ID from the userInfo dictionary associated with a notification
 *
 * @param userInfo  the userInfo dictionary associated with a notification
 * @return the organization ID
 */
+ (NSString *) getFullOrgIDWithUserInfo:(NSDictionary *)userInfo;

+ (NSString *)getServerNotificationID: (NSDictionary*)userInfo;

/**
 Get the org ID associated with this payload.
 For push notifications, we'll take the output of getCustomerIDforNotifications^CIPNBROKER,
 which consists of three pieces, and return the third piece, which is the SLG ID.
 The database server is not aware of any affiliate info so this third piece will not contain affiliate info.
 For local notifications (namely Hello Patient), we'll just return what's in the user info as is -
 elsewhere in client code, the SLG ID is packaged by itself without any affiliate info
 @param userInfo user info in notififcation
 @return the org ID in the notification payload
 */
+ (NSString *) getPushNotificationOrgID:(NSDictionary *)userInfo;

/// Registers all framework components
+ (void)registerComponentAPIs;

/// Creates with the specified information where, if the current organization param is true, tapping ok will notify the application that the user has received this push notification pre-login and accepted this message
+ (void) createInAppNotificationWithMessage:(NSString*) message andTitle:(NSString*) title fullOrgId:(NSString*)fullOrgId forCurrentOrg:(BOOL)isForCurrentOrg;

+ (void)didGetCommunityUpdateStatus: (NSNotification*) notification;

@end
