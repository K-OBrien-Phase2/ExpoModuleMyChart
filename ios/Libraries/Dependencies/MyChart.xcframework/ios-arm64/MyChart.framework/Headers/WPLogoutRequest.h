//
//  WPLogoutRequest.h
//  MyChart
//
//  Created by Tim Knutson on 1/8/18.
//  Copyright © 2018-2023 Epic Systems Corporation. All rights reserved.
//
@class WPLogoutResponse;
@interface WPLogoutRequest : WPRequest

- (id)init;
- (id)initWithAuditLog:(NSArray *)auditLogInput;
- (id)initWithAuditLog:(NSArray *)auditLogInput andSecureLogs:(NSArray *)secureAuditLogInput;

- (WPLogoutResponse *)allocResponse;


@end
