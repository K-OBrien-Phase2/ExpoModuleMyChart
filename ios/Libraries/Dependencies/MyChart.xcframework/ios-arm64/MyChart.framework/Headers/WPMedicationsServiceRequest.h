//
//  WPMedicationsServiceRequest.h
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPMedicationsServiceResponse;

@interface WPMedicationsServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;
-(WPMedicationsServiceResponse*)allocResponse;

@end
