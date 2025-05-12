//
//  PreferredPharmaciesServiceResponse.h
//
//  Created by Chetan Satish on 6/20/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPPreferredPharmaciesResult.h>

@interface WPPreferredPharmaciesServiceResponse : WPResponse {
	WPPreferredPharmaciesResult *preferredPharmaciesResponse;
}

@property (nonatomic, strong) WPPreferredPharmaciesResult *preferredPharmaciesResponse;


@end
