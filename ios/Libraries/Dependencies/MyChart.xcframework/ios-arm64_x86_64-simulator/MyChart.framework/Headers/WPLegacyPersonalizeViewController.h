//
//  WPLegacyPersonalizeViewController.h
//  MyChart
//
//  Created by Surender Pal Singh on 6/9/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPViewController.h>

@interface WPLegacyPersonalizeViewController :  WPViewController< UICollectionViewDataSource, UICollectionViewDelegate>
@property (strong, nonatomic) IBOutlet UICollectionViewFlowLayout *flowLayout;
@property (strong, nonatomic) IBOutlet UICollectionView *collectionView;

@end
