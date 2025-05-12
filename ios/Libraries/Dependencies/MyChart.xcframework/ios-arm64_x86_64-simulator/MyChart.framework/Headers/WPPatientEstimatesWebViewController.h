//
//  WPPatientEstimatesWebViewController.h
//  MyChart
//
//  Created by Surender Pal Singh on 4/11/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPActivityWebViewController.h>

@interface WPPatientEstimatesWebViewController : WPActivityWebViewController

- (instancetype)init:(NSDictionary<NSString *,NSString*> *)params;

-(instancetype) initForDetails:(NSDictionary<NSString *,NSString*> *)params;

@end
