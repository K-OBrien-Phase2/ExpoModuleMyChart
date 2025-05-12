//
//  WPLinkedAppointmentResult.h
//
//  Created by Chetan Satish on 9/17/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>

@interface WPLinkedAppointmentResult : WPObject

@property (nonatomic, strong) NSMutableArray *appointments;
@property (nonatomic, strong) NSMutableArray *cancelReasons;
@property (nonatomic, assign) BOOL cancelReasonRequired;
@property (nonatomic, assign) BOOL allowComments;
@property (nonatomic, strong) NSString *linkType;

@end
