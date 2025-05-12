//
//  WPMessageReplySettings.h
//
//  Created by Chetan Satish on 7/21/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import <MyChart/WPObject.h>
#import <MyChart/WPAttachmentSettings.h>

@interface WPMessageReplySettings : WPObject {
	WPAttachmentSettings *_attachmentSettings;
}

@property (nonatomic, strong) WPAttachmentSettings *attachmentSettings;

@end
