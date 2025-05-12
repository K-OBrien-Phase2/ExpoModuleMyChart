//
//  WPStatementRequest.h
//
//  Created by Jesse Dumke on 9/7/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <MyChart/WPRequest.h>
#import <MyChart/WPStatement.h>
#import <Foundation/Foundation.h>

@class WPStatementResponse;

@interface WPStatementRequest : WPRequest {
    WPStatement *statement_;
}

@property (nonatomic, strong) WPStatement *statement;

-(id)initWithStatement:(WPStatement *)statement;
-(WPStatementResponse *)allocResponse;

@end
