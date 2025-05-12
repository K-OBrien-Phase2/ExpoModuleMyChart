//
//  WPMessageDeleteResponse.h
//
//  Created by Chetan Satish on 11/5/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

@interface WPMessageDeleteResponse : WPResponse {

}
/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
