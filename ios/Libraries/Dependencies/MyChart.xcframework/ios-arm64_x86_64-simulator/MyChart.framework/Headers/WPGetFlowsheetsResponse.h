//
//  WPGetFlowsheetsResponse.h
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>

@class WPGetFlowsheetsResult;

@interface WPGetFlowsheetsResponse : WPResponse

@property (nonatomic, strong) WPGetFlowsheetsResult *result;

@end
