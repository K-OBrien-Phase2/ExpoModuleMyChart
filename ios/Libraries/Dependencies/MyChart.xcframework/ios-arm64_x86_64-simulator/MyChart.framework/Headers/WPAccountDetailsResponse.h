//
//  WPAccountDetailsResponse.h
//
//  Created by Jesse Dumke on 8/7/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <MyChart/WPResponse.h>
#import <MyChart/WPBillDetail.h>

@interface WPAccountDetailsResponse : WPResponse {
    WPBillDetail *billDetail_;
}

@property (nonatomic, strong) WPBillDetail *billDetail;

@end
