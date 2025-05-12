//
//  WPAppointment.h
//
//  Created by Epic on 6/8/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>
#import <MyChart/WPProvider.h>
#import <MyChart/WPCopay.h>
#import <MyChart/WPCategory.h>
#import <MyChart/WPTelemedicineConstants.h>
#import <MyChart/WPSurgicalCase.h>
#import <MyChart/WPWaitListEntry.h>
#import <MyChart/WPEVisit.h>
#import <MyChart/WPECheckInStep.h>
#import <MyChart/WPCustomFeature.h>
@import ToDo;
#import <ToDo/ToDo-Swift.h>

@class WPAptConfirmInfo;
@class WPAppointmentTimeStrings;
@class WPJustScheduledDetails;
@class WPFeatureDetails;

typedef NS_ENUM(NSInteger, WPAppointmentConfirmStatus)  {
    kWPAppointmentConfirmStatusUnknown = 0,
    kWPAppointmentConfirmStatusConfirmed = 1,
    kWPAppointmentConfirmStatusNotConfirmed = 2,
    kWPAppointmentConfirmStatusRemoved = 3,
} ;

typedef NS_ENUM(NSInteger, WPArrivalAllowedStatus) {
    kWPArrivalAllowedUnknown = 0,
    kWPArrivalAllowedNo = 1,
    kWPArrivalAllowedYes = 2,
};

typedef NS_ENUM(NSInteger, WPAppointmentArrivalStatus)  {
    kWPAppointmentNotArrived = 0,
    kWPAppointmentSignedIn = 1,
    kWPAppointmentCheckedIn = 2,
    kWPAppointmentEDArrived = 3,
} ;

typedef NS_ENUM(NSInteger, WPECheckInStatus) {
    kWPECheckInStatusUnknown = 0,
    kWPECheckInStatusNotOffered = 1,
    kWPECheckInStatusNotYetAvailable = 2,
    kWPECheckInStatusNotStarted = 3,
    kWPECheckInStatusInProgress = 4,
    kWPECheckInStatusCompleted = 5,
    kWPECheckInStatusNotNeeded = 6
} ;

typedef NS_ENUM(NSInteger, WPSurgeryTime) {
    kWPSurgeryTimeNotSet,
    kWPSurgeryTimeAM,
    kWPSurgeryTimePM,
    kWPSurgeryTimeNull,
} ;

typedef NS_ENUM(NSInteger, WPVisitCategory) {
    kWPVisitCategoryUnknown = 0, //pre 8.6 server
    kWPVisitCategoryUpcomingAppointment = 1,
    kWPVisitCategoryUpcomingSurgery = 2,
    kWPVisitCategoryPastAppointment = 3,
    kWPVisitCategoryPastAdmission = 4,
    kWPVisitCategoryPastED = 5,
    kWPVisitCategoryPastSurgery = 6,
    kWPVisitCategoryUpcomingAdmission = 7,
    kWPVisitCategoryUpcomingLD = 8,
    kWPVisitCategoryUpcomingED = 9,
} ;

typedef NS_ENUM(NSInteger, WPAVSType) {
    kWPAVSTypeCategoryUnknown = 0, //pre 9.1 server
    kWPAVSTypeCategoryNative = 1,
    kWPAVSTypeCategoryMobileOptimized = 2,
    kWPAVSTypeCategorySinglePDF = 3,
    kWPAVSTypeCategoryMultiplePDFs = 4,
} ;

typedef NS_ENUM(NSInteger, WPVisitModeType) {
    kWPVisitModeTypeUnknown = 0,
    kWPVisitModeTypeInPerson = 1,
    kWPVisitModeTypeVideo = 2,
    kWPVisitModeTypeTelephone = 3,
    kWPVisitModeTypeClinicToClinicVideo = 4,
    kWPVisitModeTypeEVisit = 5,
    kWPVisitModeTypePatientNotPresent = 6,
} ;

/**
 * \brief Holds references to appointment info
 *
 * This class may be serialized
 */
@interface WPAppointment : WPObject

extern NSString * _Nonnull const IS_EXTERNAL;
extern NSString * _Nonnull const IS_EVISIT;
extern NSString * _Nonnull const IS_INPATIENT;

@property (nonatomic, strong, nullable) NSString* dat;                        /*< DAT? */
@property (nonatomic, strong, nullable) NSDate* date;                       /*< Appointment date */
@property (nonatomic, strong, nullable) NSDate* dischargeDate;
@property (nonatomic, assign) BOOL isTimeNull;                /*  Past appointments can have a null time */
@property (nonatomic, strong, nullable) WPCategory* visitType;                /*< Type of visit */
@property (nonatomic, assign) NSInteger durationMinutes;            /*< Expected visit duration */

@property (nonatomic, strong, nullable) NSMutableArray *componentAppointments; // composite visits (panels) will have component visits
@property (nonatomic, assign, readonly) NSInteger componentAppointmentCount; 

@property (nonatomic, strong, nullable) WPProvider* primaryProvider;                 /*< The provider for this apt */
@property (nonatomic, strong, nullable) WPDepartment *primaryDepartment; // primary department for the appointment (may be different from provider.department)
@property (nonatomic, strong, nullable) NSString *primaryPhone; // the phone that should be used for things like cancelling
@property (nonatomic, assign) BOOL hasPrimaryPhone; // computed property checking to see if primary phone is present

@property (nonatomic, assign) BOOL cancelRequestAllowed;
@property (nonatomic, assign) BOOL cancelDirectAllowed;
@property (nonatomic, assign) BOOL cancelRequestSent;               /*< This does NOT mean a cancel request was sent.
                                                                     It means that the direct cancelation is in progress
                                                                     (may have been backed up due to queues or something else) */
@property (nonatomic, assign) BOOL isSurgery;                       /*< Is this a surgery appointment? */
@property (nonatomic, assign) BOOL isClinicalInformationAvailable;
@property (nonatomic, assign) BOOL isClinicalNoteAvailable;
@property (nonatomic, assign) BOOL isNotesOnly;
@property (nonatomic, assign) BOOL isTelemedicine;
@property (nonatomic, assign) BOOL canJoinVideoVisit;
@property (nonatomic, assign) WPTelemedicineCannotJoinReason cannotJoinReason;
@property (nonatomic, assign) BOOL isOnDemand;
@property (nonatomic, assign) BOOL isUnverifiedOnDemandVideoVisit;
@property (nonatomic, strong, nullable) NSMutableArray *videoVisitInvitedGuests;
@property (nonatomic, assign) BOOL canInviteVideoVisitGuests;
@property (nonatomic, assign) NSInteger vendorID;
@property (nonatomic, assign) NSInteger fdiID;
@property (nonatomic, assign) NSInteger waitingRoomFdiID;
@property (nonatomic, assign) NSInteger hardwareTestFdiID;
@property (nonatomic, assign) NSInteger earlyStartDuration;
@property (nonatomic, assign) BOOL hasNotificationBeenSent;
@property (nonatomic, assign, nullable) NSDate *queueJoinTimeIso;
@property (nonatomic, assign) WPVisitModeType telehealthMode;

@property (nonatomic, assign) WPAppointmentConfirmStatus confirmStatus;
@property (nonatomic, strong, nullable) NSString *patientInstruction;
@property (nonatomic, assign) BOOL shouldHideVisitTime;
@property (nonatomic, strong, nullable) NSString *htmlPatientInstructions;
@property (nonatomic, strong, nullable) NSString *surgeryTimeOfDay;           /*< If this is a surgery appt, can contain AM or PM */
@property (nonatomic, assign) WPSurgeryTime surgeryTime;               //helper function
@property (nonatomic, strong, nullable) WPCopay *copay;                       /*< If a copay is due, this contains the relevant info to display and possibly collect payment */

@property (nonatomic, strong, nullable) NSString *patientNextStepInstructions;
@property (nonatomic, strong, nullable) NSMutableArray<WPFeatureDetails*> *arrivalAdditionalActions;
@property (nonatomic, strong, nullable) NSMutableArray<WPCustomFeature*> *arrivalCustomFeatures;
@property (nonatomic, assign) NSInteger selfArrivalMechanismUsed;

@property (nonatomic, strong, nullable) NSTimeZone *deptTimeZone;

//alwhite 11/6/2014 Added arrival time, autowaitlistoffers, and more
@property (nonatomic, strong, nullable) NSString *CSN;
@property (nonatomic, strong, nullable) NSData *barcode;
@property (nonatomic, strong, nullable) NSDate *arrivalDateTime;
@property (nonatomic, strong, nullable) NSString *earlyArrivalReason;
@property (nonatomic, strong, nullable) NSString *barcodeKey;
@property (nonatomic, strong, nullable) NSDate *arrivalWindowStartTime;
@property (nonatomic, strong, nullable) NSDate *arrivalWindowEndTime;
@property (nonatomic, strong, nullable) NSString *encryptedLvvId;

@property (nonatomic, strong, nullable) WPWaitListEntry *waitListEntry; 

@property (nonatomic, strong, nullable) NSMutableArray *providers;
@property (nonatomic, strong, nullable) NSMutableArray* questionnaires;
@property (nonatomic, strong, nullable) NSMutableArray* historyQuestionnaires;
@property (nonatomic, strong, nullable) NSMutableArray<WPECheckInStep*> *eCheckInSteps;
@property (nonatomic, strong, nullable) NSMutableArray* feedbackQuestionnaireLinks;

@property (nonatomic, assign) BOOL canAddToWaitList;
@property (nonatomic, assign) BOOL isOnWaitList;
@property (nonatomic, assign) BOOL hasPDFSnapshot;
@property (nonatomic, assign) BOOL canDisplayDuration;
@property (nonatomic, assign) BOOL isTimeTBD;
@property (nonatomic, assign) BOOL isTimeFuzzy;
@property (nonatomic, assign) WPECheckInStatus eCheckInStatus;
@property (nonatomic, assign) WPAppointmentArrivalStatus arrivalStatus;
@property (nonatomic, assign) BOOL areAdditionalStepsRequired;
@property (nonatomic, assign) BOOL canReschedule;
@property (nonatomic, assign) BOOL hasPVG;
@property (nonatomic, assign) BOOL isInHomeVisit;
@property (nonatomic, assign) BOOL isNotViewed;
@property (nonatomic, assign) BOOL isCanceled;
@property (nonatomic, assign) BOOL isNoShow;
@property (nonatomic, assign) BOOL leftWithoutSeen;
@property (nonatomic, assign) BOOL isInProgress;
@property (nonatomic, assign) BOOL isResidentialMed;
@property (nonatomic, assign) BOOL showOnlyArrivalTime;
@property (nonatomic, assign) BOOL isUserInitiatedArrivalAllowed;
@property (nonatomic, assign) WPArrivalAllowedStatus isLocationBasedArrivalAllowed;
@property (nonatomic, assign) BOOL isHovPreadmission;
@property (nonatomic, assign) BOOL hasMoPVD;
@property (nonatomic, assign) BOOL hasExternalApptDetailsSecurity;
@property (nonatomic, assign) BOOL hasExternalVisitSummarySecurity;
@property (nonatomic, assign) BOOL hasExternalAdmissionsSecurity;

@property (nonatomic, strong, nullable) NSMutableArray *additionalActions;
@property (nonatomic, assign) WPVisitCategory visitCategory;
@property (nonatomic, strong, nullable) WPAppointmentLocation *location;
@property (nonatomic, strong, nullable) NSMutableArray<WPSurgicalCase*> *cases;
@property (nonatomic, strong, nullable) NSString *primaryProcedureName;
@property (nonatomic, assign) NSInteger procedureCount;
@property (nonatomic, assign) BOOL hasMOAVS;
@property (nonatomic, assign) WPAVSType avsType;

@property (nonatomic, strong, nullable) WPAppointmentTimeStrings *timeStrings;    /*< Cached time strings once calculated in WPAppointmentDisplayManager */

//Organization where this appointment is scheduled, for Happy Together support
@property (nonatomic, strong, nonnull) WPOrganizationInfo* orgInfo;
@property (nonatomic, strong, nullable) NSMutableArray<WPOrganizationInfo*>* orgInfoList;
@property (nonatomic, strong, nullable) NSString *referenceID;
@property (nonatomic, assign) BOOL isDXRAppointment;

@property (nonatomic, strong, nullable) EVisit *eVisit;

@property (nonatomic, assign, nullable) WPJustScheduledDetails *justScheduledDetails;
@property (nonatomic, assign) BOOL isInfinite;
@property (nonatomic, assign) NSInteger numberOfAvailableAppointments;
@property (nonatomic, strong, nullable) NSString *appointmentName;
@property (nonatomic, strong, nullable) NSString *ticketID;
@property (nonatomic) NSInteger patientIndex;

+(nonnull NSMutableDictionary *)getAppointmentClassMap;
- (BOOL)isAppointmentArrivalDisabled;
- (BOOL)isEqualToAppointment:(nonnull WPAppointment *)appt;
- (nullable NSTimeZone *)getFormattingTimeZone;
- (BOOL)isExternal;
- (BOOL)isInpatientContext;
- (BOOL)isCompositeAppointment;
- (BOOL)hasMultipleComponentAppointments;
- (BOOL)isEVisit;
- (BOOL)isUpcomingED;
- (NSTimeZone *_Nonnull) getTimeZone;

/**
* Determines if direct cancellation is allowed for this appointment.
* Considers security points as well as the flag obtained from the server.
*
* @return true if direct cancellation is allowed for this appointment, false otherwise
*/
- (BOOL)isCancelDirectAllowed;

/**
* Determines if cancellation request is allowed for this appointment.
* Considers security points as well as the flag obtained from the server.
*
* @return true if direct cancellation is allowed for this appointment, false otherwise
*/
- (BOOL)isCancelRequestAllowed;

@end
