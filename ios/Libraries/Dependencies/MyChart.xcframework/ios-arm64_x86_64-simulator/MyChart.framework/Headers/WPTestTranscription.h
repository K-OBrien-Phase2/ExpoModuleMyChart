//
//  WPTestTranscription.h
//
//  Created by Chetan Satish on 7/2/10.
//  Copyright © 2010-2023 Epic Systems Corporation. All rights reserved.

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>


@interface WPTestTranscription : WPObject {
	NSString *documentID;
	NSString *text;
}

@property (nonatomic,strong, nullable) NSString *documentID;
@property (nonatomic,strong, nullable) NSString *text;

@end
