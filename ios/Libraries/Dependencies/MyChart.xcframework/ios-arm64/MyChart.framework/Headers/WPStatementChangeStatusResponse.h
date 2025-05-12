//
//  WPStatementChangeStatusResponse.h
//
//  Created by Jesse Dumke on 10/24/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <MyChart/WPResponse.h>
#import <MyChart/WPStatementChangeStatusResult.h>

@interface WPStatementChangeStatusResponse : WPResponse { 
    WPStatementChangeStatusResult *changeStatusResponse_;
}

@property (nonatomic, strong) WPStatementChangeStatusResult *changeStatusResponse;

@end
