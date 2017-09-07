//
//  RCTConvert+RNPStatus
//  ReactNativePermissions
//
//  Created by Yonah Forst on 23/03/16.
//  Copyright © 2016 Yonah Forst. All rights reserved.
//

<<<<<<< HEAD
#import <RCTConvert.h>
=======
#if __has_include("RCTConvert.h")
  #import "RCTConvert.h"
#else
  #import <React/RCTConvert.h>
#endif
>>>>>>> 34e035aa22efb46a96999627f9cd6ab96b3790d3

static NSString* RNPStatusUndetermined = @"undetermined";
static NSString* RNPStatusDenied = @"denied";
static NSString* RNPStatusAuthorized = @"authorized";
static NSString* RNPStatusRestricted = @"restricted";


typedef NS_ENUM(NSInteger, RNPType) {
    RNPTypeUnknown,
    RNPTypeLocation,
    RNPTypeCamera,
    RNPTypeMicrophone,
    RNPTypePhoto,
    RNPTypeContacts,
    RNPTypeEvent,
    RNPTypeReminder,
    RNPTypeBluetooth,
    RNPTypeNotification,
    RNPTypeBackgroundRefresh,
    RNPTypeSpeechRecognition
};

@interface RCTConvert (RNPStatus)

@end
