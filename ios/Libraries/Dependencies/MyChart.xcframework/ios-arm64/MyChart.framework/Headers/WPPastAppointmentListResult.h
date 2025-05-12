//
//  WPPastAppointmentListResult.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 8/13/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>

@interface WPPastAppointmentListResult : WPObject
{
    NSMutableArray *appointments;
    NSMutableArray *nextAppointmentMap;
}

@property (nonatomic, strong, nullable) NSMutableArray *appointments;
@property (nonatomic, strong, nullable) NSMutableArray *nextAppointmentMap;

@end
