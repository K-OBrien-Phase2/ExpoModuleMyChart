//
//  WPRespondToOfferResponse.h
//  MyChart
//
//  Created by Matthew Flatau on 12/12/14.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPRespondToOfferResult.h>

@interface WPRespondToOfferResponse : WPResponse

@property (nonatomic, strong, nullable) WPRespondToOfferResult *result;

@end
