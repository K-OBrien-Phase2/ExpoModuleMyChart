//
//  WPGeneralStrings.h
//  MyChart
//
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.

#define STR_GEN_BUTTON_OK  NSLocalizedStringFromTableInBundle(@"GEN1", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Button closes an alert when no action is possible.")
#define STR_GEN_RELATIVE_TODAY  NSLocalizedStringFromTableInBundle(@"GEN2", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@String used for when a date is converted to a relative date, and that date is today@LENGTH@8 characters")
#define STR_GEN_RELATIVE_TOMORROW  NSLocalizedStringFromTableInBundle(@"GEN3", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@String used for when a date is converted to a relative date, and that date is tomorrow@LENGTH@8 characters")
#define STR_GEN_RELATIVE_YESTERDAY  NSLocalizedStringFromTableInBundle(@"GEN4", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@String used for when a date is converted to a relative date, and that date is yesterday")
#define STR_GEN_DATETIME  NSLocalizedStringFromTableInBundle(@"GEN5", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Manually builds a date/time format. %1$@ is the date, e.g., 10/27/10.  %2$@ is the time, e.g., 10:24 AM@LENGTH@21 characters@CONSTRAINTS@literal strings need to be enclosed in single quotes.  Don't enclose the parameters in literal quotes")
#define STR_GEN_ALERT_DATA_FAIL NSLocalizedStringFromTableInBundle(@"GEN10", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Alert body lets the user know that the data retrieval operation failed.")
#define STR_GEN_ALERT_ERROR_TITLE  NSLocalizedStringFromTableInBundle(@"GEN11", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Generic alert title for an error")
#define STR_GEN_ALERT_ERROR_NETWORK_NEEDED  NSLocalizedStringFromTableInBundle(@"GEN12", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Alert body for when a loss of network is detected. %1$@ is the app name, i.e. MyChart.")
#define STR_GEN_RELATIVE_TODAY_UNCAP  NSLocalizedStringFromTableInBundle(@"GEN13", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@String used for when a date is converted to a relative date, and that date is today and needs to be uncapitalized@LENGTH@8 characters")
#define STR_GEN_RELATIVE_TOMORROW_UNCAP  NSLocalizedStringFromTableInBundle(@"GEN14", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@String used for when a date is converted to a relative date, and that date is tomorrow and needs to be uncapitalized@LENGTH@8 characters")
#define STR_GEN_RELATIVE_YESTERDAY_UNCAP  NSLocalizedStringFromTableInBundle(@"GEN15", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@String used for when a date is converted to a relative date, and that date is yesterday and needs to be uncapitalized")
#define STR_GEN_CANNOT_OPEN_LINK  NSLocalizedStringFromTableInBundle(@"STR_GEN_CANNOT_OPEN_LINK", @"General", [WPUtil_Locales findMYCStringBundle], @"@CONTEXT@Alert appears when the pressed link cannot be opened.")

@interface WPGeneralStrings: NSObject

+ (NSString *) buttonOk;

@end
