//
//  WPMarkCompleteServiceResponse.h
//  MyChart
//
//  Created by Jake Silver on 5/22/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPMarkCompleteResult.h>

@interface WPMarkCompleteServiceResponse : WPResponse {
}

@property (nonatomic, strong) WPMarkCompleteResult *markCompleteResult;

-(void)loadFromXMLData:(NSData*)xml;

@end
