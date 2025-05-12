//
//  WPMessageAttachmentListViewController.h
//
//  Created by Chetan Satish on 6/28/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import <MyChart/WPTableViewController.h>
#import <MyChart/WPAttachment.h>
#import <MyChart/WPAttachmentSettings.h>

@interface WPMessageAttachmentListViewController : WPTableViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UITextFieldDelegate>

- (instancetype)initWithAttachments:(NSMutableArray *)attachmentsArray andAttachmentSettings:(WPAttachmentSettings *)attachSettings;

@end
