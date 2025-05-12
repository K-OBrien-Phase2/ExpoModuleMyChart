
//
//  WPMonitoredForArrivalAppointment.h
//  MyChart
//
//  Created by Landon Sykora on 8/16/19.
//  Copyright © 2019-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface WPMonitoredForArrivalAppointment : NSObject <IWPAppointment>

NS_ASSUME_NONNULL_BEGIN

@property (nonatomic, strong) NSString *CSN;
@property (nonatomic, strong) NSString *orgID;
@property (nonatomic, strong) NSString *firstUserID;
@property (nonatomic) NSInteger patientIndex;

@property (nonatomic, strong) NSDate *arrivalWindowStartTime;
@property (nonatomic, strong) NSDate *arrivalWindowEndTime;
@property (nonatomic, strong) NSDate *appointmentStartDate;
@property (nonatomic, strong) NSDate *displayDate;
@property (nonatomic) BOOL isInitiatedWithBeacons;
@property (nonatomic) CLLocationDegrees latitude;
@property (nonatomic) CLLocationDegrees longitude;
@property (nonatomic) CLLocationDistance radius;

@property (nonatomic) NSUUID * _Nullable iBeaconUUID;
@property (nonatomic) NSString * _Nullable iBeaconMajorValue;
@property (nonatomic) NSString * _Nullable iBeaconMinorValue;

extern NSString *const FIRST_USER_ID;
extern NSString *const ARRIVAL_WINDOW_START_TIME;
extern NSString *const ARRIVAL_WINDOW_END_TIME;
extern NSString *const APPOINTMENT_START_DATE;
extern NSString *const DISPLAY_DATE;
extern NSString *const DISPLAY_TIME;
extern NSString *const START_TIME;
extern NSString *const IS_INITIATED_WITH_BEACONS;
extern NSString *const IS_INITIATED_FROM_SNOOZE;
extern NSString *const IS_USER_INITIATED;
extern NSString *const CUSTOMER_ID;
extern NSString *const SELF_ARRIVAL_MECHANISM;

NS_ASSUME_NONNULL_END

extern CLLocationDistance const DEFAULT_RADIUS;


/**
* Convert this object to a CLRegion to be passed to Apple's location/bluetooth frameworks
*
* @return a CLRegion
*/
- (CLRegion * _Nonnull)getCLRegion;

/**
* Initialize with our WPAppointment object.
*
* @param appt The appt
* @param patientIndex patient index
*/
- (instancetype _Nonnull)initWithAppointment:(WPAppointment * _Nonnull)appt andPatientIndex: (NSInteger) patientIndex;

/**
 * Initialize with CLRegion.
 *
 * @param region The region
 */
- (instancetype _Nonnull)initWithRegion:(CLRegion * _Nonnull)region;

/**
 * Check whether the current date/time is within the arrival window for this appointment.
 *
 * @return YES if current date/time within arrival window, otherwise NO
 */
- (BOOL) isCurrentDateWithinArrivalWindow;

/**
* Get the number of seconds until the arrival window begins.
* Could be negative if arrival window begins in the past.
*
* @return A double indicating number of seconds until the arrival window begins
*/
- (double) getSecondsUntilArrivalWindowFromCurrentDate;

/**
* Convert this object to a JSON Mutable Dictionary
*
* @return an NSMutableDictionary
*/
- (NSMutableDictionary * _Nonnull)getRegionMetadataDictionary;

/**
 * Helper to get the display time for an appoiontment arrival
 */
+ (NSDate * _Nullable)getDisplayTimeForAppointment:(WPAppointment * _Nonnull)appointment;

@end
