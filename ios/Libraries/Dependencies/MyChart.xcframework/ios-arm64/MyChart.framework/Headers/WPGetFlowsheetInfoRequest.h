//
//  WPGetFlowsheetInfoRequest.h
//  MyChart
//
//  Created by Wansui Su on 2/7/20.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>

@class WPGetFlowsheetInfoResponse;

@interface WPGetFlowsheetInfoRequest : WPRequest

- (id)initWithEpisodeID:(NSString *)episodeID;
- (WPGetFlowsheetInfoResponse *)allocResponse;

@end
