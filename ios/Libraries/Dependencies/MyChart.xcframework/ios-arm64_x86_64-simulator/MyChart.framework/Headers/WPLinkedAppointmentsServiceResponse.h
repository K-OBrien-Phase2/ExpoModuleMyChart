//
//  WPLinkedAppointmentsServiceResponse.h
//
//  Created by Chetan Satish on 9/10/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import <MyChart/WPResponse.h>
#import <MyChart/WPLinkedAppointmentResult.h>

@interface WPLinkedAppointmentsServiceResponse : WPResponse
{
	WPLinkedAppointmentResult *linkedAppts;
}

@property (strong,nonatomic) WPLinkedAppointmentResult *linkedAppts;

- (void)loadFromXMLData:(NSData*)xml;

@end



