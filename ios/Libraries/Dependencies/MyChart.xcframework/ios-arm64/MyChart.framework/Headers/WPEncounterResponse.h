//
//  WPEncounterResponse.h
//
//  Created by Adam on 7/7/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 01/2015 338750 Cleaning up

#import <Foundation/Foundation.h>

#import <MyChart/WPResponse.h>

@class WPEncounter;

/**
 * \brief Returns an encounter
 */
@interface WPEncounterResponse : WPResponse

@property (nonatomic, strong) WPEncounter* encounter;

/**
 * A WPEncounter is created
 *
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
