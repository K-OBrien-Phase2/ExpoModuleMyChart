//
//  WPPatientInformationRequest.h
//
//  Created by Chetan Satish on 1/26/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

#import <MyChart/WPPatientInformationResponse.h>

@interface WPPatientInformationRequest : WPRequest {
	
	NSInteger patientIndex;
	
}

@property (nonatomic) NSInteger patientIndex;

-(id)initWithPatientIndex:(NSInteger)index;

/**
 * Allocates a new response object
 *
 * @return a new allocated PatientInformationResponse
 */
-(WPPatientInformationResponse*)allocResponse;

@end
