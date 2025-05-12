//
//  WPTrackMyHealthViewController.h
//
//  Created by Matthew Flatau on 7/24/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPTableViewController.h>

/*!
 @brief The main controller for Track My Health
 @author Matt Flatau
 */
@interface WPTrackMyHealthViewController : WPTableViewController

/*!
 @brief The button used to display the Health Links
 */
@property (nonatomic, weak) IBOutlet CoreButton *healthLinksButton;

@end
