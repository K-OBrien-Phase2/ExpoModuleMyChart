//
//  WPGenerateAuthTokenResponse.h
//  MyChart
//
//  Created by Alex J White on 4/3/15.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPGenerateAuthTokenResult.h>

@interface WPGenerateAuthTokenResponse : WPResponse

@property (nonatomic, strong) WPGenerateAuthTokenResult* result;

@end
