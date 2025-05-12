//
//  WPImmunization.h
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>
#import <MyChart/WPUtil_Dates.h>
#import <MyChart/WPUtil_Xml.h>

@interface WPImmunization : WPObject<InlineEducationSourceProtocol> {
	NSArray * dates;
}

@property (nonatomic, strong, nullable) NSArray * dates;
@property (nonatomic, strong, nullable) NSString * immId;

//InlineEducationSourceProtocol
@property(nonatomic) BOOL hasInlineEducationSource;
@property(nonatomic, nonnull) NSString* getInlineEducationContextID;
@property(nonatomic) InlineEducationType getInlineEducationContext;
@property(nonatomic, nonnull) NSString* getInlineEducationSearchTerm;

@end
