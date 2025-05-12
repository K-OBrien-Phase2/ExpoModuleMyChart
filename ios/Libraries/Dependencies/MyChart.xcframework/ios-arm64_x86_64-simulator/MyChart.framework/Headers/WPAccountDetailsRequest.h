//
//  WPAccountDetailsRequest.h
//
//  Created by Jesse Dumke on 8/7/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <MyChart/WPRequest.h>
#import <Foundation/Foundation.h>

@class WPAccountDetailsResponse;

@interface WPAccountDetailsRequest : WPRequest;

-(id)initWithEncryptedAccountId:(NSString *)encryptedAccountId EncryptedAccountType:(NSString *)encryptedAccountType;
-(id)initWithAccountId:(NSString *)accountId AccountType:(int)accountType EncryptedAccountId:(NSString *)encryptedAccountId EncryptedAccountType:(NSString *)encryptedAccountType;
-(WPAccountDetailsResponse *)allocResponse;

@end
