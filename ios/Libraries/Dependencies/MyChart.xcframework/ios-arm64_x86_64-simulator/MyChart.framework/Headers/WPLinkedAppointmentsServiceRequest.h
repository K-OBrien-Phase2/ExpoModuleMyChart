//
//  WPLinkedAppointmentsServiceRequest.h
//
//  Created by Chetan Satish on 9/10/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPLinkedAppointmentsServiceResponse;

@interface WPLinkedAppointmentsServiceRequest : WPRequest {
	NSString* DAT;
    WPOrganizationInfo* OrganizationInfo;
}

@property (nonatomic,strong) NSString* DAT;
@property (nonatomic,strong) WPOrganizationInfo* OrganizationInfo;

-(id)initWithDat:(NSString*)dat andOrg:(WPOrganizationInfo*)OrganizationInfo;
-(NSData *)XMLData;

-(WPLinkedAppointmentsServiceResponse*)allocResponse;

@end
