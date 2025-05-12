//
//  WPActivityManager.h
//  
//
//  Created by Yash Vaka on 11/23/15.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//
//
#import <MyChart/WPActivityIdentifiers.h>

@class WPCustomFeature;
@class WPPatient;
@class WPSpringboardInfo;
@class WPJustScheduledDetails;

typedef NS_ENUM(NSInteger, WPActivityPresentationStyle) {
    kWPActivityPresentationStylePush,
    kWPActivityPresentationStyleModal,
};

extern NSString * const kWPActivityDetailIdKey; //Key for the ID used for populating detailed activities.
extern NSString * const kWPActivityNowEncounterCsnKey; // Key to retrieve the now encounter CSN
extern NSString * const kWPActivityCustomFeatureKey; //Key to retrieve the WPCustomFeature for custom apps
extern NSString * const kWPActivityGenericMoJumpLinkKey; //Key to retrieve the epichttp url for generic MO / pinch-to-zoom views
extern NSString * const kWPActivityOrgIdKey; //Key to retrieve the epichttp url for generic MO / pinch-to-zoom views
extern NSString * const kWPDrivingDrectionsConsentKey; //Key to retrieve user default for driving directions consent


@interface WPActivityContainer : NSObject

@property (nonatomic, assign) WPActivity activityType;              //Null if there is a custom feature
@property (nonatomic, strong) WPCustomFeature *customFeature;

@end

@interface WPActivityManager : WPObject

/**!
 * @brief The user friendly name for the activity. If you create a new springboard activity,
 * make sure to add a user friendly name here AND in iOSFeatures.xml in Interconnect.
 */
+ (WPActivity)activityFromString:(NSString *)activity;

/**!
 * @brief Gets the activity descriptor for the corresponding MyChart Now feature if there is one
 **/
+ (NSString *)myChartNowFeatureTypeDescriptorForActivity:(WPActivity)activity;

/**!
 * @brief Returns an array of activity containers that the given patient can access
 **/
+ (NSMutableArray *)getActivitiesForPatient:(WPPatient *)patient;

 /**!
 * @brief Doesn't check security, just returns the appropraite springboard item for an activity.
 *Does check for custom feature images/names from the custom feature request
 **/
+ (WPSpringboardInfo *)springboardItemForActivity:(WPActivity)activity;

 /**!
 * @brief Gets view controller for associated activity. UserInfo is only necessary for details activities.
 * Checks security  for current patient first.
 **/
+ (UIViewController *)controllerForActivity:(WPActivity)activity withUserInfo:(NSDictionary *)userInfo;

 /**!
 * @brief Convenience function that checks security for current patient, retrieves view controller, checks presentation style and then
 * appropriately launches the view controller for a given activity. Shows an error if activity cannot be accessed
 **/
+ (NSInteger)launchActivity:(WPActivity)activity withUserInfo:(NSDictionary *)userInfo inNavigationController:(UINavigationController *)navigationController;

/**!
 * @brief Convenience function that checks security for current patient, retrieves view controller, checks presentation style and then
 * appropriately launches the view controller for a given activity. If showError is true if the view controller cannot be launched an error alert is show.
 **/
+ (NSInteger)launchActivity:(WPActivity)activity withUserInfo:(NSDictionary *)userInfo inNavigationController:(UINavigationController *)navigationController showErrorOnNull:(BOOL)showError;

 /**!
 * @brief Determines which method (push or present) should be used to launch an activity
 **/
+ (WPActivityPresentationStyle)presentationStyleForActivity:(WPActivity)activity withDeepLinkUrl:(NSString *)deepLinkUrl;


/// Get a generic MO webview to display a supported epichttp link.
/// @param userInfo Dictionary containing the parameters to be sent to the webview. This should contain the epichttp link under the key kWPActivityGenericMOJumpLinkKey
+ (WPComponentContainerViewController *)getGenericWebActivityForUserInfo:(NSDictionary *)userInfo;

+ (WPComponentContainerViewController *)getGenericWebActivityForUserInfo:(NSDictionary *)userInfo shouldRefreshWebViews:(BOOL)refreshWebViews;

/// Checks if the activity is related to comm center and has a legacy/native counterpart
/// - Parameter activity: activity to check
/// - Returns: true if the activity has a legacy/native messaging counterpart, false otherwise
+ (BOOL)isCommCenterActivity:(WPActivity)activity NS_SWIFT_NAME(isCommCenterActivity(_:));
@end

