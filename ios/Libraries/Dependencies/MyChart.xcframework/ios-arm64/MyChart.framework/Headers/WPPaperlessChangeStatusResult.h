//
//  WPPaperlessChangeStatusResult.h
//
//  Created by Jesse Dumke on 10/24/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <MyChart/WPObject.h>
#import <MyChart/WPAccountSummary.h>     //PaperlessStatus is defined here

typedef NS_ENUM(NSInteger, PaperlessUpdateStatusResponseCode) {
    kPaperlessUpdateStatusFailed = 0,
    kPaperlessUpdateStatusSucceeded = 1,
    kPaperlessUpdateStatusInvalidPhoneNumber = 2,
    kPaperlessUpdateStatusNoContactsOnFile = 3
} ;

@interface WPPaperlessChangeStatusResult : WPObject {
    PaperlessStatus newStatus_;
    PaperlessUpdateStatusResponseCode resultCode_;
}

@property (nonatomic) PaperlessStatus newStatus;
@property (nonatomic) PaperlessUpdateStatusResponseCode resultCode;

@end
