//  Copyright © 2022-2023 Epic Systems Corporation. All rights reserved.

#ifndef MYCHARTSETTINGS_H
#define MYCHARTSETTINGS_H

#ifdef WPDEBUG
#define _STRC(value,comment,key) value
#else
#define _STRC(value,comment,key) (NSLocalizedStringWithDefaultValue((key),@"MyChart",[WPUtil_Locales findMYCStringBundle],value,nil))
#endif

// HealthKit should not be enabled on visionOS as that platform does not support HealthKit
// Note: This doesn't work for iPad apps running on visionOS, Apple has not provided a way to detect this case.
// Note: The build script that disables HealthKit looks for the first occurence of the string in this file, which is why the conditional check is in this order
#if !(TARGET_OS_VISION)
#define HEALTHKIT_ENABLED 1
#else
#define HEALTHKIT_ENABLED 0
#endif

//#define TEST_LIBRARY @"2032-11-19T00:00:00+00:00" //Uncomment for test library

#ifdef WPDEBUG
    //see GCC_PREPROCESSOR_DEFINITIONS for 'debug'

    #define DEBUG_ERROR        100
    #define DEBUG_WARNING    200
    #define DEBUG_INFO        300
    #define DEBUG_EXTRA        400

    #define MIN_DEBUG_LEVEL 500

    #define DEBUGLG(k, s, ... ) if((k)<MIN_DEBUG_LEVEL) { NSLog( @"<%p %@ (%@:%d)>\n   %@", self, NSStringFromClass([self class]), [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] ); }

    #define DEBUGLGSTATIC(k, s, ... ) if((k)<MIN_DEBUG_LEVEL) { NSLog( @"<(%@:%d)>\n   %@", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] ); }

    //#define WPDEBUG_XML

    #ifdef WPDEBUG_XML
        #define DEBUGLG_XML_ASM( s, ... ) NSLog( @"<%p %@:(%d)> %@", self, [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
    #else
        #define DEBUGLG_XML_ASM( s, ... )
    #endif


#else
    #define DEBUGLG(k, s, ... )
    #define DEBUGLG_XML_ASM( s, ... )
    #define DEBUGLGSTATIC(k, s, ... )
#endif

#endif
