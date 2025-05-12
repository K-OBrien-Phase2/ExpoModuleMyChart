//
//  WPCustomFeatureRequest.h
//
//  Created by Matthew Flatau on 7/15/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>

@class WPCustomFeatureResponse;

@interface WPCustomFeatureRequest : WPRequest

- (WPCustomFeatureResponse *)allocResponse;

@end
