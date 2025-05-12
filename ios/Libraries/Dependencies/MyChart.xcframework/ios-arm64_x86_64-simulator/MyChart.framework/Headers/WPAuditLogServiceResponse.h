//
//  WPAuditLogServiceResponse.h
//
//  Created by Chetan Satish on 10/8/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

@interface WPAuditLogServiceResponse : WPResponse {

}

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
