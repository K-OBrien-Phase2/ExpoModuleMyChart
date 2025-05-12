//
//  WPLoadingView.h
//
//  Created by Epic on 7/21/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>


@interface WPLoadingView : UIView

+(void)hideView;
+(WPLoadingView *)showInView:(UIView*)view;

@end
