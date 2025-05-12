//
//  WPTelemedicineConstants.h
//  iChart
//
//  Created by Matthew Flatau on 3/5/14.
//  Copyright © 2014-2023 Epic Systems Corporation. All rights reserved.
//

typedef NS_ENUM(NSInteger, WPTelemedicineConnectionStatus) {
    kWPTelemedicineStatusUnsure = 0,
    kWPTelemedicineStatusJoined = 1,
    kWPTelemedicineStatusHangup = 2,
    kWPTelemedicineStatusWaitRoom = 3,
};

typedef NS_ENUM(NSInteger, WPTelemedicineCannotJoinReason) {
    kWPTelemedicineCannotJoinReasonNone = 0, // Patient Can Join
    kWPTelemedicineCannotJoinReasonOutsideWindow = 1, // Outside the Join Window. Too early to join.
    kWPTelemedicineCannotJoinReasonECheckinIncomplete = 2, // eCheck-in required but not completed
    kWPTelemedicineCannotJoinReasonConferenceFull = 3, // Conference is full
    kWPTelemedicineCannotJoinReasonHasDenyJoiningVisitSecurityPoint = 4, //the user has security point 234
    kWPTelemedicineCannotJoinReasonRulePreventingJoiningVideoVisit = 5, //there is a rule preventing the user from joining the video visit
    kWPTelemedicineCannotJoinReasonUndefined = -1    // Reason not defined
};

typedef NS_ENUM(NSInteger, WPTelemedicineResponseStatus) {
    kWPTelemedicineResponseStatusUnknown = -1,
    kWPTelemedicineResponseStatusFailed = 0,
    kWPTelemedicineResponseStatusOk = 1
};
