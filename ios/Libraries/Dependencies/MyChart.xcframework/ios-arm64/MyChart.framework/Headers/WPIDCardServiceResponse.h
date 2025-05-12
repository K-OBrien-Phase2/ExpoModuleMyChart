//
//  IDCardServiceResponse.h
//
//  Created by Sanders Baik on 3/27/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyChart/WPResponse.h>
#import <MyChart/WPIDCard.h>

@interface WPIDCardServiceResponse : WPResponse

@property (nonatomic,strong) WPIDCard *idCard;

@end
