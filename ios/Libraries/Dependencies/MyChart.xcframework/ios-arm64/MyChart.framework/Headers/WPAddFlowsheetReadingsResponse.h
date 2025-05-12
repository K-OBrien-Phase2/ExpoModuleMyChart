//
//  WPAddFlowsheetReadingsResponse.h
//
//  Created by Matthew Flatau on 8/15/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPAddFlowsheetReadingsResult.h>

@interface WPAddFlowsheetReadingsResponse : WPResponse

@property (nonatomic, strong) WPAddFlowsheetReadingsResult *result;

@end
