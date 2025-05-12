//
//  WPVideoPlayerViewController.h
//  MyChart
//
//  Created by Yash Vaka on 10/2/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPViewController.h>
#import <MyChart/WPShareViewController.h>

@interface WPVideoPlayerViewController : WPViewController <WPShareDelegate>

- (instancetype)initWithVideoURL:(NSURL *)url;
- (instancetype)initWithVideoURL:(NSURL *)url allowShare:(BOOL)allowShare isPatientDocument:(BOOL)isPatientDocument withName:(NSString *)videoName dcsID:(NSString *)dcsID;

@end

