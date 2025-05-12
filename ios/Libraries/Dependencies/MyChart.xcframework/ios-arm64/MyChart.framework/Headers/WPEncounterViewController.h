//
//  WPEncounterViewController.h
//
//  Created by Epic on 8/4/09.
//  Copyright © 2009-2023 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyChart/WPViewController.h>
#import <MyChart/WPUtil_Dates.h>
#import <MyChart/WPCenteredMessageTextView.h>
#import <MyChart/WPCardView.h>
#import <MyChart/WPEncounter.h>
#import <MyChart/WPEncounterRequest.h>
#import <MyChart/WPPastAppointmentDetailsRequest.h>

typedef NS_ENUM(NSInteger, WPEncounterSection) {
	kWPEncounterSectionReasonForVisit = 1,
	kWPEncounterSectionDiagnoses = 2,
	kWPEncounterSectionPatientInstructions = 3,
	kWPEncounterSectionFollowUp = 4,
	kWPEncounterSectionMedications = 5,
	kWPEncounterSectionVitals = 6,
	kWPEncounterSectionAvsPdf = 9999
} ;

@interface WPEncounterViewController : WPViewController <UITableViewDelegate, UITableViewDataSource,ImageLoaderDelegate>

@property (nonatomic, weak, nullable) IBOutlet UILabel* doctorNameLabel;
@property (nonatomic, weak, nullable) IBOutlet UILabel* dateLabel;
@property (nonatomic, weak, nullable) IBOutlet UILabel* departmentLabel;
@property (nonatomic, weak, nullable) IBOutlet UILabel* reasonForVisitLabel;
@property (nonatomic, weak, nullable) IBOutlet UITableView* table;
@property (weak, nonatomic, nullable) IBOutlet UIImageView *externalDataIcon;
@property (weak, nonatomic, nullable) IBOutlet UILabel *externalOrgLabel;
@property (weak, nonatomic, nullable) IBOutlet NSLayoutConstraint *externalDataIconHeightConstraint;



//Strong IBOutlets
@property (nonatomic, strong, nullable) IBOutlet UIView*  tableHeaderView;
@property (nonatomic, strong, nullable) NSMutableArray* orderOfCells;

@property (nonatomic, strong, nullable) NSArray* avsSectionParts;
@property (nonatomic, strong, nullable) NSString* DAT;
@property (nonatomic, strong, nullable) NSString* CSN;
@property (nonatomic, strong, nullable) NSString* submode;
@property (nonatomic, strong, nullable) WPEncounter* encounter;
@property (nonatomic, strong, nullable) WPOrganizationInfo* orgInfo;
@property (nonatomic, strong, nullable) NSMutableArray<WPOrganizationInfo*>* orgInfoList;
    
@property (nonatomic, readonly) BOOL isDisplayImplemented;

@property (nonatomic, strong, nullable) WPEncounterRequest* encounterRequest;
@property (nonatomic, strong, nullable) WPPastAppointmentDetailsRequest* pastAppointmentDetailsRequest;

-(nullable instancetype)initWithDat:(nonnull NSString *) visitDAT andOrganizationInfo:(nonnull WPOrganizationInfo*) orgInfo andCsn:(nullable NSString*)CSN andSubmode:(nullable NSString*)submode;
-(nullable instancetype)initWithDatAndOrganizationInfo:(nonnull NSString *) visitDAT organizationInfo:(nullable WPOrganizationInfo*) orgInfo;
-(nullable instancetype)initWithDat:(nonnull NSString *)visitDAT andOrgInfoList:(nullable NSMutableArray<WPOrganizationInfo*>*) orgInfoList;
-(void)loadDataFromEncounter:(nonnull WPEncounter*)enc;

@end
