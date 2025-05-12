//
//  WPMARSettingsServiceRequest.h
//
//  Created by Chetan Satish on 9/8/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPMARSettingsServiceResponse;

@interface WPMARSettingsServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;
-(id)initWithOrganizationId:(NSString*)orgId;
-(id)initWithOrganization:(WPOrganizationInfo*)organization;

-(WPMARSettingsServiceResponse*)allocResponse;

@end
