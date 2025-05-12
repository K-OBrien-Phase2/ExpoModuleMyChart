//
//  WPHealthAdvisoryUpdateInfo.h
//  MyChart
//
//  Created by Jake Silver on 5/17/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPObject.h>


@interface WPHealthAdvisoryUpdateInfo : WPObject

@property (nonatomic, assign) BOOL canMarkAsComplete;
@property (nonatomic, strong) NSDate *earliestCompletionDateISO;
@property (nonatomic, strong) NSDate *enteredDateISO;
@property (nonatomic, assign) BOOL isUpdatePending;

@end
