//
//  WPPreferredPharmaciesServiceRequest.h
//
//  Created by Chetan Satish on 6/20/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>

@class WPPreferredPharmaciesServiceResponse;

@interface WPPreferredPharmaciesServiceRequest : WPRequest {

}

- (instancetype)initWithMedicationList:(NSArray *)medicationList;

- (WPPreferredPharmaciesServiceResponse*)allocResponse;

@end
