//
//  WPMedicationsRefillServiceRequest.h
//
//  Created by Chetan Satish on 6/21/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import <MyChart/WPRequest.h>
#import <MyChart/WPMedicationForRefill.h>
#import <MyChart/WPCreditCard.h>
#import <MyChart/WPPharmacyDeliveryMethod.h>

@class WPMedicationsRefillServiceResponse;

typedef NS_ENUM(NSInteger, PaymentWorkflowType) {     //see execProd^WPCCENG
    kWorkflowProfessionalPayment = 1,
    kWorkflowHospitalPayment = 2,
    //3 is "old" e-visit - will not be implemented
    kWorkflowCopayPayment = 4,
    kWorkflowEvisitPayment = 5,   //not implemented yet
    kWorkflowSBOPayment = 6,
    kWorkflowRefillPayment=7    //not implemented yet
} ;

typedef NS_ENUM(NSInteger, TransactionType) {    //see Epic.CreditCard.Interfaces
    kTransactionTypeUnknown = 0,
    kTransactionTypePreAuthorize = 1,
    kTransactionTypePostAuthorize = 2,
    kTransactionTypeCharge = 3,
    kTransactionTypeCredit = 4,
    kTransactionTypeVoid = 5,
    kTransactionTypeTokenization = 6,
    kTransactionTypeGetTransactionStatus = 7,
    kTransactionTypeReAuthorize = 8
} ;

@interface WPMedicationsRefillServiceRequest : WPRequest {

	NSArray *medicationList;
	NSString *pharmacyID;
	NSString *pharmacyName;
	NSString *date;
	NSString *time;
	NSString *comments;
    WPPharmacyDeliveryMethod *deliveryMethod_;
    WPObject *paymentMethod_;
    
    PaymentWorkflowType workflow_;
    TransactionType transactionType_;
    WPCreditCard *card_;
    NSString *amount_;
}

@property (nonatomic, strong) NSArray *medicationList;
@property (nonatomic, strong) NSString *pharmacyID;
@property (nonatomic, strong) NSString *pharmacyName;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *time;
@property (nonatomic, strong) NSString *comments;
@property (nonatomic, strong) WPPharmacyDeliveryMethod *deliveryMethod;
@property (nonatomic, strong) WPObject *paymentMethod;
@property (nonatomic) PaymentWorkflowType workflow;
@property (nonatomic) TransactionType transactionType;
@property (strong, nonatomic) WPCreditCard *card;
@property (strong, nonatomic) NSString *amount;


-(WPMedicationsRefillServiceResponse*)allocResponse;

@end
