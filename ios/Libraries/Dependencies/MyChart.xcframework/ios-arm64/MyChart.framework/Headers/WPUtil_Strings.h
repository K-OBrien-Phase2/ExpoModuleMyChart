//
//  WPUtil_Strings.h
//  MyChart
//
//  Created by Larry Irwin II on 7/11/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

// These constants are either CustomStrings.xml keys, strings used for markup, or strings that won't be displayed to end users. None of these strings should be translated, localized, or internationalized.

// Rx Refill
static NSString * const kWPCustomStringRxRefillListHeader = @"RxRefillListHeader";
static NSString * const kWPCustomStringRxRefillDetailsHeader = @"RxRefillDetailsHeader";
static NSString * const kWPCustomStringRxRefillErrorAdmitted = @"RxRefillErrorAdmitted";
static NSString * const kWPCustomStringRxRefillListEmptyMessage = @"RxRefillListEmptyMessage";
static NSString * const kWPCustomStringRxRefillButtonTextEnabled = @"RxRefillButtonTextEnabled";
static NSString * const kWPCustomStringRxRefillButtonTextDisabled = @"RxRefillButtonTextDisabled";
static NSString * const kWPCustomStringRxRefillButtonTextDisabledAdmitted = @"RxRefillButtonTextDisabledAdmitted";
static NSString * const kWPCustomStringRxRefillButtonDescriptionSingle = @"RxRefillButtonDescriptionSingle";
static NSString * const kWPCustomStringRxRefillButtonDescription = @"RxRefillButtonDescription";
static NSString * const kWPCustomStringRxRefillBodyNoRefillsRemaining = @"RxRefillBodyNoRefillsRemaining";
static NSString * const kWPCustomStringRxRefillBodyOneRefillRemaining = @"RxRefillBodyOneRefillRemaining";
static NSString * const kWPCustomStringRxRefillBodyMultipleRefillRemaining = @"RxRefillBodyMultipleRefillRemaining";
static NSString * const kWPCustomStringRxRefillBodyRefillPrefix = @"RxRefillBodyRefillPrefix";
static NSString * const kWPCustomStringRxRefillRequestSuccess = @"RxRefillRequestSuccess";
static NSString * const kWPCustomStringRxRefillBillingMedicationLabel = @"RxRefillBillingMedicationLabel";
static NSString * const kWPCustomStringRxRefillBillingRenewLabel = @"RxRefillBillingRenewLabel";
static NSString * const kWPCustomStringRxRefillBillingPaymentTitle = @"RxRefillBillingPaymentTitle";
static NSString * const kWPCustomStringRxRefillDueAlertPatientSingle = @"RxRefillDueAlertPatientSingle";
static NSString * const kWPCustomStringRxRefillDueAlertPatientMultiple = @"RxRefillDueAlertPatientMultiple";
static NSString * const kWPCustomStringRxRefillDueAlertProxySingle = @"RxRefillDueAlertProxySingle";
static NSString * const kWPCustomStringRxRefillDueAlertProxyMultiple = @"RxRefillDueAlertProxyMultiple";

// Medications
static NSString * const KWPCustomStringMedications = @"Medications";
static NSString * const kWPCustomStringMedicationsHospitalAdmissionBannerText = @"MedicationsHospitalAdmissionBannerText";
static NSString * const kWPCustomStringMedicationsHospitalAdmissionBannerProxyText = @"MedicationsHospitalAdmissionBannerProxyText";

// eCheck-in
static NSString * const kWPCustomStringECheckInKey = @"eCheckInName";
static NSString * const kWPCustomStringEDSelfRegistrationKey = @"EDSelfRegistration";
static NSString * const kWPCustomStringECheckInForInpatientKey = @"eCheckInNameForInpatient";
static NSString * const kWPCustomStringECheckInCompleteKey = @"eCheckInComplete";
static NSString * const kWPCustomStringECheckInCompleteDetailsKey = @"eCheckInCompleteDetails";
static NSString * const kWPCustomStringInpatientECheckInCompleteKey = @"InpatientEcheckInComplete";

// Scheduling and appointments
static NSString * const kWPCustomStringScheduling = @"Scheduling";
static NSString * const kWPCustomStringConfirmApptDetailKey = @"AppointmentConfirmDetails";
static NSString * const kWPCustomStringRescheduleInstructionsKey = @"RescheduleInstructions";
static NSString * const kWPCustomStringPCPIndicator = @"PCPIndicator";

// On My Way
static NSString * const kWPCustomStringOnMyWay = @"OnMyWay";

// Password
static NSString * const kWPCutomStringExpiredPasswordTitle = @"ExpiredPasswordTitle";
static NSString * const kWPCustomStringPasswordResetTitle = @"PasswordResetTitle";
static NSString * const kWPCustomStringPasswordRequirements = @"PasswordRequirements";

static NSString * const kWPCustomStringSymptomChecker = @"SymptomChecker";
static NSString * const kWPCustomStringMessages = @"Messages";

// Test Results
static NSString * const KWPCustomStringTestResults = @"TestResults";
static NSString * const KWPCustomStringTestResultsPreText = @"TestResultsPreText";
static NSString * const KWPCustomStringTestResultsPostText = @"TestResultsPostText";
static NSString * const kWPCustomStringTestResultDetailDoctorsCommentHeader = @"DoctorsCommentHeader";
static NSString * const kWPCustomStringTestResultDetailFDIRowBody = @"TestResultDetailFDIRowBody";

// ToDo
static NSString * const KWPCustomStringToDo = @"ToDo";

// Billing and estimates
static NSString * const KWPCustomStringBilling = @"Billing";
static NSString * const KWPCustomStringEstimates = @"Estimates";

// Share Everywhere
static NSString * const KWPCustomStringShareEverywhere = @"ShareEverywhere";
static NSString * const KWPCustomStringShareEverywhereAdditionalText = @"ShareEverywhereAdditionalText";
static NSString * const kWPCustomStringShareMyRecord = @"ShareMyRecord";

// Video Visits
static NSString * const kWPCustomStringOnDemandVideoVisit = @"QuickSchedule";
static NSString * const kWPCustomStringNotAllowedToJoinVideoVisitMessage = @"NotAllowedToJoinVideoVisitMessage";
static NSString * const kWPCustomStringCannotJoinVideoVisitMessage = @"CannotJoinVideoVisitMessage";
static NSString * const kWPCustomStringDirectCancelWorkflowPreText = @"DirectCancelWorkflowPreText";

// E-Visits
static NSString * const kWPCustomStringEVisit = @"EVisitName";
static NSString * const kWPCustomStringEVisitInstructionMessage = @"EVisitInstructionMessage";
static NSString * const kWPCustomStringEVisitUnderReviewMessage = @"EVisitUnderReviewMessage";
static NSString * const kWPCustomStringEVisitSubmittedMessage = @"EVisitSubmittedMessage";

// Disclaimers and alerts
static NSString * const kWPCustomStringPersonalizePhotoDisclaimer = @"PersonalizePhotoDisclaimer";
static NSString * const kWPCustomStringAppleWatchLinkingDisclaimer = @"AppleWatchLinkingDisclaimer";
static NSString * const kWPCustomStringEmergencyPhoneNumber = @"EmergencyPhoneNumber";
static NSString * const KWPCustomStringAbnormalFlowsheetReadingAlert = @"AbnormalFlowsheetReadingAlertText";

// COVID-19
static NSString * const kWPCustomStringCovidScreeningStatusLowRisk = @"CovidScreeningStatusLowRisk";
static NSString * const kWPCustomStringCovidScreeningStatusMediumRisk = @"CovidScreeningStatusMediumRisk";
static NSString * const kWPCustomStringCovidScreeningStatusHighRisk = @"CovidScreeningStatusHighRisk";
static NSString * const kWPCustomStringCovidPastScreeningStatusLowRisk = @"CovidPastScreeningStatusLowRisk";
static NSString * const kWPCustomStringCovidPastScreeningStatusMediumRisk = @"CovidPastScreeningStatusMediumRisk";
static NSString * const kWPCustomStringCovidPastScreeningStatusHighRisk = @"CovidPastScreeningStatusHighRisk";
static NSString * const kWPCustomStringCovidStateRegistryName = @"CovidStateRegistryName";
static NSString * const kWPCustomStringCovidActivityTitle = @"CovidStatus";

// Strings that contain "patient"
static NSString * const kWPCustomStringSwitchPatients = @"SwitchPatients";
static NSString * const kWPCustomStringChooseDefaultPatient = @"ChooseDefaultPatient";
static NSString * const kWPCustomStringChangeDefaultPatient = @"ChangeDefaultPatient";
static NSString * const kWPCustomStringGrantedPatientAccess = @"GrantedPatientAccess";
static NSString * const kWPCustomStringSelectPatientToView = @"SelectPatientToView";
static NSString * const kWPCustomStringSelectPatientToViewAccessibility = @"SelectPatientToViewAccessibility";

// Punctuation
static NSString * const kWPCustomStringListSeparatorPrimary = @"ListSeparatorPrimary";
static NSString * const kWPCustomStringListSeparatorSecondary = @"ListSeparatorSecondary";
static NSString * const kWPListSeparatorPrimary = @", ";
static NSString * const kWPBullet = @"•";
static NSString * const kWPEmptyBullet = @"◦";

// Error Domains
static NSString * const WPCareTeamErrorDomain = @"EpicWP.error.CareTeamErrorDomain";
static NSString * const WPGoalsErrorDomain = @"EpicWP.error.GoalsErrorDomain";
static NSString * const WPMyChartNowErrorDomain = @"EpicWP.error.MyChartNowErrorDomain";
static NSString * const WPPersonManagerErrorDomain = @"EpicWP.error.PersonManagerErrorDomain";

// Preventive Care
static NSString * const kWPCustomStringPreventiveCare = @"PreventiveCare";



@interface WPUtil_Strings : NSObject {

}

+(NSString*)customStringForKey:(NSString*)key;
+(NSString*)customStringForKey:(NSString*)key withDefaultValue:(NSString*)defaultValue;
+(NSString*)customStringForKey:(NSString*)key withDefaultValue:(NSString*)defaultValue withParameters:(NSDictionary*)parameters;


+(NSString*)customString:(enum PEOrganizationCustomString)customString withDefaultValue:(NSString*)defaultValue;
+(NSString*)customString:(enum PEOrganizationCustomString)customString withDefaultValue:(NSString*)defaultValue withParameters:(NSDictionary*)parameters;

+(NSString*)formatString:(NSString*)string withParameters:(NSDictionary*)parameters;

+(NSString*)customListSeparator;
+(BOOL)string:(NSString*)string containsString:(NSString*)substring;
+(void)addStringForKey:(NSString*)key withValue:(NSString *)value;
+(BOOL)stringContainsOnlyAllowedCharacters:(NSString*)string;

@end
