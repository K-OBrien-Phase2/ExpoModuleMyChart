//
//  WPTicketServiceResponse.h
//
//  Created by Chetan Satish on 6/25/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>

@interface WPTicketServiceResponse : WPResponse {

}

-(void)loadFromXMLData:(NSData*)xml;

@end
