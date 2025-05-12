//
//  WPPhotoViewerViewController.h
//  MyChart
//
//  Created by Yash Vaka on 10/2/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPViewController.h>
#import <MyChart/WPShareViewController.h>

@interface WPPhotoViewerViewController : WPViewController <UIScrollViewDelegate, WPShareDelegate>

- (instancetype)initWithImage:(UIImage *)image;
- (instancetype)initWithImage:(NSData *)imageData allowShare:(BOOL)allowShare isPatientDocument:(BOOL)isPatientDocument withName:(NSString *)imageName dcsID:(NSString *)dcsID extension:(NSString *)imageExtension;

@end

