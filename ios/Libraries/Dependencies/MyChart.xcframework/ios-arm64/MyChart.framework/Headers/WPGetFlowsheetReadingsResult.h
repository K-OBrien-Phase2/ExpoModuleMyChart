//
//  WPGetFlowsheetReadingsResult.h
//
//  Created by Matthew Flatau on 8/21/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>

static NSString * const GET_FLOWSHEET_READINGS_SUCCESS = @"SUCCESS";
static NSString * const GET_FLOWSHEET_READINGS_FAILURE = @"FAILURE";

@interface WPGetFlowsheetReadingsResult : WPObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSMutableArray *dates;
@property (nonatomic, assign) BOOL hasMoreData;
@property (nonatomic, strong) NSMutableArray *instants;
@property (nonatomic, strong) NSDate *nextEndInstant;
@property (nonatomic, strong) NSMutableArray *readings;

- (void)convertStringsToDates;
@end
