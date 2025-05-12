//
//  WPCancelAppointmentServiceResponse.h
//
//  Created by Chetan Satish on 09/09/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  Revision:
//  *cclose 08/2016 437211 Added bool for success of cancel appt reponse

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

@interface WPCancelAppointmentServiceResponse : WPResponse {

}

@property (nonatomic)	BOOL	result;

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
