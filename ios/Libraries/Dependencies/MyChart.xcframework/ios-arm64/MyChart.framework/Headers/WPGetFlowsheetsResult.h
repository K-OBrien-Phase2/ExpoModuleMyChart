//
//  WPGetFlowsheetsResult.h
//
//  Created by Matthew Flatau on 8/21/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>

static NSString * const GET_FLOWSHEETS_SUCCESS = @"SUCCESS";
static NSString * const GET_FLOWSHEETS_FAILURE = @"FAILURE";

@interface WPGetFlowsheetsResult : WPObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSMutableArray *flowsheets;

@end
