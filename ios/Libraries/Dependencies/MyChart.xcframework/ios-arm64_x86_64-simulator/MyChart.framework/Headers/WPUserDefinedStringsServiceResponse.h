//
//  WPUserDefinedStringsServiceResponse.h
//
//  Created by Epic on 5/12/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

/**
 * Response object for strings service
 *
 */
@interface WPUserDefinedStringsServiceResponse : WPResponse {

}

/**
 * Assembles and saves a new strings file to the global namespace
 *
 * @param xml the incoming xml data (plist format)
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
