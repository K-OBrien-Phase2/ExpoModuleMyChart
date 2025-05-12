//
//  WPSetConnectionStatusResponse.h
//  iChart
//
//  Created by Matthew Flatau on 12/16/13.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPSetConnectionStatusResult.h>

@interface WPSetConnectionStatusResponse : WPResponse

@property (nonatomic,strong) WPSetConnectionStatusResult *result;

@end
