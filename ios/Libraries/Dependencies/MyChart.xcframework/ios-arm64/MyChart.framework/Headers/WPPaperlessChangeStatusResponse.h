//
//  WPPaperlessChangeStatusResponse.h
//
//  Created by Jesse Dumke on 8/14/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <MyChart/WPResponse.h>
#import <MyChart/WPPaperlessChangeStatusResult.h>

@interface WPPaperlessChangeStatusResponse : WPResponse {
    WPPaperlessChangeStatusResult *changeStatusResponse_;
}

@property (nonatomic, strong) WPPaperlessChangeStatusResult *changeStatusResponse;

@end
