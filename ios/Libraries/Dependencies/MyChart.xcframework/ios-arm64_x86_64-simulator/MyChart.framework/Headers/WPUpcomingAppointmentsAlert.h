//
//  WPUpcomingAppointmentsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/29/16.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPAlert.h>

@interface WPUpcomingAppointmentsAlert : WPAlert <IWPUpcomingAppointmentsAlert>

@property (nonatomic, strong) NSDate *appointmentDate;
@property (nonatomic, strong) NSString *providerName;

@property (nonatomic, readonly) BOOL isUserInitiatedArrivalAllowed;

@end
