//
//  WPMessageDetailResponse.h
//
//  Created by Chetan Satish on 9/21/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPMessage.h>
#import <MyChart/WPMessageViewer.h>


@interface WPMessageDetailResponse : WPResponse

@property (nonatomic,strong) WPMessage* respMessage;

-(void)loadFromXMLData:(NSData*)xml;

@end
