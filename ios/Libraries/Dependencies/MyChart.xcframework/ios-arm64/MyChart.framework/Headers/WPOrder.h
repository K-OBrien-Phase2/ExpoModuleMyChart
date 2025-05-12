//
//  WPOrder.h
//
//  Created by Epic on 7/7/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>

@interface WPOrder : WPObject 
{
	NSString* type;
	NSString* codeType;
	NSString* procedureCode;
}

@property (nonatomic,strong) NSString* type;
@property (nonatomic,strong) NSString* codeType;
@property (nonatomic,strong) NSString* procedureCode;

@end
