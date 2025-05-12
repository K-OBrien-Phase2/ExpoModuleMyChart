//
//  WPStatementResponse.h
//
//  Created by Jesse Dumke on 9/7/12.
//  Copyright © 2012-2023 Epic Systems Corporation. All rights reserved.
//
//  Revision:
//  *csatish 4/14 Removed CGPDFDocumentRef and add NSData to prevent potential memory leaks
//  *mflatau 06/2014 316778 Updating to ARC

#import <MyChart/WPResponse.h>

@interface WPStatementResponse : WPResponse {
    NSData *pdfDocumentData_;
}

@property (nonatomic, strong) NSData *pdfDocumentData;

@end
