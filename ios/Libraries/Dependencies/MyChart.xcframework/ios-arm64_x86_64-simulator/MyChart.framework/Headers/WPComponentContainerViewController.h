//
//  WPComponentContainerViewController.h
//  MyChart
//
//  Created by Chad Close on 2/1/18.
//  Copyright © 2018-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPViewController.h>



@interface WPComponentContainerViewController : WPViewController<PEComponentHostProtocol, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate>
@property (nonatomic, strong, nonnull) UIViewController *componentView;
@property(nonatomic, weak, nullable) id<PEComponentHostParentDelegate> parentDelegate;

- (instancetype _Nullable)initWithComponentViewController:(UIViewController *_Nonnull)viewController;

@end
