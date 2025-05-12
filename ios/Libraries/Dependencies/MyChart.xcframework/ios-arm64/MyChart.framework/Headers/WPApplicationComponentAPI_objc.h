//
//  WPApplicationComponentAPI_objc.h
//  MyChart
//
//  Created by David Huntsman on 3/21/19.
//  Copyright © 2019-2023 Epic Systems Corporation. All rights reserved.
//

@interface WPApplicationComponentAPI_objc : NSObject
+ (BOOL) isInternalBuild;
+ (NSString * _Nonnull) getApplicationId;
+ (BOOL) isHealthKitDataAvailable;
+ (void) resetHealthKitInfo;
+ (void) loadHealthKitInfo;
+ (void) removeMapForOrganization:(NSString * _Nonnull) orgId;
@end
