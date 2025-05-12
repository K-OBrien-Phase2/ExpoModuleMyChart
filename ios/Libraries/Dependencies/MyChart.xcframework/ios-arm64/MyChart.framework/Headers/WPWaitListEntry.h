//
//  WPWaitListEntry.h
//  MyChart
//
//  Created by Matthew Flatau on 12/9/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
#import <MyChart/WPFastPassAppointment.h>
#import <MyChart/WPFastPassOffer.h>

@interface WPWaitListEntry : WPObject

@property (nonatomic, strong, nullable) NSString *CSN;
@property (nonatomic, strong, nullable) NSString *appointmentRequestID;
@property (nonatomic, readonly) BOOL isStandAlone;

//The current active appointment. If a proxy accepts the offer request then this is the new appointment.
@property (nonatomic, strong, nullable) WPFastPassAppointment *currentAppointment;

//The original appointment (if any) that the wait list is attached to. The offered appointment would replace this appointment.
@property (nonatomic, strong, nullable) WPFastPassAppointment *linkedAppointment;

//An array of wait list offers that the user can schedule for a new appointment.
@property (nonatomic, strong, nullable) NSMutableArray *offers;

//We only ever look at one offer, the soonest to expire, active offer
@property (nonatomic, readonly, nullable) WPFastPassOffer *offer;

//Organization that this entry came from
@property (nonatomic, strong, nullable) WPOrganizationInfo *orgInfo;

- (BOOL)isEqualToWaitListEntry:(nullable WPWaitListEntry *)entry;

- (NSComparisonResult)compareTo:(nullable WPWaitListEntry *)entry;
- (BOOL)isEmpty;
+ (nonnull SEL)comparator;

@end
