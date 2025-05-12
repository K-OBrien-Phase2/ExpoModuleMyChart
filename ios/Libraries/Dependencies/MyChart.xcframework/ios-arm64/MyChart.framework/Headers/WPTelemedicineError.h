//
//  WPTelemedicineError.h
//  iChart
//
//  Created by Matthew Flatau on 2/24/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.

#import <MyChart/WPObject.h>

typedef NS_ENUM(NSInteger, WPTelemedicineErrorType) {
    kWPTelemedicineErrorUndefined = -1,
    kWPTelemedicineErrorUnknown = 0, //Unknown error
    kWPTelemedicineErrorTelemed = 1, //Generic telemed exeception
    kWPTelemedicineErrorDeviceNotFound = 2, //Don't have the correct configuration or server (deprecated)
    kWPTelemedicineErrorSetConnectionStatus = 3, //Set connection status failed
    kWPTelemedicineErrorRoom = 4, //IC server failed to create the room on the vidyo server (deprecated)
    kWPTelemedicineErrorMember = 5, //IC server failed to create the member on the vidyo server (deprecated)
    kWPTelemedicineErrorStreamStatus = 6, //Error setting the streaming status (deprecated)
    kWPTelemedicineErrorPatientAlreadyConnected = 7, //Patient is already signed on with a different device
    kWPTelemedicineErrorAppointmentNotAvailableToJoin = 8, //Either too early or too late to join the appointment
    kWPTelemedicineErrorVideoHangup = 9 //Error deleting room or user
};

@interface WPTelemedicineError : WPObject

@property (nonatomic, strong, nullable) NSString *errorDescription;
@property (nonatomic, assign) WPTelemedicineErrorType errorID;

@end
