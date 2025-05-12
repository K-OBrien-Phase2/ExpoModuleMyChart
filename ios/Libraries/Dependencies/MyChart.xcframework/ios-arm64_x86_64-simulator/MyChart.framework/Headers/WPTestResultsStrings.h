//
//  TestResultsStrings.h
//  MyChart
//
//  Copyright © 2010-2024 Epic Systems Corporation. All rights reserved.
//

#define STR_TR_HEADER_DEFAULT  NSLocalizedStringFromTableInBundle(@"TR1", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Default header for doctor's comments section")
#define STR_TR_HEADER_RESULT_NOTE  NSLocalizedStringFromTableInBundle(@"TR4", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Header for the result note@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_NARRATIVE  NSLocalizedStringFromTableInBundle(@"TR5", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Header for the narrative section@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_IMPRESSION  NSLocalizedStringFromTableInBundle(@"TR6", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Header for the impression section@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_NOTE  NSLocalizedStringFromTableInBundle(@"TR7", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Header for the note section@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_MORE_INFO  NSLocalizedStringFromTableInBundle(@"TR8", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Displays when lab results have more detail on the MyChart website.@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_MESSAGE_DEFAULT_SUBJECT  NSLocalizedStringFromTableInBundle(@"TR11", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Default subject for message spawned from test results.  %1$@ is the name of the test result. Do not translate in Arabic since hyperspace cannot view Arabic characters.")
#define STR_TR_MESSAGE_DEFAULT_BODY_WITH_DATE  NSLocalizedStringFromTableInBundle(@"TR12", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Default body for message spawned from test results, with date.  %1$@ is the test result title.  %2$@ is the date. Do not translate in Arabic since hyperspace cannot view Arabic characters.")
#define STR_TR_MESSAGE_DEFAULT_BODY  NSLocalizedStringFromTableInBundle(@"TR13", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Default body for messages spawned from test results.  %1$@ is the name of the test result.")
#define STR_TR_DEFAULT_TITLE  NSLocalizedStringFromTableInBundle(@"TR14", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Default title for the test results feature@LENGTH@18 characters")
#define STR_TR_HEADER_VALUE  NSLocalizedStringFromTableInBundle(@"TR19", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Header for the value column in the component results table@LENGTH@6 characters@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_STD_RANGE  NSLocalizedStringFromTableInBundle(@"TR20", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Header for the standard range column in the component results table. Due to space restrictions, no single word in this translation should be longer than 13 characters.@LENGTH@14 characters@CONSTRAINTS@Use HTML safe characters. Due to space restrictions, no single word in this translation should be longer than 13 characters.")
#define STR_TR_LABEL_VIEWED_ON  NSLocalizedStringFromTableInBundle(@"TR23", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Displays the date and time on which this lab result was last viewed.  %1$@ is the date and time the lab result was last viewed.@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_RANGE_FORMAT  NSLocalizedStringFromTableInBundle(@"TR24", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Formatting for the component reference range for a test result.  %1$@ is the low value. %2$@ is the high value")
#define STR_TR_HEADER_ADDENDA  NSLocalizedStringFromTableInBundle(@"TR20120109022250", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Header for the addenda section in the narrative section@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_SIGNED_BY  NSLocalizedStringFromTableInBundle(@"TR20120109022327", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Signed by header for addenda.  %1$@ is signer name.@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_RESULTED_ON  NSLocalizedStringFromTableInBundle(@"TR20140625121820", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Text label for the date of the test result. %1$@ is the date the test result was resulted.@LENGTH@35 characters")
#define STR_TR_ACC_ORDERED_BY  NSLocalizedStringFromTableInBundle(@"TR20140625122104", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@The voiceover text read for the label listing the provider that ordered a test result. %1$@ is the provider name.")
#define STR_TR_ACTION_MEDADVICE NSLocalizedStringFromTableInBundle(@"TR20160128111647", @"TestResults", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Button leads to compose activity about a given test result")

// THIS CLASS SHOULD BE REMOVED LATER
// Since we do not have a solution for accessing strings defined using #defines and _STRC in objective c from Swift, this class serves as the proxy. Once we have a solution, delete this class and use the new system.
// Same goes for WPAppointmentsStrings
@interface WPTestResultsStrings: NSObject

+ (NSString*) HeaderDefault; 
+ (NSString*) ResultedOn;
+ (NSString*) AccOrderedBy;
+ (NSString *) headerValue;
+ (NSString *) headerStdRange;
+ (NSString *) actionMedAdvice;
+ (NSString *) accResultedOn;
+ (NSString *) moreInfo;
+ (NSString *) headerNote;
+ (NSString *) headerImpression;
+ (NSString *) headerNarrative;
+ (NSString *) headerResultNote;
+ (NSString *) tableTitleCompResults;
+ (NSString *) headerAddenda;
+ (NSString *) signedBy;
+ (NSString *) headerTranscriptions;
+ (NSString *) headerNarrativeImpression;
+ (NSString *) headerComments;
+ (NSString *) noDetailsAlertMessage;
+ (NSString *) detailsNotAvailableAlertTitle;
+ (NSString *) detailsUnavailableOrgProxyAlertMessage;
+ (NSString *) detailsUnavailableProxyAlertMessage;
+ (NSString *) detailsUnavailableOrgAlertMessage;
+ (NSString *) detailsUnavailableAlertMessage;
+ (NSString *) messageDefaultBodyWithDate;
+ (NSString *) messageDefaultBody;
+ (NSString *) messageDefaultSubject;
+ (NSString *) navBtnTitleNext; 
+ (NSString *) navBtnTitlePrev;
+ (NSString *) componentAccAbnormalRangeUnitComments;
+ (NSString *) componentAccAbnormalUnitRangeUnit;
+ (NSString *) componentAccRangeUnitComments;
+ (NSString *) componentAccRangeUnit;
+ (NSString *) componentAccAbnormalUnitComments;
+ (NSString *) componentAccAbnormalUnit;
+ (NSString *) componentAccUnitComments;
+ (NSString *) componentAccUnit;
+ (NSString *) componentAccAbnormalRangeComments;
+ (NSString *) componentAccAbnormalRange;
+ (NSString *) componentAccRangeComments;
+ (NSString *) componentAccRange;
+ (NSString *) componentAccAbnormalComments;
+ (NSString *) componentAccAbnormal;
+ (NSString *) componentAccComments;
+ (NSString *) componentAcc;
+ (NSString *) noComponentInformation;

@end
