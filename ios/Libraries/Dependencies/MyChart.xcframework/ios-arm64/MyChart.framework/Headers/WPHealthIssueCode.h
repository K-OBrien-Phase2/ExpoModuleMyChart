//
//  WPHealthIssueCode.h
//  MyChart
//
//  Created by Kyle Wu on 1/16/20.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>
#import <MyChart/WPUtil_Xml.h>

@interface WPHealthIssueCode : WPObject

@property(nonatomic, strong) NSString * codeId;
@property(nonatomic, assign) int codeSystem;
@property(nonatomic, assign) bool isPrimary;

/// return true if the health code can be used for education content linking purposes
-(BOOL)isValidForContentLinking;

@end
