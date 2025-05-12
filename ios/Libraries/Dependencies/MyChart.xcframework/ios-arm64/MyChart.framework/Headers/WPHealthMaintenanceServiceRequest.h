//
//  WPHealthMaintenanceServiceRequest.h
//
//  Created by Epic on 7/14/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPRequest.h>
@class WPHealthMaintenanceServiceResponse;

@interface WPHealthMaintenanceServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;

-(WPHealthMaintenanceServiceResponse*)allocResponse;

@end
