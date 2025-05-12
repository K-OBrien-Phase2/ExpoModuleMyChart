//
//  WPSurgicalCase.h
//  MyChart
//
//  Created by David Huntsman on 5/21/18.
//  Copyright © 2018-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>
#import <MyChart/WPSurgicalProcedure.h>
#import <MyChart/WPQuestionnaire.h>

@interface WPSurgicalCase : WPObject

@property (nonatomic, strong, nullable) NSString* CSN;
@property (nonatomic, strong, nullable) NSDate* dateAndTime; // combined date and time
@property (nonatomic, strong, nullable) NSString* surgeryTime; // time
@property (nonatomic, strong, nullable) NSString* dateISO; // date
@property (nonatomic, strong, nullable) NSString* timeOfDay;
@property (nonatomic, strong, nullable) NSString* patientInstructions;
@property (nonatomic, strong, nullable) NSString* plainPatientInstructions;
@property (nonatomic, strong, nullable) NSMutableArray<WPSurgicalProcedure*>* procedures;
@property (nonatomic, strong, nullable) NSMutableArray<WPQuestionnaire*>* questionnaires;

@end
