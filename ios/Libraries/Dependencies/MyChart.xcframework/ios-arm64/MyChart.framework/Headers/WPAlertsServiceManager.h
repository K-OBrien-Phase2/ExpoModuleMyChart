//
//  WPAlertsServiceManager.h
//  MyChart
//
//  Created by Mohammed Rangwala on 2/15/17.
//  Copyright © 2017-2023 Epic Systems Corporation. All rights reserved.
//
#import <MyChart/WPCoreAlertsService.h>

/**
 * @brief Use this class to get alerts internally
 */
@interface WPAlertsServiceManager : NSObject

+ (void)getAlertsForPatients:(NSArray <WPPatient *>*)patients withDelegate:(id <WPCoreAlertsServiceDelegate>)delegate
               andDataSource:(id <WPCoreAlertsServiceDataSource>)dataSource;

@end
