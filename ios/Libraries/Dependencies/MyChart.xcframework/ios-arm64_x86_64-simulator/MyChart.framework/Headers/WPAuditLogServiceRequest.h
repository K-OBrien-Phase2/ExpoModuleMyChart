//
//  WPAuditLogServiceRequest.h
//
//  Created by Chetan Satish on 10/8/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPUtil_Dates.h>

@class WPAuditLogServiceResponse;

@interface WPAuditLogServiceRequest : WPRequest {
	NSArray *auditLog;
}

@property (nonatomic,strong) NSArray *auditLog;

- (id)initWithAuditLog:(NSArray *)auditLogInput;
- (NSData *)XMLData;

- (WPAuditLogServiceResponse*)allocResponse;

@end
