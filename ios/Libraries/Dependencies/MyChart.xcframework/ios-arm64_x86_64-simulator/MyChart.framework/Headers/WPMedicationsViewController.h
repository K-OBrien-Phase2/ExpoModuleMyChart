//
//  WPMedicationsViewController.h
//
//  Created by Chetan Satish on 9/28/11.
//  Copyright © 2011-2023 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *jdumke  03/2015 335592 show banner if the list is possibly filtered

#import <UIKit/UIKit.h>
#import <MyChart/WPTableViewController.h>
#import <MyChart/WPMedicationListResult.h>
#import <MyChart/WPMedicationsServiceResponse.h>

@interface WPMedicationsViewController : WPTableViewController

@property (nonatomic,strong)    WPMedicationsServiceResponse* medicationResponse;

-(instancetype) initWithMedicationListResult: (WPMedicationListResult *)medResult hasTabBar:(BOOL)hasTabBar;

@end
