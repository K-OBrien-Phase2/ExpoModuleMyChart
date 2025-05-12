//
//  WPActivityIdentifiers.h
//  MyChart
//
//  Created by Mohammed Rangwala on 2/1/17.
//  Copyright © 2017-2024 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief MyChart standard activities
 * @warning If you add a new activity, make sure to add it to this enum
 */
typedef NS_ENUM(NSInteger, WPActivity) {
    WPActivityUnknown,
    WPActivityCustomApp,
    WPActivityTestResults,
    WPActivityMessages,
    WPActivityAppointments,
    WPActivityMedications,
    WPActivityHealthReminders,
    WPActivityHealthSummary,
    WPActivityBilling,
    WPActivityQuestionnaires,
    WPActivityLegacyGeneralQuestionnaire,   // This is only needed to support versions before Nov 20. For Nov 20 and later, use WPActivityAskQuestionnaire
    WPActivityHistoryQuestionnaire,
    WPActivityScreening,
    WPActivityTrackMyHealth,
    WPActivityLegacyTrackMyHealth,
    WPActivityAccountSettings,
    WPActivityNotificationPreferences,
    WPActivityInsuranceLegacy,
    WPActivityAskQuestion,
    WPActivityRefillMedications,
    WPActivityPaperlessSignup,
    WPActivityPersonalize,
    WPActivityPatientEstimates,
    WPActivityShareEverywhere,
    WPActivityEVisit,
    WPActivitySymptomChecker,
    WPActivityFinancialAssistance,
    WPActivityPremiumBilling,
    WPActivityPremiumBillingPayment,
    WPActivityPremiumBillingAutopay,
    WPActivityDebugAppointmentMonitoring,
    WPActivityECheckIn,
    WPActivityECheckInAdditionalSteps,
    WPActivityPreventiveCare,
    WPActivityOrganDonor,
    
    
    // Upcoming and past visit details
    WPActivityFutureAppointmentDetails,
    WPActivityVisitSummary,
    
    // Messages
    WPActivitySendAMessage,
    WPActivitySendACustomerServiceMessage,
    WPActivitySendABillingCustomerServiceMessage,
    WPActivitySendAPrescriptionMessage,
    WPActivityLegacySendAMessage,
    WPActivityLegacySendACustomerServiceMessage,
    WPActivityLegacyMessageDetails,
    WPActivityMessageDetails,
    WPActivityTestResultsDetails,
    
    //New feature introduction
    WPActivityCommunityOnboarding,
    
    //Shell activity identifier
    WPActivityCareTeam,
    WPActivityMyChartNowHome,
    
    //Community connections for H2G
    WPActivityCommunityInitialConnection,
    WPActivityCommunityManageMyAccounts,
    WPActivityCommunityManageMyAccountsLinking,
    
    WPActivityUnsupported,
    
    WPActivityLogout,
    
    WPActivityLetters,
    //On My Way
    WPActivityOnMyWay,
    
    //Education
    WPActivityEducation,
    WPActivityEducationPoint,
    
    //Family Access
    WPActivityFamilyAccess,
    WPActivityProxyConfirmation,
    
    //Document Center
    WPActivityMyDocuments,
    WPActivityDocumentDownload,
    
    //password change
    WPActivityChangePassword,
    
    //FDI activities
    WPActivityFdiLink,
    
    //Generic URL handler
    WPActivityOpenUrl,
    
    //Custom modes
    WPActivityCustomMode,
    
    //Unspecified MO or pinch-to-zoom web browser
    WPActivityGenericMoJump,
    
    //Homepage sub-activities
    WPActivityBillingPayments,
    WPActivityBillingDetails,
    WPActivityBillingAutopay,
    WPActivityPatientEstimateDetails,
    
    //To Do and sub-activites
    WPActivityToDo,
    WPActivityToDoChanges,
    WPActivityToDoChangeDetails,
    WPActivityToDoLinkTask,
    WPActivityToDoOverdue,
    WPActivityToDoManageReminders,
    WPActivityToDoProgress,
    
    //Pregnancy Hub and sub-activities
    WPActivityPregnancyHubEnroll,
    
    //Open attachment
    WPActivityOpenAttachment,
    
    //Homepage Hubs
    WPActivityDocumentHub,
    
    //Contact Verification
    WPActivityContactVerification,
    WPActivityEmailVerification,
    WPActivityMobileVerification,
    
    // Upcoming Orders
    WPActivityUpcomingOrders,
    
    //Shortcut personalization
    WPActivityShortcutPersonalization,
    
    //Flowsheet
    WPActivityAddFlowsheetReadings,
    WPActivityFlowsheetDetails,
    
    //Covid Status
    WPActivityCovidStatus,
    
    //Ask General Questionnaire
    WPActivityAskQuestionnaire,
    
    // Scheduling
    WPActivityScheduling,
    WPActivityRescheduling,
    WPActivitySchedulingTickets,
    WPActivityProviderFinder,
    WPActivityProviderDetails,
    WPActivityAppointmentTicketScheduling,
    WPActivityAppointmentTicketDecline,
    WPActivityWebSchedulingTicket,
    WPActivityWebQuickSchedule,
    
    // Hello Patient
    WPActivityAppointmentArrivalSetup,
    WPActivityAppointmentArrivalCheckIn,
    
    // Tiff attachment (can launch preview in acordex viewer or download)
    WPActivityTiffAttachment,
    
    // Mobile App Review
    WPActivityAppReview,
    
    // Mobile External Payment Window
    WPActivityNativeExternalPayment,
    
    //Internal AW testing
    WPActivityDebugAppleWallet,
    
    //Continuing Care
    WPActivityContinuingCare,
    
    // Internal button sandbox
    WPActivityDebugButtonSandbox,
    
    // Internal SVG Theme Library
    WPActivityDebugSVGThemeLibrary,
    
    // Internal Site Wide Theme
    WPActivityDebugSiteWideThemeOverride,
    
    // Account Deactivation
    WPActivityAccountDeactivation,
    
    // Copyright
    WPActivityCopyright,
    
    // Driving Directions
    WPActivityDrivingDirections,
    
    // Health Links (Apple Health connections)
    WPActivityHealthLinks,
    
    // Blob Scan PDF (MO Test Results)
    WPActivityBlobScanPdf,

    // Billing Document PDF (MO Billing)
    WPActivityBillingDocument,

    // Allergies
    WPActivityAllergies,
    
    // Immunizations
    WPActivityImmunizations,
    
    // Health Issues
    WPActivityHealthIssues,

    // AVS PDF
    WPActivityAvsPdf,
    
    // Two-Factor Opt-In (TOTP)
    WPActivityTwoFactorOptInTOTP,
    
    // Central Welcome Wizard
    WPActivityWelcomeWizard,
    
    // Bedside Info
    WPActivityBedsideSelfServiceTabletCode,
    
    // Bedside TV Video Visit Info
    WPActivityBedsideTVVideoVisitInfo,
    
    // Health Connections within Track My Health
    WPActivityHealthConnections,
};

