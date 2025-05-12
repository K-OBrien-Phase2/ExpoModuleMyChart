//
//  WPServerSet.h
//
//  Created by Epic on 5/6/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>

/**
 * Contains the set of servers
 *
 */
@interface WPServerSet : WPObject 
{
	NSArray*	webservers;			/** Array of web servers */
}

@property (nonatomic,strong)	NSArray*	webservers;

@end
