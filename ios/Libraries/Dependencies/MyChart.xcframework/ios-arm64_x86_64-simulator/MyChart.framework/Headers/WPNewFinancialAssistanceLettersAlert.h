//
//  WPNewFinancialAssistanceLettersAlert.h
//  MyChart
//
//  Created by Kyle Wu on 2/6/18.
//  Copyright © 2018-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPAlert.h>

@interface WPNewFinancialAssistanceLettersAlert : WPAlert<IWPNewFinancialAssistanceLettersAlert>

- (NSString *) getAlertStringforPatientIndex:(NSInteger)index PatientName:(NSString*)name UserisPatient:(BOOL)isPatient;

@end 
