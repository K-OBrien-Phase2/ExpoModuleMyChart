//
//  WPAlertNotification.h
//  MyChart
//
//  Created by Matthew Flatau on 2/18/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPAlert.h>
@class WPPatient;

@interface WPAlertNotification : NSObject

@property (nonatomic, strong) WPAlert *alert;
@property (nonatomic, strong) WPPatient *patient;
@property (nonatomic, assign) NSUInteger patientIndex;

@end
