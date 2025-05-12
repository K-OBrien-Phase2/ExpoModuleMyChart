//
//  WPHealthIssue.h
//
//  Created by Epic on 6/29/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *apallika 05/2017 478570 Add support for organization info

#import <Foundation/Foundation.h>
#import <MyChart/WPObject.h>
#import <MyChart/WPUtil_Dates.h>
#import <MyChart/WPUtil_Xml.h>
#import <MyChart/WPOrganizationInfo.h>
#import <MyChart/WPHealthIssueCode.h>
/*!
 Health Issue
 */
@interface WPHealthIssue : WPObject<InlineEducationSourceProtocol> {
	NSDate *date;
    NSDate *dateNoted;
    NSMutableArray *orgInfo;
}

@property (nonatomic,strong,nullable) NSDate *date;
@property (nonatomic,strong,nullable) NSDate *dateNoted;
@property (nonatomic,strong,nullable) NSMutableArray *orgInfo;   //Holds an array of WPOrganizationInfo objects to account for
                                                        //deduplication where an allergy can come from >1 organization
@property (nonatomic,strong,nullable) NSMutableArray *codeList;
@property (nonatomic,strong,nullable) WPHealthIssueCode *primaryCode;

//WPHSClinicalUpdateProtocol
typedef NS_ENUM(NSInteger, WPHSUpdateStatus);
@property(nonatomic) WPHSUpdateStatus status;

//InlineEducationSourceProtocol
@property(nonatomic) BOOL hasInlineEducationSource;
@property(nonatomic, nonnull) NSString* getInlineEducationContextID;
@property(nonatomic) InlineEducationType getInlineEducationContext;
@property(nonatomic, nonnull) NSString* getInlineEducationSearchTerm;

- (BOOL) isExternal;
- (WPOrganizationInfo *_Nullable) getFirstOrg;

// Helper method that loop through a list of health code and find/set the primary health code for the given health issue
- (void) generatePrimaryCode;
@end
