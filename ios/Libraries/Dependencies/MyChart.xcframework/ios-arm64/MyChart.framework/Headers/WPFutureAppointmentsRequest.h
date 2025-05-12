//
//  WPFutureAppointmentsRequest.h
//
//  Created by Matthew Flatau on 12/8/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>
#import <MyChart/WPFutureAppointmentsResponse.h>

@interface WPFutureAppointmentsRequest : WPRequest

@property (nonatomic) NSInteger numApptsToReturn;
@property (nonatomic) NSInteger patientIndex;
@property (nonatomic) BOOL showExternal;
@property (nonatomic) BOOL ignoreED;

/// Flag indicating if this request should skip auditing the "upcomingAppointmentsViewed" event
@property (nonatomic) BOOL shouldSkipAudit;

-(instancetype)initWithShowExternal: (BOOL)showExternal;
-(instancetype)initWithShowExternal: (BOOL)showExternal ignoreED:(BOOL)ignoreED;
-(instancetype)initWithPatientIndex:(NSInteger)patientIndex showExternal:(BOOL)showExternal;
-(instancetype)initWithPatientIndex:(NSInteger)patientIndex showExternal:(BOOL)showExternal ignoreED:(BOOL)ignoreED;

/// Initializes an instance of ``WPFutureAppointmentsRequest`` that will not audit an "upcomingAppointmentsViewed" event
/// - Parameter patientIndex: the patient index of the patient for whom the appointments will be loaded
-(instancetype)initForBackgroundLoadingWithPatientIndex:(NSInteger)patientIndex ignoreED:(BOOL)ignoreED;

-(WPFutureAppointmentsResponse *)allocResponse;

@end
