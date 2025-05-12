//
//  WPReplySettingsServiceRequest.h
//
//  Created by Chetan Satish on 7/21/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPReplySettingsServiceResponse;

@interface WPReplySettingsServiceRequest : WPRequest {
}

@property(nonatomic, strong) WPOrganizationInfo *organization;
@property(nonatomic, strong) NSString *originalMessageID;

-(WPReplySettingsServiceResponse*)allocResponse;

-(id)initForOrganization:(WPOrganizationInfo*)organization originalMessageID:(NSString*)originalMessageID;

@end
