//
//  WPFDIResponse.h
//  MyChart
//
//  Created by Yash Vaka on 11/6/15.
//  Copyright © 2015-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPFDIResult.h>

@interface WPFDIResponse : WPResponse

@property (nonatomic,strong)	WPFDIResult*	result;

@end
