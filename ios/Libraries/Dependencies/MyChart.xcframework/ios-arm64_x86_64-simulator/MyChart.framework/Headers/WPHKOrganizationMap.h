//
//  WPHealthKitDictionary.h
//
//  Created by Ben Drda on 8/6/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import <MyChart/WPHKOrganizationRow.h>
#import <MyChart/WPHKBackgroundResponse.h>
#import <MyChart/WPFlowsheetRowInfo.h>


/*!
 @brief Statuses possible we can get from an Info call
 */
typedef NS_ENUM(NSInteger, WPHKServerStatus) {
    kWPHKServerReady = 0,
    kWPHKServerActive = 1,
    kWPHKServerLinkedToOther = 2,
    kWPHKServerUndefined = -1,
} ;

/*!
 @brief Statuses possible that we can store on the device
 */
typedef NS_ENUM(NSInteger, WPHKDeviceStatus) {
    kWPHKDeviceUnlinked = 0,
    kWPHKDeviceLinked = 1,
} ;

/*!
 @brief Represents the relationship between HealthKit on this device and one organization.
 @author Ben Drda
 */
@interface WPHKOrganizationMap : NSObject <NSSecureCoding>
/*!
 @brief The url to send data to when we get new data from Health.
 */
@property (nonatomic, strong) NSString *dataSyncURL;
/*!
 @brief The name of the organization the device is linked to.
 */
@property (nonatomic, strong) NSString *name;
/*!
 @brief The status of the link between this device and organization.
 */
@property (nonatomic) WPHKDeviceStatus status;
/*!
 @brief The identifier of this pt/device to this organization.
 */
@property (nonatomic, strong) NSString *linkID;
/*!
 @brief ID of the server from the phonebook.
 */
@property (nonatomic, strong) NSString *orgID;
/*!
 @brief The maximum number of days back to look for new data.
 */
@property (nonatomic) NSUInteger maxSyncDays;
/*!
 @brief A dictionary with key:value types of @(WPFlowsheetRowDataType):WPHKOrganizationRow *
 */
@property (nonatomic, strong) NSMutableDictionary *rows;
/*!
 @brief set to YES if a background notification failed since the last time MyChart was opened.
 */
@property (nonatomic) BOOL didBackgroundFetchFailOnce;
/*!
 @brief The last time the server got data from Health for this organization.
 */
@property (nonatomic, strong) NSDate *syncDate;

/*!
 @brief Creates a new map with the given information
 @param linkID      the mapping to a server's OLK record
 @param orgID       the organization's id in the phonebook
 @param url         the url to post updates to, also from the phonebook
 @param name        the name of the organization, also from the phonebook
 @param status      whether the device is linked or not
 @param syncDays    how many days back we should allow
 */
-(instancetype) initWithLinkID:(NSString *)linkID orgID:(NSString *)orgID dataSyncURL:(NSString *)url name:(NSString *)name status:(WPHKDeviceStatus)status maxSyncDays:(NSUInteger)maxSyncDays;

/*!
 @brief Overloaded constructor that directly sets the rows
 @param rows    the set of WPHKOrganizationRows for the organization
 */
-(instancetype) initWithLinkID:(NSString *)linkID orgID:(NSString *)orgID dataSyncURL:(NSString *)url name:(NSString *)name status:(WPHKDeviceStatus)status maxSyncDays:(NSUInteger)maxSyncDays rows:(NSMutableSet *)rows;
/*!
 @brief Creates an HKOrganizationRow with the given info from the server and adds it to the map
 @param info    the row info from the server call to Flowsheets/HealthKit/Info
 */
-(void) addRowWithInfo: (WPFlowsheetRowInfo *) info;

/*!
 @brief Sets a row. it will overwrite any row of the same type already present
 @param row the row to set.
 */
-(void) setRow: (WPHKOrganizationRow *) row;

/*!
 @brief Grabs a row of the given type
 @param rowType the row type of the row we want for this organization
 */
-(WPHKOrganizationRow *) rowWithType: (WPFlowsheetRowDataType) rowType;

/*!
 @brief Verifies if a given row type is within the Epic release range
 */
+ (BOOL)isEpicReleasedRowType:(WPFlowsheetRowDataType)rowType;

/*!
 @brief Verifies that a given row can be safely handled, i.e., we have a mapping for it
 @param row the row
 @return        YES if we can handle the row, NO otherwise
 */
+ (BOOL)canHandleRow:(WPHKOrganizationRow *)row;

/*!
 @brief Verifies that a given row type can be safely handled, i.e., we have a mapping for it
 @param rowType the row type to evaluate
 @return        YES if we can handle the row type, NO otherwise
 */
+(BOOL) canHandleRowType: (WPFlowsheetRowDataType)rowType;


@end
#endif
