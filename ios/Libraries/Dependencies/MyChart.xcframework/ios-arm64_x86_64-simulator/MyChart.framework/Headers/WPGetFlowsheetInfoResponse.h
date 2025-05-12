//
//  WPGetFlowsheetInfoResponse.h
//  MyChart
//
//  Created by Wansui Su on 2/7/20.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPGetFlowsheetInfoResult.h>

@interface WPGetFlowsheetInfoResponse : WPResponse

@property (nonatomic, strong) WPGetFlowsheetInfoResult *result;

@end
