//
//  WPTicketServiceRequest.h
//
//  Created by Chetan Satish on 6/25/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPTicketServiceResponse;

@interface WPTicketServiceRequest : WPRequest {

}

/**
 * There is no outgoing data for this query
 *
 * @return nil
 */
-(NSData *)XMLData;

/**
 * Allocates a new response object
 *
 * @return a new allocated TickerServiceResponse
 */
-(WPTicketServiceResponse*)allocResponse;

@end
