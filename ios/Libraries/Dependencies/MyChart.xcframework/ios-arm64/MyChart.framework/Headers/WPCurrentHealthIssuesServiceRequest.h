//
//  WPCurrentHealthIssuesServiceRequest.h
//
//  Created by Epic on 6/29/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPCurrentHealthIssuesServiceResponse;

@interface WPCurrentHealthIssuesServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;
-(WPCurrentHealthIssuesServiceResponse*)allocResponse;

@end
