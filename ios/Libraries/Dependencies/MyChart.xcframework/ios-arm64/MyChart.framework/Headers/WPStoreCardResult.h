//
//  WPStoreCardResult.h
//
//  Created by Jesse Dumke on 7/20/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

typedef NS_ENUM(NSInteger, StoreCardResultCodes) {
    kStoreCardFailure = 0,
	kStoreCardSuccess = 1
} ;

#import <MyChart/WPObject.h>

@interface WPStoreCardResult : WPObject {
    StoreCardResultCodes resultCode_;
}

@property (nonatomic) StoreCardResultCodes resultCode;

@end
