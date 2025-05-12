//
//  NSUserDefaults+Encryption.h
//
//  Created by Ben Drda on 9/25/14.
//  Copyright © 2020-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (WPEncryption)

/*!
 @brief same as setObject, but encrypts the object
 @param value       see setObject:forKey:
 @param defaultName see setObject:forKey:
 @warning the object must implement NSSecureCoding
 */
-(void) setSecureObject:(id)value forKey:(NSString *)defaultName;

/*!
 @brief same as objectForKey, but decrypts the object. Used specifically for arrays
 @param cls class of the array's contents
 @param defaultName see objectForKey:
 @return            see objectForKey:
 @warning the class must implement NSSecureCoding
 */
-(id) secureArrayOfClass:(Class)cls forKey:(NSString *)defaultName;

/*!
 @brief same as objectForKey, but decrypts the object. Used specifically for dictionaries
 @param keyClass class of the dictionary's keys
 @param objClass class of the dictionary's objects/values
 @param defaultName see objectForKey:
 @return            see objectForKey:
 @warning both the key and the object class must implement NSSecureCoding
 */
- (NSDictionary *)secureDictionaryWithKeysOfClass:(Class)keyClass objectsOfClass:(Class)objClass forKey:(NSString *)defaultName;

@end
