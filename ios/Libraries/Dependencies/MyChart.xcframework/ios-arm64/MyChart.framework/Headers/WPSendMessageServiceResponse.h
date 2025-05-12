//
//  WPSendMessageServiceResponse.h
//
//  Created by Chetan Satish on 9/3/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *zling   08/2015 384096 add result

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPSendMessageResult.h>

@interface WPSendMessageServiceResponse : WPResponse {
    WPSendMessageResult* _result;
}

@property (strong, nonatomic) WPSendMessageResult* result;

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
