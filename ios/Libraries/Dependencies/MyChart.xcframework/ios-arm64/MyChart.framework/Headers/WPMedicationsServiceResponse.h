//
//  WPMedicationsServiceResponse.h
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *jdumke  02/2015 335592 support new version of medications service

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPMedicationListResult.h>
#import <MyChart/WPCommunityMedicationListResult.h>

@interface WPMedicationsServiceResponse : WPResponse {

    
}

//the 2014 version of the service now returns a root node with additional objects (previously, it simply returned an array of medications).
//For backwards compatability, keep the property at the root of the response object. But also add the new response type.
@property (nonatomic, strong) NSMutableArray * medications;
@property (nonatomic, strong) WPMedicationListResult* medicationListResult;
@property (nonatomic, strong) WPCommunityMedicationListResult *communityMedicationListResult;

-(void)loadFromXMLData:(NSData*)xml;


@end
