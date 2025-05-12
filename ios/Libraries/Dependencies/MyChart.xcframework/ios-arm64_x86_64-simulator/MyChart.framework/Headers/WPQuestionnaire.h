//
//  WPQuestionnaire.h
//
//  Created by Larry Irwin II on 8/13/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 01/2015 338750 Updating schema

#import <Foundation/Foundation.h>

#import <MyChart/WPObject.h>

@interface WPQuestionnaire : WPObject

@property (nonatomic, assign) BOOL		beenFilled;
@property (nonatomic, assign) BOOL		canBeReviewed;
@property (nonatomic, strong) NSString*	context;
@property (nonatomic, strong) NSString*	contextID;

@end
