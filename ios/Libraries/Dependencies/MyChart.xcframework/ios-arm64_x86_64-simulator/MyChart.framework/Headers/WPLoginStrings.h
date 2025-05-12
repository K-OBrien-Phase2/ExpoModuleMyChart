//
//  WPLoginStrings.h
//  MyChart
//
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//

// !!NOTE!! These are pre login strings - use NSLocalizedStringFromTable



// !!NOTE!! These are post login strings - use NSLocalizedStringFromTableInBundle

#define WP_STR_LOGIN_RECOVER_PASSWORD NSLocalizedStringFromTableInBundle(@"WP_STR_LOGIN_RECOVER_PASSWORD", @"Login", [WPUtil_Locales findMYCStringBundle], @"CONTEXT@Title of the button that lets the user recover their username. %1$@ is the custom password string")
#define WP_STR_LOGIN_RECOVER_USERNAME NSLocalizedStringFromTableInBundle(@"WP_STR_LOGIN_RECOVER_USERNAME", @"Login", [WPUtil_Locales findMYCStringBundle], @"CONTEXT@Title of the button that lets the user recover their username. %1$@ is the custom username string")



@interface WPLoginStrings: NSObject

@end
