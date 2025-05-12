//
//  WPAddToWaitListRequest.h
//  MyChart
//
//  Created by Alex J White on 1/5/15.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <MyChart/WPRequest.h>
#import <MyChart/WPAddToWaitListResponse.h>
#import <MyChart/WPAppointment.h>

typedef NS_ENUM(NSInteger, WPWaitListAction){
    kWPWaitListActionAdd=1,
    kWPWaitListActionRemove=2
};


@interface WPAddToWaitListRequest : WPRequest

@property (nonatomic, strong) WPAppointment *appointment;

@property (nonatomic, assign) WPWaitListAction waitListAction;

- (instancetype)initWithAppointment:(WPAppointment *)appointment andAction:(WPWaitListAction)waitListAction;;

- (WPAddToWaitListResponse *)allocResponse;


@end
