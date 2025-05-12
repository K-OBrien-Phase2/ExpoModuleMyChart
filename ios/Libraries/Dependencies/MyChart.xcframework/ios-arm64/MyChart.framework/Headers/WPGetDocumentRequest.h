//
//  WPGetDocumentRequest.h
//  MyChart
//
//  Created by Gary Zhuo on 4/29/19.
//  Copyright © 2019-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPRequest.h>
#import <MyChart/WPGetDocumentResponse.h>

/**
 * Object representing a request for the web service to retrieve a document from the BLOB.
 */
@interface WPGetDocumentRequest : WPRequest

- (instancetype) initWithDcsId:(NSString *)dcsId fileExtension:(NSString *)fileExtension andOrgID:(NSString *)orgID useSourceEncryption:(BOOL)useSourceEncryption useBlobResourceTicket:(BOOL)useBlobResourceTicket;

@end

