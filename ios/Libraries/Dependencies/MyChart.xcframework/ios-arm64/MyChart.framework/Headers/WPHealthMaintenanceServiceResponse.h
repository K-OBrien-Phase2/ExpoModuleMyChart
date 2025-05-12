//
//  WPHealthMaintenanceServiceResponse.h
//
//  Created by Epic on 7/14/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *jsilver 05/2017 4808686 Updating to new web service

#import <UIKit/UIKit.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPGetHealthAdvisoriesResult.h>

@interface WPHealthMaintenanceServiceResponse : WPResponse {
}

typedef NS_ENUM(NSInteger, GetHealthAdvisoriesWSVersion) {
    use2013Version,
    use2017Version,
    UNKNOWN
};

//the 2017 version of the service now returns a root node with additional objects (previously, it simply returned an array of health maintenance topics).
//For backwards compatability, keep the property at the root of the response object. But also add the new response type.

@property (nonatomic, strong) NSMutableArray *maintenance;
@property (nonatomic, strong) WPGetHealthAdvisoriesResult *healthMaintenanceResult;

-(void)loadFromXMLData:(NSData*)xml;
+(GetHealthAdvisoriesWSVersion)getServiceVersion;

@end
