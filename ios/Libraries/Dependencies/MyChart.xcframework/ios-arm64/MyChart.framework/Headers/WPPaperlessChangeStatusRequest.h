//
//  WPPaperlessChangeStatusRequest.h
//
//  Created by Jesse Dumke on 8/14/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <MyChart/WPRequest.h>
#import <MyChart/WPPaperlessOptions.h>

@interface WPPaperlessChangeStatusRequest : WPRequest {
    WPPaperlessOptions *paperlessOptions_;
}

@property (nonatomic, strong) WPPaperlessOptions *paperlessOptions;

-(id)initWithPaperlessOptions:(WPPaperlessOptions *)options;

@end
