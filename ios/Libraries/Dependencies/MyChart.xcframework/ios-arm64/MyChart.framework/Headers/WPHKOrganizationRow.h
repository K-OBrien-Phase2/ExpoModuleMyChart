//
//  WPHKOrganizationRow.h
//
//  Created by Ben Drda on 8/6/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import <MyChart/WPHealthKit.h>
#import <MyChart/WPFlowsheetRowInfo.h>

/*!
 @brief Stores all the information needed about one row type in relation to a single organization.
 @author Ben Drda
 */
@interface WPHKOrganizationRow : NSObject <NSSecureCoding>
/*!
 @brief The TYPE of the row (from I FLO 27000)
 */
@property (nonatomic) WPFlowsheetRowDataType rowType;
/*!
 @brief The latest anchor corresponding to data that the server successfully received from Health for this row type.
 */
@property (nonatomic, strong, nonnull) HKQueryAnchor * anchor;
/*!
 @brief The last time the server got data from Health for this row type.
 */
@property (nonatomic, strong, nullable) NSDate *syncDate;
/*!
 @brief What unit the server expects data of this row type to be in when coming from Health
 */
@property (nonatomic, strong, nullable) NSString *unitString;
/*!
 @brief The HKSampleType corresponding to the row's data type. Used for customer-defined data types, null otherwise
 */
@property (nonatomic, nullable) HKSampleType* healthKitType;
/*!
 @brief The frequency at which the data should be cumulated, or None if all readings should be sent individually. Used for customer-defined data types
 */
@property (nonatomic) WPCumulationFrequency healthKitCumulationFrequency;

/*!
 @brief Initializes a row with the given model row info from the server. State of the row after this should have a type and unitString.
 @param info Row information we can get from the server from a Flowsheets/HealthKit/Info call
 */
- (nonnull instancetype)initWithRowInfo: (nonnull WPFlowsheetRowInfo *) info;

/*!
 @brief Initializes a row with no predefined information.
 */
- (nonnull instancetype)init;

@end
#endif
