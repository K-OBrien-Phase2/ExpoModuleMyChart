//
//  WPFutureAppointmentsResult.h
//
//  Created by Matthew Flatau on 12/8/14.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>

@interface WPFutureAppointmentsResult : WPObject

@property (strong, nonatomic, nullable) NSMutableArray *appointments;
@property (strong, nonatomic, nullable) NSMutableArray *waitListEntries;

@end
