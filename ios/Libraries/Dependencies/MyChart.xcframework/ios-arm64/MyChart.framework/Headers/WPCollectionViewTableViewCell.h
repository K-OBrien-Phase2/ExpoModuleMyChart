//
//  WPCollectionViewTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 1/14/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WPCollectionViewTableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

- (CGFloat)cellHeightForTableViewWidth:(CGFloat)width;

@end
