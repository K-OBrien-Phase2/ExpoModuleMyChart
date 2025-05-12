//
//  WPFutureAppointmentsResponse.h
//
//  Created by Matthew Flatau on 12/8/14.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPFutureAppointmentsResult.h>

/**
 * \brief Response for the appointment list query
 *
 * Gets a list of WPAppointment objects
 */
@interface WPFutureAppointmentsResponse : WPResponse

@property (nonatomic, strong, nullable) WPFutureAppointmentsResult *result;

/**
 *
 *
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(nullable NSData*)xml;

@end
