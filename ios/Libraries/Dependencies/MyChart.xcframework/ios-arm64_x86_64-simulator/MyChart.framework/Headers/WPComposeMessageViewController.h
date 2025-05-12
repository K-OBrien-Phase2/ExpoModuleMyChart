//
//  WPComposeMessageViewController.h
//
//  Created by Epic on 9/18/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.

#import <UIKit/UIKit.h>
#import <MyChart/WPViewController.h>
#import <MyChart/WPGetMedicalAdviceSubjectListViewController.h>
#import <MyChart/WPProvider.h>
#import <MyChart/WPGetViewersProtocol.h>
#import <MyChart/WPViewerSelectionTableViewController.h>
#import <MyChart/WPSendMessageServiceRequest.h>

@class WPMessage;

@interface WPComposeMessageViewController : WPViewController

@property (nonatomic, weak) UIViewController *caller;

//Data for possible selections needed for potential UI elements
@property (nonatomic, strong)    NSArray*    topicList;
@property (nonatomic, strong)    NSArray*    providerList;
@property (nonatomic, strong)    NSArray*    poolList;
@property (nonatomic, strong)    NSArray*    subjectList;
@property (nonatomic, strong)    NSString*    preferredSubject;
@property (nonatomic, strong)    NSString*    messagePrefix;
@property (nonatomic, assign)    BOOL         shouldRefreshWebviewOnClose;

- (instancetype)initWithType:(MESSAGETYPE)type;

/**
 * Create a CMVC that is configured to create a brand new medical advice request
 */
- (instancetype)initForMedicalAdviceRequest;

/**
 * Create a CMVC that is configured to create a brand new medical advice request to the specified organization with task ID
 */
- (instancetype)initForMedicalAdviceRequestWithEncryptedLTKID:(NSString *)encryptedLtkID andOrganization:(WPOrganizationInfo *)organization;

/**
 * Create a CMVC that is configured to create a new message of type MedicalAdviceRequest and may be coming from test results
 */
- (instancetype)initForMedicalAdviceRequestIsTestResultQuestion:(BOOL)isTestResultQuestion;

/**
 * Create a CMVC that is configured to create a brand new medical advice request to the specified
 * organization
 */
- (instancetype)initForMedicalAdviceRequestWithOrganization:(WPOrganizationInfo*)organization;

/**
 * Create a CMVC that is configured to create a brand new medical advice request to the specified
 * organization and may be coming from test results
 */
- (instancetype)initForMedicalAdviceRequestWithOrganization:(WPOrganizationInfo*)organization isTestResultQuestion:(BOOL)isTestResultQuestion;

/**
 * Create a CMVC that is configured to create a brand new customer service message
 */
- (instancetype)initForCustomerService;

/**
 * Create a CMVC that is configured to create a brand new customer service message from a
 * specific workflow for a specific organization.
 * @param encMsgInfo Server encrypted information for which topics to load and what records
 * to link, gotten from a URL query parameter
 * @param organization organization to which the message will be sent
 */

- (instancetype)initForCustomerServiceWithInfo:(NSString *)encMsgInfo andOrganization:(WPOrganizationInfo*)organization;

/**
 * Create a CMVC that is configured to create a brand new customer service message  to the specified
 * organization
 */
- (instancetype)initForCustomerServiceWithOrganization:(WPOrganizationInfo*)organization;

/**
 * Create a CMVC that is configured to reply to the
 * original message
 *
 * @param originalMsg the message to reply to
 */
- (instancetype) initForReplyWithOriginalMessage:(WPMessage*)msg;

- (instancetype)initForMedicalAdviceRequestWithProvider:(id<PEMessageProvider>)provider;

/**
 * Create a CMVC that is configured to create a new medical advice request with an attached file
 */
- (instancetype)initForMedicalAdviceRequestWithAppleECGFileURL:(NSString*)url;

+ (BOOL) canSendMedicalAdviceMessages;

/// helper method to check if the Topics cell should be displayed for the current message
- (BOOL)shouldShowTopicsCell;

/// helper method to check if the To cell should be displayed for the current message
- (BOOL)shouldShowToCell;

/// helper method to get the correct SendMessageType based on the current message
- (WPSendMessageType)getSendType;

/// helper method to get the correct text for the disclaimer header
- (NSString *)getHeaderText;

/// helper method to get the correct delimited string of security points required for viewers
- (NSString *)getViewersSecurityString;


@end
