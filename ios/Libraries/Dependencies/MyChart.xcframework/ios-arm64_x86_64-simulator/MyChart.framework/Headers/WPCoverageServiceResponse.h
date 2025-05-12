//
//  CoverageServiceResponse.h
//
//  Created by Sanders Baik on 7/16/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPObject.h>


@interface WPCoveragesResult : WPObject
@property (nonatomic, strong) NSMutableArray* coverages;
@end

@interface WPCoverageServiceResponse : WPResponse

@property (nonatomic, strong) WPCoveragesResult *coveragesResult;

@end
