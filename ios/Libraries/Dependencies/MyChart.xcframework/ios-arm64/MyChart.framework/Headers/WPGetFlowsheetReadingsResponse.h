//
//  WPGetFlowsheetReadingsResponse.h
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPGetFlowsheetReadingsResult.h>

@interface WPGetFlowsheetReadingsResponse : WPResponse

@property (nonatomic, strong) WPGetFlowsheetReadingsResult *result;

@end
