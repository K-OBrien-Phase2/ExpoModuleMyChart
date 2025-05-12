//
//  WPAddFlowsheetReadingsRequest.h
//
//  Created by Matthew Flatau on 8/15/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>

@class WPAddFlowsheetReadingsResponse;

@interface WPAddFlowsheetReadingsRequest : WPRequest

- (id)initWithEpisodeID:(NSString *)episodeID andReadings:(NSArray *)readings;
- (WPAddFlowsheetReadingsResponse *)allocResponse;
@property (nonatomic, strong) NSArray *readings;

@end
