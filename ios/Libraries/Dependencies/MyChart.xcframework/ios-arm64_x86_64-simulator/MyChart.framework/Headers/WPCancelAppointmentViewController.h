//
//  WPCancelAppointmentViewController.h
//
//  Created by Chetan Satish on 9/9/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPTableViewController.h>
#import <MyChart/WPAppointment.h>

typedef NS_ENUM(NSInteger, WPCancelType) {
    kWPCancelTypeDirectCancel,
    kWPCancelTypeRequestMsg,
};


@protocol WPCancelAppointmentDelegate <NSObject>
- (void) cancelAppointmentDidNotConfirm;
- (void) cancelAppointmentConfirmed:(nullable NSArray*)cancelledAppointments withCancelType:(WPCancelType)type;
- (void) cancelAppointmentConfirmFailure:(nullable NSArray*)cancelledAppointments withCancelType:(WPCancelType)type;
@end


@interface WPCancelAppointmentViewController : WPTableViewController <UITextViewDelegate>

@property (nonatomic, weak, nullable) id<WPCancelAppointmentDelegate> delegate;

- (nullable instancetype)initWithAppointment:(nullable WPAppointment *)apt andCancelOption:(WPCancelType)ctype;

@end
