//
//  WPTestResultsServiceResponse.h
//
//  Created by Epic on 6/9/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPObject.h>

//Result object
@interface TestListResult : WPObject
{
	NSMutableArray *testList;
	NSString *nextLabLink;
	NSString *resultVisibility;
    NSMutableArray *nextLabMap;
    
}

@property (strong,nonatomic) NSMutableArray *testList;
@property (strong,nonatomic) NSString *nextLabLink;
@property (strong,nonatomic) NSString *resultVisibility;
@property (nonatomic,strong) NSMutableArray *nextLabMap;

@end


@interface WPTestResultsServiceResponse : WPResponse {
	TestListResult *testListResult;
}
@property (nonatomic, strong) TestListResult *testListResult;

-(void)loadFromXMLData:(NSData*)xml;

@end
