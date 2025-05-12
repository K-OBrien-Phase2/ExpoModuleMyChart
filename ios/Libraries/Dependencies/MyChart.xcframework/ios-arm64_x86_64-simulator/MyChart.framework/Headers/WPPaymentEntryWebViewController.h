//
//  WPPaymentEntryWebViewController.h
//  MyChart
//
//  Created by Surender Pal Singh on 2/8/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPActivityWebViewController.h>
#import <MyChart/WPBillSummary.h>
#import <MyChart/WPCreditCard.h>

@protocol WPWebPaymentMethodDelegate <NSObject>

@required

/**
 Called with the payment method selection succeeds

 @param evpID The evpID (Credit card ID) of the selected card
 */
- (void)paymentMethodSucceededWithCard:(WPCreditCard *)card;

/**
 Called with the payment method selection fails
 */
- (void)paymentMethodFailed;

@end


@interface WPPaymentEntryWebViewController : WPActivityWebViewController

@property (nonatomic, weak) id <WPWebPaymentMethodDelegate>	delegate;

- (instancetype)initForRxRefillPaymentWithDeptId:(NSString *)deptID andSelectedCardID:(NSString *)evpID;
- (instancetype)initVisitPaymentWithCSN:(NSString *)CSN;

@end
