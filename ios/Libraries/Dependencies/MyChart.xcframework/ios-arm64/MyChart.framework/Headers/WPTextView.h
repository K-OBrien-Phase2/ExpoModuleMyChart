//
//  WPTextView.h
//
//  Created by Matthew Flatau on 9/24/14.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPTextView : UITextView {
    BOOL _canResign;
}

- (void)setCanResignFirstResponder:(BOOL)canResign;

@end
