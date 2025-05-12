//
//  WPCurrentHealthIssuesServiceResponse.h
//
//  Created by Epic on 6/29/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *apallika 05/2017 478570 Adding support for external data

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPHealthIssueListResult.h>

@interface WPCurrentHealthIssuesServiceResponse : WPResponse {
	NSMutableArray * healthIssues;
}

@property (nonatomic, strong) NSMutableArray * healthIssues;
@property (nonatomic, strong) WPHealthIssueListResult *healthIssueListResult;

@end
