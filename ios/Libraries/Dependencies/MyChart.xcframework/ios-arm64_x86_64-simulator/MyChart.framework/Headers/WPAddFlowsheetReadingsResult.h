//
//  WPAddFlowsheetReadingsResult.h
//
//  Created by Matthew Flatau on 8/21/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>

static NSString * const ADD_FLOWSHEET_READINGS_SUCCESS = @"SUCCESS";
static NSString * const ADD_FLOWSHEET_READINGS_FAILURE = @"FAILURE";

@interface WPAddFlowsheetReadingsResult : WPObject

@property (nonatomic, strong) NSString *status;

@end
