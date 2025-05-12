//
//  Features.h
//  Authentication
//
//  Created by David Huntsman on 3/25/24.
//  Copyright © 2024 Epic Systems Corporation. All rights reserved.
//


/**
 !!!!!!!!!!!!!!!!!!
  Because OptionSets cannot bridge with @objc, it is better for our legacy code to continue to declare these in objc
 !!!!!!!!!!!!!!!!!
*/

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2011) {
    kEpicTestResultDetailsWithAddenda = 1 << 0,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2012) {
    kEpicBillingServices = 1 << 0,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2013) {
    kEpicHealthAdvisoriesSorted = 1 << 0,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2014) {
    kEpicCustomFeatures = 1 << 0,
    kEpicTrackMyHealthServices = 1 << 1,
    kEpicMedicationsWithAdditionalDetails = 1 << 2,
    kEpicAutoWaitListServices = 1 << 3,
    kEpicInsuranceServices = 1 << 4,
    kEpicHKMultiRow = 1 << 5,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2015) {
    kEpicLoginToken = 1 << 0,
    kEpicCheckMessageReply = 1 << 1,
    kEpicNonPatientBilling = 1 << 2,
    kEpicBrandedAppString = 1 << 3,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2016) {
    kEpicPushNotifications = 1 << 0,
    kEpicClinicalInfo = 1 << 1,
    kEpicPreferencesEdit = 1 << 2,
    kEpicNewAlertsType = 1 << 3,
    kEpicMessageList = 1 << 4,
    kEpicTestResultsList= 1 << 5,
    kEpicVisitsUpcomingList = 1 << 6,
    kEpicVisitsPastList = 1 << 7,
    kEpicProviderPhotos = 1 << 8,
    kEpicGetPatientPrefs = 1 << 9,
    kEpicPatientFriendlyName = 1 << 10,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2017) {
    kEpicMessageViewers = 1 << 1,
    kEpicGeolocation = 1 << 2,
    kEpicPatientVisitGuide = 1 << 3,
    kEpicAppointmentFDILinks = 1 << 4,
    kEpicHappyTogether = 1 << 5,
    kEpicPasswordServices = 1 << 6,
    kEpicExternalBillingPage = 1 << 7,
    kEpicCareTeamScheduling = 1 << 8,
    kEpicPatientEstimates = 1 << 9,
    kEpicMarkHMTopicComplete = 1 << 11,
    kEpicMedicationLevelComments = 1 << 12,
    kEpicMyC3Personalization = 1 << 13,
    kEpicToDo = 1 << 14,
    kEpicEVisit = 1 << 15,
    kEpicCampaigns = 1 << 16,
    kEpicShareEverywhere = 1 << 17,
    kEpicTicketScheduling = 1 << 19,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2018) {
    kEpicLogout = 1 << 0,
    kEpicSentMessages = 1 << 1,
    kEpicMOBilling = 1 << 2,
    kEpicCommunityManageExternalAccounts = 1 << 3,
    kEpicMyC3NotificationSettings = 1 << 4,
    kEpicOnMyWay = 1 << 5,
    kEpicMOSymptomChecker = 1 << 6,
    kEpicRecentEncounterAlert = 1 << 7,
    kEpicMOLetters = 1 << 8,
    kEpicWebOnlyAlertJump = 1 << 9,
    kEpicTreatmentTeam = 1 << 10,
    kEpicEducation = 1 << 12,
    kEpicHappeningSoon = 1 << 14,
    kEpicNewEmailValidateAPI = 1 << 15,
    kEpicPharmacyFiltering = 1 << 16,
    kEpicProblemList = 1 << 17,
    kEpicNppMobileOptimizedJump = 1 << 18,
    kEpicEncounterMedications = 1 << 19,
    kEpicEnableSecondaryLoginWithoutPassword = 1 << 20,
    kEpicXOrgTelehealth = 1 << 21,
    kEpicMOHappyTogether = 1 << 22,
    kEpicMOPremiumBilling = 1 << 23,
    kEpicMODirectUrl = 1 << 24,
    kEpicMyC3TimeZoneCustomization = 1 << 25,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2019) {
    kEpicScreenings = 1 << 0,
    kEpicHomePage = 1 << 1, // Homepage controls if the server has the functionality
    kEpicTwoFactorOptIn = 1 << 2,
    kEpicMOMyDocuments = 1 << 3,
    kEpicMOMedications = 1 << 4,
    kEpicHMScheduling = 1 <<5,
    kEpicCustomerServiceMessages = 1 << 6,
    kEpicPanelAppointments = 1 << 7,
    kEpicPatientCreatedTasks = 1 << 8,
    kEpicPushNotificationDeepLink = 1 << 9,
    kEpicNewCommunityConnectionAlert = 1 << 11,
    kEpicToDoProgress = 1 << 10,
    kEpicH2GActions = 1 << 12,
    kEpicMyC3TaskTypeNotifications = 1 << 13,
    kEpicH2GPPR2D2 = 1 << 14,
    kEpicMyC3PushNotificationDeepLink = 1 << 15,
    kEpicUpcomingEDVisits = 1 << 16,
    kEpicTreatmentTeam2019 = 1 << 17,
    kEpicGenericMOJump = 1 << 18,
    kEpicPastAdmissions = 1 << 19,
    kEpicH2GAffiliateBranding = 1 << 20,
    kEpicH2GPPAsynLoading = 1 << 21,
    kEpicUseHomePage = 1 << 22 // UseHomePage controls if the server has the new homepage enabled
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2020) {
    kEpicMOMessages = 1 << 0,
    kEpicMOShortcutPersonalization= 1 << 1,
    kEpicExploreMoreAuditing = 1 << 2,
    kEpicCovidStatus = 1 << 3,
    kEpicMOContactVerification = 1 << 4,
    kEpicMOToDoChangeDetails = 1 << 5,
    kEpicBrandingPathsLookup = 1 << 7,
    kEpicToDoPersistentQuestionnaires = 1 << 9,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2021) {
    kEpicToDoPatientCreatedTaskSecurityPoints = 1 << 0,
    kEpicAppleWatchRedesign = 1 << 2,
    kEpicUpcomingOrders = 1 << 3,
    kEpicHPRemoveFunIcons = 1 << 4,
    kEpicHowToVideos = 1 << 5,
    kEpicMOPersonalInformation = 1 << 6,
    kEpicMOToDo = 1 << 8,
    kEpicMOImmunizations = 1 << 9,
    kEpicMOEducation = 1 << 10,
    kEpicCovidPDF = 1 << 11,
    kEpicPreloginCovidStatus = 1 << 12,
    kEpicEMMIEducation = 1 << 13,
    kEpicCovidRegistryQuery = 1 << 15,
    kEpicMenuAudit = 1 << 16,
    kEpicAppleWatchSnowflake = 1 << 17,
    kEpicCovidVaccineReconciliation = 1 << 18,
    kEpicCovidTestResults = 1 << 20,
    kEpicCovidCredentialsHowToVideo = 1 << 22,
    kEpicCovidStatusAlwaysOn = 1 << 23,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2022) {
    kEpicMOTestResults = 1 << 0,
    kEpicH2GPPWorkflowUpdate = 1 << 1,
    kEpicEncounterPDFDownload = 1 << 2,
    kEpicMOEducationIP = 1 << 3,
    kEpicAppointmentRequests = 1 << 4,
    kEpicH2GCovidVaccineSync = 1 << 5,
    kEpicMsgTypeSpecificSubtopics = 1 << 6,
    kEpicCommunicationPreferences = 1 << 8,
    kEpicNewBdsdQNRSecurity = 1 << 9,
    kEpicAccountDeactivation = 1 << 11,
    kEpicFeatureLibrary = 1 << 12,
    kEpicArrivalEventAudit = 1 << 13,
    kEpicFeatureUsageLogging = 1 << 14,
    kEpicMOAppointmentArrival = 1 << 15,
    kEpicMOProviderDetails = 1 << 16,
    kEpicAppleWalletSecurity=1<<17,
    kEpicTwoFactorInfoForLogin = 1 << 18,
    kEpicSelfReportedClinicalUpdates = 1 << 19
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2023) {
    kEpicCustomHealthKitDataTypes = 1 << 2,
    kEpicMOAppointmentTicketDecline = 1 << 4,
    kEpicBdsdMOTestResults = 1 << 6,
    kEpicBasicLiveActivityAuditing = 1 << 7,
    kEpicPersonalNotes = 1 << 8,
    kEpicMOProviderFinder = 1 << 9,
    kEpicNPPFDILink = 1 << 16,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2024) {
    kEpicMOTrackMyHealth = 1 << 0,
    kEpicMyChartCentral = 1 << 2,
    kEpicPastVisitDetails = 1 << 5,
    kEpicMOPaperlessSettings = 1 << 6,
    kEpicRemoteProxyAccess = 1 << 7,
    kEpicExpandedHomePageShortcuts = 1 << 8,
    kEpicCovidVaccinationAppleWalletCard = 1 << 9,
    kEpicPatientAccessUpdates = 1 << 10,
    kEpicMOHealthSummary = 1 << 11,
    kEpicOIDCFederatedLogout = 1 << 12,
    kEpicSecondaryLoginOffSwitch = 1 << 13,
    kEpicVisitsListSecurity = 1 << 14,
    kEpicShouldUseOrgLogoCE = 1 << 15,
    kEpicMOShareEverywhere = 1 << 16,
    kEpicMyChartSearch = 1 << 18,
    kEpicMyChartCentralOn = 1 << 19,
    kEpicMyChartCentralDTC = 1 << 20,
    kEpicDrivingDirectionsConsentEnabled = 1 << 21,
    kEpicDeclutteredQNRNavigationButtons = 1 << 23,
    kEpicMOOnlyLinkedDevices = 1 << 25,
    kEpicMOPageArbitraryDownloadSupport = 1 << 26,
    kEpicMOChangePassword = 1 << 27,
    kEpicHealthConnections = 1 << 28,
    kEpicPersonalizeEnabledFriendsAndFamily = 1 << 30,
    kEpicMyChartCentralV1 = 1 << 31,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2025) {
    kEpicFunFacts = 1 << 0,
    kEpicPreviewFeatures = 1 << 3,
};
