//
//  WPNavigationTitleView.h
//  MyChart
//
//  Created by Matthew Flatau on 5/25/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPNavigationTitleView : UIView

@property (nonatomic, strong, nonnull) UIImageView *patientImage;
@property (nonatomic, strong, nonnull) UILabel *titleLabel;
// View for the menu icon in the navigation bar
@property (nonatomic, strong, nonnull) UIImageView *menuIcon;
@property (nonatomic, strong, nullable) UIView *orgImage;
@property (nonatomic, assign) CGFloat patientImageHeight;
// Height for the menu icon in the navigation bar when shown
@property (nonatomic, assign) CGFloat menuIconHeight;
// Menu actions to be shown in the action sheet when the menu icon is pressed
@property (nonatomic, strong, nullable) NSArray<UIAlertAction*>* menuActions;
@property (nonatomic, assign) Boolean setGestures;

+ (WPNavigationTitleView *_Nonnull)navigationItemForTitle:(NSString *_Nonnull)title inBar:(UINavigationBar *_Nullable)bar;
+ (WPNavigationTitleView *_Nonnull)navigationItemForTitle:(NSString *_Nonnull)title inBar:(UINavigationBar *_Nullable)bar atPatientIndex:(NSInteger)patientIndex;


- (void)setPatientImageHidden:(BOOL)isHidden;

/**
 * Show/hide the menu icon in the navigation bar.
 * Also adds/removes interactibility for the title label accordingly.
 */
- (void)setMenuIconHidden:(BOOL)isHidden;
@end
