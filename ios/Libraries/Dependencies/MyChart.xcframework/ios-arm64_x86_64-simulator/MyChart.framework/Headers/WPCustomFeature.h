//
//  WPCustomFeature.h
//  iChart
//
//  Created by Matthew Flatau on 7/15/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <MyChart/WPObject.h>

@class WPFeatureDetails;

typedef NS_ENUM(NSInteger, WPCustomFeatureType) {
    kWPCustomFeatureTypeApp = 0,
    kWPCustomFeatureTypeWeb = 1,
    kWPCustomFeatureTypeMychartActivity = 2,
    kWPCustomFeatureTypeNativeActivity = 3,
    kWPCustomFeatureTypeFDI = 4,
    kWPCustomFeatureTypeContextualFDI = 5,
    kWPCustomFeatureTypeWebModeJump = 6,
    kWPCustomFeatureTypeEpicHttpJump = 7,
//    kWPFeatureTypeImage,
//    kWPFeatureTypePDF,
//    kWPFeatureTypeAudio,
//    kWPFeatureTypeVideo,
} ;

@interface WPCustomFeature : WPObject<ImageDataSource>

@property (nonatomic, strong, nullable) NSString *imageUrl;
@property (nonatomic, strong, nullable) NSString *imageVersion;
@property (nonatomic, strong, nullable) NSArray *securityPoints;
@property (nonatomic, assign) WPCustomFeatureType type;
@property (nonatomic, strong, nullable) NSString *uri;
@property (nonatomic, strong, nullable) UIImage *image;
@property (nonatomic, assign) BOOL keepImageOriginalColor;
@property (nonatomic, strong, nullable) NSString *appStoreURL;
@property (nonatomic, strong, nullable) NSArray *allowedHosts;
@property (nonatomic, strong, nullable) NSString *activity;
@property (nonatomic, strong, nullable) NSString *fdiID;
@property (nonatomic, assign) BOOL isFdiIdEncrypted;
@property (nonatomic, strong, nullable) NSString *documentId;
@property (nonatomic, strong, nullable) NSString *details;
@property (nonatomic, strong, nullable) NSString *imageLabel;
@property (nonatomic, strong, nullable) NSString *webMode;
@property (nonatomic, strong, nullable) NSString *nowEncounterCSN;
@property (nonatomic, strong, nullable) NSString *nowEncounterUCI;
@property (nonatomic, strong, nullable) NSString *ltkID;
@property (nonatomic, strong, nullable) NSString *ltkInst;
@property (nonatomic, strong, nullable) NSString *ordID;
// A string of URL encoded QSPs included in an FDI deep link, to be added back to the resolved FDI URL before launching the URL
@property (nonatomic, strong, nullable) NSString *relay;

@property (nonatomic, assign) BOOL shouldShowWarningForWebRTC;
@property (nonatomic, assign) BOOL isTelehealthFeature;
@property (nonatomic, assign) BOOL hide;

- (nullable Class)getNativeViewControllerClass;
+ (nonnull WPCustomFeature*)createFDIFeatureWith:(nonnull NSString*)fdiId isEncrypted:(BOOL)isEncrypted;
+ (nonnull WPCustomFeature*)createFDIFeatureWith:(nonnull NSString*)fdiId isEncrypted:(BOOL)isEncrypted documentId:(nullable NSString*)documentId;
+ (nonnull WPCustomFeature*)createFDIFeatureWith:(nonnull NSString*)fdiId isEncrypted:(BOOL)isEncrypted ordID:(nullable NSString*)ordID;
+ (nonnull WPCustomFeature*)createFDIFeatureWith:(nonnull NSString*)fdiId isEncrypted:(BOOL)isEncrypted documentId:(nullable NSString*)documentId hasContext:(BOOL)hasContext nowEncounterCSN:(nullable NSString*)nowEncounterCSN nowEncounterUCI:(nullable NSString*)nowEncounterUCI;
+ (nonnull WPCustomFeature*)createFDIFeatureWith:(nonnull NSString*)fdiId isEncrypted:(BOOL)isEncrypted documentId:(nullable NSString*)documentId hasContext:(BOOL)hasContext nowEncounterCSN:(nullable NSString*)nowEncounterCSN nowEncounterUCI:(nullable NSString*)nowEncounterUCI ltkID:(nullable NSString*)ltkID ltkInst:(nullable NSString*)ltkInst;
+ (nonnull WPCustomFeature*)createFDIFeatureWith:(nonnull NSString*)fdiId isEncrypted:(BOOL)isEncrypted documentId:(nullable NSString*)documentId hasContext:(BOOL)hasContext nowEncounterCSN:(nullable NSString*)nowEncounterCSN nowEncounterUCI:(nullable NSString*)nowEncounterUCI ltkID:(nullable NSString*)ltkID ordID:(nullable NSString*)ordID ltkInst:(nullable NSString*)ltkInst;
+ (nonnull WPCustomFeature*)createFDIFeatureWith:(nonnull NSString*)fdiId isEncrypted:(BOOL)isEncrypted documentId:(nullable NSString*)documentId hasContext:(BOOL)hasContext nowEncounterCSN:(nullable NSString*)nowEncounterCSN nowEncounterUCI:(nullable NSString*)nowEncounterUCI ltkID:(nullable NSString*)ltkID relay:(nullable NSString*)relay ltkInst:(nullable NSString*)ltkInst;
+ (nonnull WPCustomFeature*)createFDIFeatureWith:(nonnull WPFeatureDetails*)details isEncrypted:(BOOL)isEncrypted hasContext:(BOOL)hasContext;

@end
