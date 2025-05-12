//
//  WPConfirmAppointmentServiceResponse.h
//
//  Created by Chetan Satish on 9/13/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

@interface WPConfirmAppointmentServiceResult: WPObject

@property (nonatomic, assign) BOOL success;

@end

@interface WPConfirmAppointmentServiceResponse : WPResponse

@property (nonatomic, strong, nullable) WPConfirmAppointmentServiceResult *confirmAppointmentResult;

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(nullable NSData*)xml;

@end
