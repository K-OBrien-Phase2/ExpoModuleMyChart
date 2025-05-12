//
//  WPGetFlowsheetReadingsRequest.h
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>

@class WPGetFlowsheetReadingsResponse;

@interface WPGetFlowsheetReadingsRequest : WPRequest

- (id)initWithEpisodeID:(NSString *)episodeID startDate:(NSDate *)startDate andEndDate:(NSDate *)endDate;
- (WPGetFlowsheetReadingsResponse *)allocResponse;

@end
