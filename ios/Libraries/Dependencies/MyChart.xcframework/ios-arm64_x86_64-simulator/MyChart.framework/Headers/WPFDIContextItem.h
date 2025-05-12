//
//  WPFDIContextItem.h
//  Copyright © 2022-2023 Epic Systems Corporation. All rights reserved.


#import <MyChart/WPObject.h>

@interface WPFDIContextItem : WPObject

@property (nonatomic,strong) NSString* type;
@property (nonatomic,strong) NSString* contextItemName;
@property (nonatomic,strong) NSString* value;
@property (nonatomic,assign) BOOL isEncrypted;

-(instancetype)initWithType:(NSString *)type name:(NSString *)name andValue:(NSString *)value;
-(instancetype)initWithType:(NSString *)type name:(NSString *)name andValue:(NSString *)value isEncrypted:(Boolean)isEncrypted;

@end
