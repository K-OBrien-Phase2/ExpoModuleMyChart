//
//  WPAvsPdf.h
//  MyChart
//
//  Created by Chad Close on 10/25/16.
//  Copyright © 2016-2023 Epic Systems Corporation. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>

@interface WPAvsPdf : WPObject
{
    NSString* documentID;
    NSData* fileBlob;
    NSString* fileName;
    NSString* blobResourceTicket;
    BOOL attemptedToLoadBlobResource;
}

/**
 DCS ID for the stored PDF snapshot. Note that this is the local ID, and probably won't be useful in H2G situations with an external visit.
 */
@property (nonatomic,strong) NSString* documentID;
@property (nonatomic,strong) NSData* fileBlob;
@property (nonatomic,strong) NSString* fileName;
@property (nonatomic,strong) NSString* blobResourceTicket;
@property BOOL attemptedToLoadBlobResource;

@end
