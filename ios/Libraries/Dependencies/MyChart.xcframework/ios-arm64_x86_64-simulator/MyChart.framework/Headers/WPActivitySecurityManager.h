//
//  WPActivitySecurityManager.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/23/17.
//  Copyright © 2017-2024 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPActivityIdentifiers.h>
@class WPPatient;
@import Authentication;

// This should switch over to using the PEComponentAccessResult most likely, or something shared.
/**
 * @enum WPActivityAccessResult
 * @brief Access result values for accessing MyChart standard activities
 * @constant WPActivityAccessResultAccessAllowed Allowed to access
 * @constant WPActivityAccessResultNotAuthenticated User is not logged in
 * @constant WPActivityAccessResultMissingServerUpdate Web service is not available
 * @constant WPActivityAccessResultMissingSecurity Lacks required security points
 * @constant WPActivityAccessResultMissingAppPermissions Lacks necessary app-level settings, like Location Services permissions
 * @constant WPActivityAccessResultUserDisabledSetting User has manually disabled an in-app setting at the User level, preventing access
 * @constant WPActivityAccessResultDeprecated Activity is deprecated
 * @constant WPActivityAccessResultDeviceVersionNotSupported The user's device does not support this feature.
 * @constant WPActivityAccessResultUnknown Security couldn't be validated; the corresponding activity should only be launched if it is reasonable to expect that the user should have access
 * @constant WPActivityAccessResultMenusNotLoaded The homepage menus weren't loaded, and are required to validate security for the given activity. Check the setting LoadHomepageMenus in the SettingsForLibraryBuilds property list
 * @warning If this enum is updated, the enum in WPAPIAccessResult must also be updated
 */
typedef NS_ENUM(NSInteger, WPActivityAccessResult) {
    WPActivityAccessResultAccessAllowed = 1,
    WPActivityAccessResultNotAuthenticated = 2,
    WPActivityAccessResultMissingServerUpdate = 3,
    WPActivityAccessResultMissingSecurity = 4,
    WPActivityAccessResultMissingAppPermissions = 5,
    WPActivityAccessResultUserDisabledSetting = 6,
    WPActivityAccessResultDeprecated = 7,
    WPActivityAccessResultDeviceVersionNotSupported = 8,
    WPActivityAccessResultUnknown = 9,
    WPActivityAccessResultMenusNotLoaded = 10,
    WPActivityAccessResultSecurityNotLoaded = 11,
};

/*!
 * @brief WPAPIActivityAccessResultKey - Use this key to retrieve a value for checking the
 *       access result for the given activity. This key will be in the userInfo dictionary of
 *       an NSError that has a WPAPIRequestControllerErrorCodeNoAccess error code.
 */
extern NSString * const WPAPIActivityAccessResultKey;

@interface WPActivitySecurityManager : NSObject

/**
 * @brief Checks security and webservices to determine if patient can access activity
 * @return Accessible or not
 **/
+ (BOOL)canPatient:(WPPatient *)patient accessActivity:(WPActivity)activity;

/**
 * @brief Checks security and webservices to determine if patient can access activity
 * @return Accessible or not
 **/
+ (BOOL)canPatient:(WPPatient *)patient accessEncounterActivity:(WPActivity)activity;

/**
 * @brief Checks security and webservices to determine if patient can access activity
 * @return Access result
 **/
+ (WPActivityAccessResult)accessResultForPatient:(WPPatient *)patient andActivity:(WPActivity)activity;

/**
 * @brief Checks security and webservices to determine if patient can access activity
 * @return Access result
 **/
+ (WPActivityAccessResult)accessResultForEncounter:(WPPatient *)patient andActivity:(WPActivity)activity;

/**
 * @brief Convienence method, Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access activity
 * @return Accessible or not
 **/
+ (BOOL)canCurrentPatientAccessActivity:(WPActivity)activity;

/**
 * @brief Convienence method, Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access activity
 * @return Accessible or not
 **/
+ (BOOL)canCurrentPatientAccessActivity:(WPActivity)activity withUserInfo:(NSDictionary*)userInfo;

/**
 * @brief Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access activity
 * @return Access result
 **/
+ (WPActivityAccessResult)accessResultCurrentPatientForActivity:(WPActivity)activity;

/**
 * @brief Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access activity.
 * May contain extra information in userInfo dict
 * @return Access result
 **/
+ (WPActivityAccessResult)accessResultCurrentPatientForActivity:(WPActivity)activity withUserInfo:(NSDictionary *)userInfo;

+ (WPActivityAccessResult)accessResultForPerson:(MyChartPerson *)person andActivity:(WPActivity)activity withUserInfo:(NSDictionary *)userInfo;

/**
 * @brief Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access web scheduling
 * @returns True if current user and patient can access mobile optimized scheduling, otherwise false
 **/
+ (BOOL)canAccessWebScheduling;

/**
 * @brief Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access web rescheduling
 * @return True if current user and patient can access rescheduling, otherwise false
 **/
+ (BOOL)canAccessRescheduling;

/**
 * @brief Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access alerts
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultforAlertsForPatient:(WPPatient *)patient;

/**
 * @brief Checks security, webservices, and account settings to determine if AT LEAST ONE patient associated with the logged in user can access appointment monitoring. If so, the access result returned will be WPActivityAccessResultAccessAllowed. Reason: a user might not have the security to monitor their own appointments, but they are allowed to monitor for their subjects
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultforAppointmentMonitoring;

/**
 * @brief Checks security and webservices to determine whether a user can access appointment check-in
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultForAppointmentCheckIn;

/**
 * @brief Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access goals
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultForGoalsForCurrentPatient;

/**
 * @brief Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access careteam
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultForCareTeamForCurrentPatient;

/**
 * @brief Checks user and patient security class and current server's available webservices
 *      to determine if current patient can access campaigns
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultForCampaignsForCurrentPatient;

/**
 * @brief Checks user and patient security class and current server's available webservices to determine if eCheck-in can be accessed.
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultForECheckInForCurrentPatient;

/**
 * @brief Checks user and patient security class and current server's available webservices to determine if eCheck-in can be accessed.
 * @param patient the patient check eCheck-in access for
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultForECheckInForPatient:(WPPatient *)patient;

/**
 * @brief Determines which WPActivity should be launched for health maintenence
 * @return WPActivity to use for health maintenence
 **/
+ (WPActivity)determineActivityForHealthMaintenance;

/**
 * @brief Determines which WPActivity should be launched for To Do
 * @return WPActivity to use for To Do
 **/
+ (WPActivity)determineActivityForToDoFor:(WPActivity)proposedActivity;
/**
 * @brief Determines which WPActivity should be launched for the MyChart Now home page
 * @param mode - the web mode for the link
 */
+ (WPActivity)determineActivityForMyChartNowHomeWithMode:(NSString*) mode;

/**
 * @brief Checks user security and available PE APIs to determine if the current user can access the new home page
 * @return True if current user can access the new home page, false if not
 */
+ (BOOL)canAccessHomepage;

/**
 * @brief Checks user and patient security class and current server's available webservices to determine if Covid Status can be accessed.
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultForCovidStatusForCurrentPatient;

/**
 * @brief Checks current server's available webservices and phonebook settings to determine if current user can access the Apple Watch feature
 * @return Access result
 */
+ (WPActivityAccessResult)accessResultForAppleWatchFeature;

/// Can the user access the homepage
+ (WPAPIAccessResult)accessResultForHomepage;

/// Converts the given access result into the corresponding component enum value
+ (PEComponentAccessResult)translateAccessResult:(WPActivityAccessResult)accessResult;
@end
