//
//  WPGetPatientVisitGuideRequest.h
//  MyChart
//
//  Created by Alex J White on 2/27/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>
#import <MyChart/WPGetPatientVisitGuideResponse.h>

@interface WPGetPatientVisitGuideRequest : WPRequest

-(WPGetPatientVisitGuideResponse*) allocResponse;

@end
