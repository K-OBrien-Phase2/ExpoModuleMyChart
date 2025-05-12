//
//  WPAppointmentsListServiceResponse.h
//
//  Created by Adam on 6/9/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPObject.h>

//Result object
@interface WPAppointmentListResult : WPObject

@property (strong, nonatomic, nullable) NSMutableArray *appointmentList;
@property (strong, nonatomic, nullable) NSString* loadMoreDAT;

@end


/**
 * \brief Response for the appointment list query
 *
 * Gets a list of WPAppointment objects
 */
@interface WPAppointmentsListServiceResponse : WPResponse

@property (nonatomic,strong, nullable) WPAppointmentListResult *appointmentResultList;

@end
