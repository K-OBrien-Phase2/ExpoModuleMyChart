//
//  WPIDCardViewController.h
//
//  Created by Sanders Baik on 3/28/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPViewController.h>

@interface WPIDCardViewController : WPViewController <WKNavigationDelegate>

-(instancetype)initWithCoverage:(NSString *)cvgId;

@end
