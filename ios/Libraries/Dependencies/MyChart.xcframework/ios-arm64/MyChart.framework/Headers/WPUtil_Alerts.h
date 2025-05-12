//
//  WPUtil_Alerts.h
//  MyChart
//
//  Created by Alex J White on 5/26/15.
//  Copyright © 2015-2024 Epic Systems Corporation. All rights reserved.
//

#import <MyChart/WPObject.h>


@interface WPUtil_Alerts : NSObject

/*!
 * @brief Generates a default error alert with customizable title and message, uses STR_GEN_BUTTON_OK as only button.
 * @param title The title for the alert
 * @param message The message shown on the alert
 */
+ (UIAlertController *_Nullable)defaultAlertControllerTitle:(nullable NSString *)title message:(nullable NSString*)message;

/*!
 * @brief Generates a default error alert with customizable title and message, and cancel button.
 * @param title The title for the alert
 * @param message The message shown on the alert
 * @param cancelButtonTitle The title of the cancel button
 */
+ (UIAlertController *_Nullable)defaultAlertControllerTitle:(nullable NSString*)title message:(nullable NSString*)message cancelButtonTitle:(nullable NSString*)cancelButtonTitle;

/*!
 * @brief Generates a default error alert with customizable title and message, uses cancelButtonTitle as only button. Calls handler when
 * button is pressed.
 * @param title The title for the alert
 * @param message The message shown on the alert
 * @param cancelButtonTitle The title of the cancel button
 * @param handler The callback method that is called when the cancel button has been clicked.
 */
+ (nonnull UIAlertController *)defaultAlertControllerTitle:(nullable NSString*)title message:(nullable NSString*)message cancelButtonTitle:(nullable NSString*)cancelButtonTitle handler:(void (^_Nullable)(UIAlertAction * _Nullable action))handler;

/*!
 * @brief Generates alert with customizable title to call the given phone number. Checks to see if 
 * device can make phone calls and optionally hides the direct call option.
 * @param phoneNumber The phoneNumber to call
 * @param title The title for the alert
 * @param message The message to show
 */
+ (nonnull UIAlertController *)alertToCallPhoneNumber:(nullable NSString*)phoneNumber withTitle:(nullable NSString*)title message:(nullable NSString*)message;

/*!
 * @brief Generates alert with customizable title to call the given phone number. Checks to see if
 * device can make phone calls and optionally hides the direct call option.
 * @param phoneNumber The phoneNumber to call
 * @param title The title for the alert
 * @param message The message to show
 * @param cancelButtonHandler alert action handler for the cancel button
 * @param callButtonHandler alert callback handler for the call button
 */
+ (nonnull UIAlertController *)alertToCallPhoneNumber:(nullable NSString*)phoneNumber withTitle:(nullable NSString*)title message:(nullable NSString*)message cancelButtonHandler:(void (^_Nullable)(UIAlertAction * _Nullable action))cancelButtonHandler callButtonHandler:(void (^_Nullable)(UIAlertAction * _Nullable action))callButtonHandler;

/*
 * Show a popup saying that the user needs a network connection
 */
+(nonnull UIAlertController *)alertNoNetworkConnection;

//Grabs up the top view controller in the view hierarchy and presents an alert over it
+ (void)showAlert:(nullable UIViewController *)alert;
+ (void)showAlert:(nullable UIViewController *)alert completion:(void (^_Nullable)(void))completion;

//Adds a default alert action to the alert and then sets it as teh preferred action for the alert
+ (void)addBoldButtonToAlert:(nullable UIAlertController *)alert withTitle:(nullable NSString*)title handler:(void (^_Nullable)(UIAlertAction * _Nullable action))handler;

// Creates an alert that will open the url if the user chooses to
+ (nonnull UIAlertController *) createLaunchURLAlertWithTitle:(nullable NSString*)title message:(nullable NSString*)message URL:(NSURL *_Nullable)url openHandler:(void (^_Nullable)(UIAlertAction *_Nullable action))openHandler cancelHandler:(void (^_Nullable)(UIAlertAction *_Nullable action))cancelHandler;

@end
