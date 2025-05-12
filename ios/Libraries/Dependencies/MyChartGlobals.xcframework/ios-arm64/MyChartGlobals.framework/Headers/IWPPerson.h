//
//  IWPPerson.h
//  MyChart
//
//  Copyright © 2019-2023 Epic Systems Corporation. All rights reserved.
//
#import <UIKit/UIKit.h>
//forward-declaration of subtyping prototypes
@protocol IWPPatient;
@protocol IWPUser;

/**
 Represents a person, which could be either a patient the user has access to or the user themselves.
 */
@protocol IWPPerson <NSObject>

/**
 The person's account ID (WPR ID).
 */
@property (nonnull, nonatomic, strong, readonly) NSString *accountId;

/**
 Checks if this person is a proxy subject.
 
 @return True if this person is a patient to whom the logged-in user has proxy access, false if this person represents the logged-in user.
 */
@property (nonatomic, readonly) BOOL isProxySubject;

/**
 Gets the person's color.  If a color hasn't been explicitly chosen for this person, a default color will be returned.

 @return The color chosen for this person, or a default color as a backup.
 */
- (nonnull UIColor *)getColor;

/**
 Gets the person's text color.  If a text color hasn't been explicitly chosen for this person, a default text color will be returned.  The Text Color may be different than getColor.  This color is be better for Accessibility text.
 * @return The text color chosen for this person, or a default text color as a backup.
 */
- (nonnull UIColor *)getTextColor;

/**
 Gets the person's nickname. If a nickname hasn't been explicitly chosen for this person, the person's name will be returned.

 @return The nickname chosen for this person, or their name as a fallback.
 */
- (nullable NSString *)getNickname;

/**
 Gets the person's full name
 */
- (nonnull NSString *)getFullname;

/**
 The Person image callback.  This will be called with the loaded image
 */
typedef void (^PersonImageCallback)(UIImage * _Nullable image);

/**
 Gets the person's photo.  If you are using a fallback image, this will return the fallback image or the cached patient image. It will attempt to get the patient image and return it in the listener if available.  You can use this returned image to show to the user while you are waiting for the listener.
 
 If you are not using a fallback image, this will return the cached patient image or null.  It will attempt to get the patient image and return it in the listener if available.  You can use this returned image to show to the user while you are waiting for the listener.
 
 The fallback image wil be the person's first initial using the person's color.

 @param useFallback a boolean indicating whether or not a fallback image should be returned if the person doesn't have a photo
 @return The cached photo for this person, or, depending on parameters, a fallback image with this person's first initial.  This allows you to show something while the photo listener is waiting
 */
- (nullable UIImage *)getPersonPhoto:(BOOL)useFallback onImageLoaded:(nullable PersonImageCallback)onImageLoaded;

/// Converts this person into a patient instance, provided this person is not a non-patient proxy
- (nullable id<IWPPatient>)asPatient;

/// Converts this person to the user context, provided this person represents the logged-in account
- (nullable id<IWPUser>)asUser;
@end
