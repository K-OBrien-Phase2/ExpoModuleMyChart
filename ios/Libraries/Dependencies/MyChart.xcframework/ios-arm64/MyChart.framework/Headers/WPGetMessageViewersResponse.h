//
//  WPGetMessageViewersResponse.h
//  MyChart
//
//  Created by Alex J White on 2/8/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPResponse.h>
#import <MyChart/WPGetMessageViewersResult.h>

@interface WPGetMessageViewersResponse : WPResponse

@property (nonatomic,strong) WPGetMessageViewersResult *result;

-(void)loadFromXMLData:(NSData*)xml;


@end
