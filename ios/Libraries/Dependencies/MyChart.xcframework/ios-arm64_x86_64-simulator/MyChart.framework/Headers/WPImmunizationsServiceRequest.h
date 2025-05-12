//
//  WPImmunizationsServiceRequest.h
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPImmunizationsServiceResponse;

@interface WPImmunizationsServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;

-(WPImmunizationsServiceResponse*)allocResponse;

@end
