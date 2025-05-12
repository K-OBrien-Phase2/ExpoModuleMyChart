//
//  WPAuditLogManager.h
//
//  Created by Chetan Satish on 10/7/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPUserAudit.h>
//
#import <MyChart/WPAuditLogServiceRequest.h>


@interface WPAuditLogManager : NSObject {
    
    NSMutableArray *auditLogs;
}

@property (nonatomic, strong, nullable) NSMutableArray *auditLogs;
@property (nonatomic, strong, nullable) NSMutableDictionary *patientAuditLogs;

+ (nullable WPAuditLogManager *)getSharedManager;

+ (void)clearSharedManager;
/*
 * Adds audit for the current patient being accessed
 */
- (void) auditActionWithType:(WLogType)lType andCommandAction:(CommandActions)cmdAction andComment:(nullable NSString *)cmt;
- (void) auditActionWithType:(WLogType)lType andCommandAction:(CommandActions)cmdAction;

/*
 * Adds audit for the specified patient
 */
- (void) auditActionForPatient:(nonnull WPPatient *)patient withType:(WLogType)lType andCommandAction:(CommandActions)cmdAction andComment:(nullable NSString *)cmt;
- (void) auditActionForPatient:(nonnull WPPatient *)patient withType:(WLogType)lType andCommandAction:(CommandActions)cmdAction;

/*
 * Adds audit for the currently logged in user.
 * This audit is used when user performs action outside of patient data. E.g., switching proxies.
 * If the user is also a patient, then any patient specific action like, send medical advice  should go to the patient audit and not the user audit.
 */
- (void) auditActionForUserWithType:(WLogType)lType andCommandAction:(CommandActions)cmdAction andComment:(nullable NSString *)cmt;
- (void) auditActionForUserWithType:(WLogType)lType andCommandAction:(CommandActions)cmdAction;

/*
 * Flush user and all patient audit logs
 */
- (void) flushAuditLog;
@end

