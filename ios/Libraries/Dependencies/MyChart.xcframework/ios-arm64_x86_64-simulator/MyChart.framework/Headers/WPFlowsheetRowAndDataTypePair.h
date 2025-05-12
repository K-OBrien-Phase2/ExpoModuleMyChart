//
//  WPFlowsheetRowAndDataTypePair.h
//  Application
//
//  Created by Justin Schneider on 5/3/23.
//  Copyright © 2023 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED

@interface WPFlowsheetRowAndDataTypePair : NSObject

@property (nonatomic, assign) WPFlowsheetRowDataType rowType;
@property (nonatomic, strong) HKSampleType * dataType;

-(instancetype)initWithRowType:(WPFlowsheetRowDataType)rowType andDataType:(HKSampleType *)dataType;

@end

#endif
