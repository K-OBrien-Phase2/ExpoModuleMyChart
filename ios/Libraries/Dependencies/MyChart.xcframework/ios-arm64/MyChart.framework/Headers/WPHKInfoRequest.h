//
//  WPHKInfoRequest.h
//
//  Created by Ben Drda on 8/12/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <MyChart/WPRequest.h>
#import <MyChart/WPHKInfoResponse.h>

@class WPHKInfoResponse;
/*!
 @author Ben Drda
 */
@interface WPHKInfoRequest : WPRequest

/*!
 @brief Initializes the response object
 */
-(WPHKInfoResponse *) allocResponse;
/*!
 @brief Initializes a request with the link ID
 @param linkID the link ID from obtained from the link request
 */
-(instancetype) initWithLinkID: (NSString *) linkID;

@end
#endif
