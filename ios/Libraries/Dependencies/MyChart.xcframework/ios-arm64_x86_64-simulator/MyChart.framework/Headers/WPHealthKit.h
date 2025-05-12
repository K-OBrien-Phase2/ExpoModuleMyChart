//
//  WPHealthKit.h
//  iChart
//
//  Created by Ben Drda on 8/5/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED

#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>
#import <MyChart/WPHKInfoResponse.h>
#import <MyChart/WPHealthKitInfo.h>
#import <MyChart/WPHKLinkResponse.h>
#import <MyChart/WPHKOrganizationMap.h>
#import <MyChart/WPHKUnlinkResponse.h>
#import <MyChart/WPDeviceInfo.h>
#import <MyChart/WPServer.h>
#import <MyChart/WPHealthKitEnums.h>


/*!
 @brief handles interactions between the ViewControllers, the OS, and HealthKit
 @author bdrda
 */
@interface WPHealthKit : NSObject

/*!
 @brief Returns whether or not the current device has Health on it and thus whether we can use HealthKit APIs
 */
@property (nonatomic, readonly) BOOL isHealthKitAvailable;

/*!
 @brief Current HealthKit configuration, if it's been loaded
 */
@property (nonatomic, strong) WPHealthKitInfo *hkInfo;

/*!
 @brief Get the health singleton
 @return the singleton
 */
+(WPHealthKit *)instance;

/*!
 @brief Launches a new request to get info regarding any existing HealthKit links from this device or this patient and whether a new link can be made.
 @param target  on completion, the target's action will be invoked as per a request
 @param action  on completion, this action on the target will be invoked as per a request
 */
-(void) getConfigWithTarget: (id) target andAction: (SEL) action;

/*!
 @brief updates the org maps and rows with new data from the server and makes sure the response jives with what's stored on the device
 @param response    the response object we got.
 */
-(void) didGetConfigWithResponse: (WPHKInfoResponse *) response;

/*!
 @brief Requests permissions to read data types from Health before linking. The block should call doLinkWithTarget
 @param didGetPermissions   a block to call after we're done getting permissions to read data types from Health.
 */
-(void) requestPermissionsWithCompletionBlock:(void(^)(BOOL))didGetPermissions;

/*!
 @brief launches a new request to link this device/patient with this organization via Health. The action should call didLinkWithResponse.
 @param target  the object the action should be invoked on as per a request
 @param action  the action that should be invoked as per a request
 */
-(void) doLinkWithTarget: (id) target andAction: (SEL) action;

/*!
 @brief completes the link on the device side and asks HealthKit for permission to read the given data types.
 @param response            the response from the link request
 @return                    YES if the link was a success. NO otherwise.
 */
-(BOOL) didLinkWithResponse:(WPHKLinkResponse *)response;

/*!
 @brief sends a request to unlink this patient and device from the current organization and from Health. Should call didUnlinkWithResponse afterwards.
 @param target  the object the action should be invoked on as per a request
 @param action  the action that should be invoked as per a request
 */
-(void) doUnlinkDevice:(WPDeviceInfo *)device withTarget:(id)target andAction: (SEL) action;

/*!
 @method        didUnlinkWithResponse:
 @brief updates the organization map after unlinking a device
 @param response    the response from the unlink call.
 @return            YES if the unlink succeeded. NO otherwise.
 */
-(BOOL) didUnlinkWithResponse: (WPHKUnlinkResponse *) response;

/*!
 @method checkHealthKitServerUrlChangesForOrg:andURL:
 @brief Checks the current stored map for orgID and update IC url if necessary
 @param orgID The orgID of the current logged in user
 @param homeURL The IC Url of the current org
 */
-(void) checkHealthKitServerUrlChangesForOrg:(NSString *)orgID andURL:(NSString *)homeURL;

/*!
 @brief check if this organization is getting/sending data for this row type
 @param orgID   the id of the organization from the phonebook.
 @param type    the type of the row from I FLO 27000.
 @return        YES if the row type is being synced. NO otherwise.
 */
-(BOOL) isOrg:(NSString *)orgID syncingRowType:(WPFlowsheetRowDataType)rowType;

/*!
 @brief indicates that a job from the job bank is complete. Run the next one.
 */
-(void) completeJob;

/*!
 @brief determine whether asking for permission for all the rows in the info call would trigger the Health permissions pop-up
 */
-(BOOL) arePermissionsNew;

/*!
 @brief makes sure all the information from this device is synced to all servers
 */
-(void) executeAllObserverQueries;

/*!
 @brief Converts the given Health sample and row to a single string value
 @param quantity        the HKQuantity from a Health sample or statistics object
 @param quantityType    the QuantityType the Quantity is in
 @param row             the config row built from the info request
 @param withDecimals        true if the string should be returned with no decimals, false if it should be returned with
 @return                the quantity converted to a numeric string
 */
-(NSString *) stringForQuantity:(HKQuantity *)quantity quantityType:(HKQuantityType *)quantityType andRow:(WPHKOrganizationRow *)row withDecimals:(bool)withDecimals;

/*!
 @brief Converts the given Health samples to a combined string value
 @param row                     the config row build from the info request
 @param firstSample   the first quantity sample from Health
 @param secondSample the second quantity sample from Health
 @param withDecimals false if decimals should be stripped from the formatted string, true if they should be included
 @return the samples combined into a single string
 */
- (NSString *) stringForCombinedRow:(WPHKOrganizationRow *)row firstSample:(HKQuantitySample *)firstSample secondSample:(HKQuantitySample *)secondSample withDecimals:(BOOL)withDecimals;

/*!
 @brief Gets a unit string for the given sample and row
 @param quantityType  the Health quantity type
 @param row                      the config for the row from the info request
 @return the Health unit string
 */
-(NSString *) unitStringForQuantityType:(HKQuantityType *)quantityType andRow:(WPHKOrganizationRow *)row;

/*!
 @brief Determines whether any of the types we've already asked permission correspond to Blood Pressure types
 @return    YES if Blood Pressure has been asked for, NO otherwise.
 */
-(BOOL) isBPInAskedForPermissions;

/*!
 @brief Resets the notification flag for all organizations
 */
- (void)applicationDidBecomeActive;

@end

#endif
