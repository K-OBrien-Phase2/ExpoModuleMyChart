//
//  WPHealthKit+TypeMappings.h
//
//  Created by Ben Drda on 9/23/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import <MyChart/WPHealthKit.h>
#import <MyChart/WPHealthKit+TypeMappings.h>

@interface WPHealthKit (TypeMappings)

/*!
 @brief Convert the row type (I FLO 27000) to a HealthKit sample type
 @param rowType value from I FLO 27000
 @return        the HKSampleType for the value or nil if there is no mapping.
 */
- (HKSampleType *)hkSampleTypeForRowType:(WPFlowsheetRowDataType)rowType;

/*!
 @brief Convert the row type (I FLO 27000) to a HealthKit sample type
 @param rowType value from I FLO 27000
 @param primaryOrgID the organization this data will be sent to
 @return the HKSampleType for the value or nil if there is no mapping.
 */
- (HKSampleType *)hkSampleTypeForRowType:(WPFlowsheetRowDataType)rowType forOrg: (NSString *) primaryOrgID;

/*!
 @brief Convert the row type (I FLO 27000) to a healthkit quantity type
 @param rowType value from I FLO 27000
 @return        the HKQuantityType for the value or nil if there is no mapping.
 */
-(HKQuantityType *) healthKitTypeForRowType: (WPFlowsheetRowDataType) rowType;

/*!
 @brief Convert the row type (I FLO 27000) to a healthkit quantity type
 @param rowType value from I FLO 27000
 @param primaryOrgID the organization this data will be sent to
 @return the HKQuantityType for the value or nil if there is no mapping.
 */
-(HKQuantityType *) healthKitTypeForRowType: (WPFlowsheetRowDataType) rowType forOrg: (NSString *) primaryOrgID;

/*!
 @brief Get the default unit in an HKUnit for the given row type (I FLO 27000).
 @param rowType value from I FLO 27000
 @return        default unit for the type
 */
-(HKUnit *) unitForRowType:(WPFlowsheetRowDataType)rowType;

/*!
 @brief convert the row type to the name of the icon in the WPTheme object
 @param rowType value from I FLO 27000
 @return        name of an image from the WPTheme object
 */
- (NSString *) imageKeyForRowType: (WPFlowsheetRowDataType) rowType;

/*!
 @brief convert the row type to the name of the type
 @param rowType value from I FLO 27000
 @return        name of the row type to display
 */
- (NSString *) nameForRowType: (WPFlowsheetRowDataType) rowType;

/// Check whether the flowsheet row data type should be cumulated by day
/// @param rowType the flowsheet row data type
/// @param primaryOrgID  the organization this data will be sent to
- (BOOL) shouldCumulateByDay: (WPFlowsheetRowDataType) rowType forOrg: (NSString *) primaryOrgID;

/// Check whether the flowsheet row data type should be cumulated by hour
/// @param rowType the flowsheet row data type
/// @param primaryOrgID  the organization this data will be sent to
- (BOOL) shouldCumulateByHour: (WPFlowsheetRowDataType) rowType forOrg: (NSString *) primaryOrgID;

/// Check whether the flowsheet row data type represents combined systolic and diastolic blood pressure
/// @param rowType the flowsheet row data type
+ (BOOL) isCombinedBloodPressureType: (WPFlowsheetRowDataType) rowType;

@end
#endif
