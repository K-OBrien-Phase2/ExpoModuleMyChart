//
//  WPConfirmAppointmentServiceRequest.h
//
//  Created by Chetan Satish on 9/13/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPAppointment.h>

@class WPConfirmAppointmentServiceResponse;

@interface WPConfirmAppointmentServiceRequest : WPRequest

- (nonnull id) initWithAppointment:(nullable WPAppointment *)appointment;
- (nullable NSData *)XMLData;

- (nonnull WPConfirmAppointmentServiceResponse*)allocResponse;

@end
