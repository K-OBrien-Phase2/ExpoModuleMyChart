//
//  WPTextField.h
//
//  Created by Matthew Flatau on 9/24/14.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPTextField : UITextField

@property (nonatomic) IBInspectable CGFloat textRectInset;

- (void)setCanResignFirstResponder:(BOOL)canResign;

@end
