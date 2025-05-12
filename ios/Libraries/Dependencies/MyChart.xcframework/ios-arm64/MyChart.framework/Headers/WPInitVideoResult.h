//
//  WPInitVideoResult.h
//  iChart
//
//  Created by Matthew Flatau on 2/28/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
#import <MyChart/WPTelemedicineError.h>

@interface WPInitVideoResult : WPObject

@property (nonatomic, strong, nullable) NSString *videoVisitKey;
@property (nonatomic, assign) WPTelemedicineResponseStatus status;
@property (nonatomic, strong, nullable) WPTelemedicineError *error;
@property (nonatomic, assign) BOOL canJoinVideoVisit;
@property (nonatomic, assign) WPTelemedicineCannotJoinReason cannotJoinReason;

@end
