//
//  WPFlowsheetRowInfo.h
//
//  Created by Ben Drda on 8/12/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import <MyChart/WPFlowsheetRow.h>

/*!
 @brief Information about a flowsheet row as part of the Flowsheets/Health/Info call. This is used to set up background sync
 @author Ben Drda
 */
@interface WPFlowsheetRowInfo : WPObject
/*!
 @brief The type of the row from I FLO 27000. Note that for customer-defined data types, this will just return the int value if it's not defined within the client's enum
 */
@property (nonatomic) WPFlowsheetRowDataType type;
/*!
 @brief The unit of the row. Accepts HKUnit notation. Otherwise uses a default.
 */
@property (nonatomic, nullable) NSString *unit;

/*!
 @brief The HKSampleType corresponding to the row's data type. Used for customer-defined data types, null otherwise
 */
@property (nonatomic, nullable) HKSampleType* healthKitType;

/*!
 @brief The name of the icon to show for the row's data type. Used for customer-defined data types, null otherwise
 */
@property (nonatomic, nullable) NSString* healthKitIconKey;

/*!
 @brief The frequency at which the data should be cumulated, or None if all readings should be sent individually. Used for customer-defined data types
 */
@property (nonatomic) WPCumulationFrequency healthKitCumulationFrequency;

@end

#endif
