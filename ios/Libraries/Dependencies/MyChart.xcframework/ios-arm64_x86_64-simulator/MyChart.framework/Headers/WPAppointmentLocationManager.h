//
//  WPAppointmentLocationManager.h
//  MyChart
//
//  Created by Joe Soultanis on 2/3/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//
#import <MyChart/WPAppointment.h>
#import <MyChart/WPMonitoredForArrivalAppointment.h>

// Enum for "Hello Patient" status
typedef NS_ENUM(NSInteger, WPAppointmentArrivalFeatureStatus) {
    WPAppointmentArrivalFeatureStatusDisabled = 1,
    WPAppointmentArrivalFeatureStatusOnboardingNotShown = 2,
    WPAppointmentArrivalFeatureStatusMissingSetupRequirement = 3,
    WPAppointmentArrivalFeatureStatusEnabled = 4
};

@class WPMonitoredForArrivalAppointment;

//  forward declaration since these protocols live in Swift
@protocol IWPMonitoredAppointmentArrivalDelegate;
@protocol IWPMonitoredAppointmentUpdateDelegate;
@protocol IWPAppointmentArrivalCheckInDelegate;


/**
 * @brief A manager responsible for making future appointment web service requests and updating the monitored appointment regions inside WPLocationManager.
 */
@interface WPAppointmentLocationManager : NSObject

@property (nonatomic, strong) WPRequest * _Nullable request;

/**
 * This stores a reference to userInfo from a notification that the user arrived to an appointment. Will be cleared out once consumed in initiateAppointmentArrivalMonitoring.
 */
@property (nonatomic, strong) NSDictionary * _Nullable userInfo;

@property (nonatomic, weak) id <IWPMonitoredAppointmentArrivalDelegate> _Nullable arrivalDelegate;

@property (nonatomic, weak) id <IWPMonitoredAppointmentUpdateDelegate> _Nullable updateDelegate;

@property (nonatomic, weak) id <IWPAppointmentArrivalCheckInDelegate> _Nullable checkInDelegate;

@property (nonatomic) NSInteger soonestEligibleAppointmentPatientIndex;
@property (nonatomic, strong) WPAppointment * _Nullable soonestEligibleAppointmentForAllPatients;

// Flag indicating if the update is in progress. No further requests should be made if this is set to true
@property (assign) BOOL updateInProgress;


//returns the instance of this class, which is a singleton
+ (instancetype _Nonnull)sharedInstance;

/**
 * Returns the blocklisted appointments for a patient
 * @param patIndex Patient index for whom to return the blocklist
 */
- (nonnull NSArray *)getBlocklistedApptsForPatientAt:(NSInteger)patIndex;

/**
 * Sets the entire appt blocklist for a patient
 * @param patIndex Patient index for whom to set the blocklist
 * @param newCSNBlocklist Blocklist of appointments to ignore for Hello Patient
 */
- (void)setBlocklistedApptsForPatientAt:(NSInteger)patIndex withNewCSNBlocklist:(NSArray *_Nonnull)newCSNBlocklist NS_SWIFT_NAME(setBlocklistedApptsForPatient(at:withNewCSNBlocklist:));


/**
 * Once identifying an eligible appointment, check whether we've displayed Appointment Arrival Onboarding before and whether we need to.
 *
 * @param nextEligibleAppt the next eligible appointment for Appointment Arrival, or nil if there isn't one
 * @param patientIndex the index of the patient to whom the eligible appointment belongs
 */
- (void)checkArrivalStatusAndPermissionsFor:(WPAppointment * _Nullable)nextEligibleAppt atPatientIndex:(NSInteger)patientIndex;

/**
* Called on logout to clean up state of singleton
*/
- (void)cleanupOnLogout;

/**
 * Clean up regions that have expired.
 */
+ (void)clearExpiredAppointmentRegions;

/**
 * Called when the user marks themself as not here yet. Schedules the appointment to be reprompted after a time
 */
- (void)snoozeArrival:(NSDictionary * _Nonnull)userInfo;

/**
 * Handle the case where a region has been tripped and  user has arrived.
 *
 * @param appointmentRegion The appointment for which they've arrived.
 */
+ (void)handleArrival:(id <IWPAppointment> _Nullable)appointmentRegion;
    
/**
 * Called when a user selects that they no longer want to be reminded about an appointment
 */
- (void)cancelSnoozingForPatient:(NSInteger)patIndex andCSN:CSN;

/**
* Prompts the user about hello patient
 @param userInfo Dictionary of information about the visit that is being prompted
 */
+ (void)promptUserAfterArrival:(NSDictionary * _Nonnull)userInfo;

/**
* Get appointment arrival view controller to be displayed to user once they've arrived to appt and logged in. This view controller will not support appt snoozing
*
* @param CSN CSN of appt for which they've arrived.
* @param dateTime Date/time of appt for which they've arrived.
* @param index Index of patient
* @param initiatedWithBeacons Whether the workflow was initiated with Bluetooth beacons.
* @param initiatedFromUser Whether the workflow was initiated with locationless self-arrival.
* @return The view controller
*/
+ (UIViewController * _Nullable)getArrivalViewControllerWithCSN:(NSString * _Nonnull)CSN appointmentTime:(NSDate * _Nullable)dateTime andPatientIndex:(NSInteger)index andInitiatedWithBeacons:(BOOL)initiatedWithBeacons andInitiatedFromUser:(BOOL)initiatedFromUser;

/**
* Get appointment arrival view controller to be displayed to user once they've arrived to appt and logged in. This view controller will not support appt snoozing
*
* @param CSN CSN of appt for which they've arrived.
* @param dateTime Date/time of appt for which they've arrived.
* @param index Index of patient
* @param initiatedWithBeacons Whether the workflow was initiated with Bluetooth beacons.
* @param initiatedFromUser Whether the workflow was initiated with locationless self-arrival.
* @param ticklerMethod The tickler method to audit if entered eCheck-In through a self-arrival push notification
* @return The view controller
*/
+ (UIViewController * _Nullable)getArrivalViewControllerWithCSN:(NSString * _Nonnull)CSN appointmentTime:(NSDate * _Nullable)dateTime andPatientIndex:(NSInteger)index andInitiatedWithBeacons:(BOOL)initiatedWithBeacons andInitiatedFromUser:(BOOL)initiatedFromUser andTicklerMethod:(NSString * _Nullable)ticklerMethod;

/**
* Get appointment arrival view controller to be displayed to user once they've arrived to appt and logged in. This view controller supports appt snoozing
*
* @param CSN CSN of appt for which they've arrived.
* @param dateTime Date/time of appt for which they've arrived.
* @param index Index of patient
* @param initiatedWithBeacons Whether the workflow was initiated with Bluetooth beacons.
* @param enableSnooze Whether appointment snoozing should be enabled
* @param initiatedFromSnooze Whether the workflow was initiated from a snooze
* @param arrivedApptOrganizationID The organization ID for the appt
* @param firstUserID The ID of the user associated with the appt
* @return The view controller
*/
+ (UIViewController * _Nullable)getArrivalViewControllerWithCSN:(NSString * _Nonnull)CSN appointmentTime:(NSDate * _Nullable)dateTime andPatientIndex:(NSInteger)index andInitiatedWithBeacons:(BOOL)initiatedWithBeacons andEnableSnooze:(BOOL)enableSnooze andInitiatedFromSnooze:(BOOL)initiatedFromSnooze  andInitiatedFromUser:(BOOL)initiatedFromUser andOrgID:(NSString* _Nonnull)arrivedApptOrganizationID andFirstUserID:(NSString* _Nonnull)firstUserID;

/**
* Get the web appointment arrival view controller to be displayed to user once they've arrived to appt and logged in. This view controller supports appt snoozing.
* Requires server support for MO appointment arrival - check WPUtil_Misc isMOAppointmentArrivalAvailable before calling this.
*
* @param CSN CSN of appt for which they've arrived.
* @param isCSNEncrypted Is the provided CSN encrypted. Only respected in MO Appointment Arrival.
* @param selfArrivalMechanism selfArrivalMechanism used to initiated Appointment Arrival.
* @param ticklerMethod The tickler method to audit if entered eCheck-In through a self-arrival push notification
* @return The view controller
*/
+ (UIViewController * _Nullable)getWebArrivalViewControllerWithCSN:(NSString * _Nonnull)CSN andIsCSNEncrypted:(BOOL)isCSNEncrypted  selfArrivalMechanism:(WPAPIAppointmentSelfArrivalMechanism)selfArrivalMechanism ticklerMethod:(NSString * _Nullable)ticklerMethod;

/**
* Get appointment arrival view controller to be displayed to user once they've arrived to appt and logged in. This view controller supports appt snoozing
*
* @param CSN CSN of appt for which they've arrived.
* @param isCSNEncrypted Is the provided CSN encrypted. Only respected in MO Appointment Arrival.
* @param dateTime Date/time of appt for which they've arrived.
* @param index Index of patient
* @param initiatedWithBeacons Whether the workflow was initiated with Bluetooth beacons.
* @param enableSnooze Whether appointment snoozing should be enabled
* @param initiatedFromSnooze Whether the workflow was initiated from a snooze
* @param arrivedApptOrganizationID The organization ID for the appt
* @param firstUserID The ID of the user associated with the appt
* @param arrivalWindowEndTime Date/time of the arrival end window.
* @return The view controller
*/
+ (UIViewController * _Nullable)getArrivalViewControllerWithCSN:(NSString * _Nonnull)CSN andIsCSNEncrypted:(BOOL)isCSNEncrypted appointmentTime:(NSDate * _Nullable)dateTime andPatientIndex:(NSInteger)index andInitiatedWithBeacons:(BOOL)initiatedWithBeacons andEnableSnooze:(BOOL)enableSnooze andInitiatedFromSnooze:(BOOL)initiatedFromSnooze  andInitiatedFromUser:(BOOL)initiatedFromUser andOrgID:(NSString* _Nonnull)arrivedApptOrganizationID andFirstUserID:(NSString* _Nonnull)firstUserID andArrivalWindowEndTime:(NSDate * _Nullable)arrivalWindowEndTime;

/**
* Get appointment arrival view controller to be displayed to user once they've arrived to appt and logged in. This view controller supports appt snoozing
*
* @param CSN CSN of appt for which they've arrived.
* @param isCSNEncrypted Is the provided CSN encrypted. Only respected in MO Appointment Arrival.
* @param dateTime Date/time of appt for which they've arrived.
* @param index Index of patient
* @param initiatedWithBeacons Whether the workflow was initiated with Bluetooth beacons.
* @param enableSnooze Whether appointment snoozing should be enabled
* @param initiatedFromSnooze Whether the workflow was initiated from a snooze
* @param arrivedApptOrganizationID The organization ID for the appt
* @param firstUserID The ID of the user associated with the appt
* @param arrivalWindowEndTime Date/time of the arrival end window.
* @param ticklerMethod The tickler method to audit if entered eCheck-In through a self-arrival push notification
* @return The view controller
*/
+ (UIViewController * _Nullable)getArrivalViewControllerWithCSN:(NSString * _Nonnull)CSN andIsCSNEncrypted:(BOOL)isCSNEncrypted appointmentTime:(NSDate * _Nullable)dateTime andPatientIndex:(NSInteger)index andInitiatedWithBeacons:(BOOL)initiatedWithBeacons andEnableSnooze:(BOOL)enableSnooze andInitiatedFromSnooze:(BOOL)initiatedFromSnooze  andInitiatedFromUser:(BOOL)initiatedFromUser andOrgID:(NSString * _Nonnull)arrivedApptOrganizationID andFirstUserID:(NSString * _Nonnull)firstUserID andArrivalWindowEndTime:(NSDate * _Nullable)arrivalWindowEndTime andTicklerMethod:(NSString * _Nullable) ticklerMethod;

/**
 * Cancels the scheduled local notification for snooze
 */
+ (void)cancelScheduledSnoozeArrivalLocalNotification;

/**
 * Display alert indicating check in failed.
 */
- (void)showCheckInFailedAlert;

/**
* Get alert displayed to user if they arrive for an appointment and are on the login screen
*
* @return The alert controller
*/
+ (UIAlertController * _Nonnull)getArrivalAlertForLoginScreen:(NSDictionary * _Nonnull)userInfo;

/**
* Show an alert to the patient to begin the arrival workflow.
*
* @param userInfo userInfo dictionary from the notification
*/
+ (void)showAppointmentArrivalInAppNotificationWithPayload:(NSDictionary * _Nonnull)userInfo;
    

/**
 * Adds an appt csn to the appt blocklist
 * @param patIndex Patient index for whom to add the appt
 * @param apptCSN Appt to blocklist
 */
- (void)addBlocklistedApptForPatientAt:(NSInteger)patIndex andCSN:(NSString * _Nonnull)apptCSN;


/**
 * Get the current status of the Appointment Arrival feature
 *
 * @return Enum value describing the current status of the Appointment Arrival feature
 */
+ (WPAppointmentArrivalFeatureStatus)getAppointmentArrivalFeatureStatus;


@end
