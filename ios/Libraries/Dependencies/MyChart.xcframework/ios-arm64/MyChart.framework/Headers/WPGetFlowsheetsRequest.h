//
//  WPGetFlowsheetsRequest.h
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>

@class WPGetFlowsheetsResponse;

@interface WPGetFlowsheetsRequest : WPRequest

- (WPGetFlowsheetsResponse *)allocResponse;

@end
