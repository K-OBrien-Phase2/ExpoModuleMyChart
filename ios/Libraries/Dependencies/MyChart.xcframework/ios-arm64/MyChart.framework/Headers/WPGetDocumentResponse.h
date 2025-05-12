//
//  WPGetDocumentResponse.h
//  MyChart
//
//  Created by Gary Zhuo on 4/29/19.
//  Copyright © 2019-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPAttachment.h>

@interface WPDocumentResult : WPObject

@property (strong,nonatomic) WPAttachment *attachment;

@end

@interface WPGetDocumentResponse : WPResponse

@property (nonatomic) WPDocumentResult *result;

@property (nonatomic) NSString *fileExtension;

- (instancetype) initWithExtension:(NSString *)extension;

@end
