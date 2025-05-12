//
//  WPCommunityManageMyAccountsWebViewController.h
//  MyChart
//
//  Created by Shawn Zhao on 1/29/18.
//  Copyright © 2018-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPActivityWebViewController.h>

@interface WPCommunityManageMyAccountsWebViewController : WPActivityWebViewController

- (instancetype)init;
- (instancetype)init:(NSMutableDictionary*) parameters;
- (instancetype)initForLinking;
- (void) setCommunityUpdateContext:(NSString *) context;
@end
