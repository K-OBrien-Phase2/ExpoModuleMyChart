//
//  WPPastAppointmentDetailsRequest.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 8/13/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPRequest.h>
#import <MyChart/WPPastAppointmentDetailsResponse.h>

@interface WPPastAppointmentDetailsRequest : WPRequest {
    NSString *DAT;
    BOOL isExternal;
    NSString *orgID;
    NSString *CSN;
}

@property (nonatomic, strong) NSString* DAT;
@property (nonatomic) BOOL isExternal;
@property (nonatomic, strong) NSString* orgID;
@property (nonatomic, strong) NSString* CSN;

-(NSData*)XMLData;

-(WPPastAppointmentDetailsResponse*)allocResponse;

@end
