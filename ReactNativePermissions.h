//
//  ReactNativePermissions.h
//  ReactNativePermissions
//
//  Created by Yonah Forst on 18/02/16.
//  Copyright © 2016 Yonah Forst. All rights reserved.
//
<<<<<<< HEAD
#import <RCTBridgeModule.h>
=======
>>>>>>> 34e035aa22efb46a96999627f9cd6ab96b3790d3

#if __has_include("RCTBridgeModule.h")
  #import "RCTBridgeModule.h"
#else
  #import <React/RCTBridgeModule.h>
#endif

@interface ReactNativePermissions : NSObject <RCTBridgeModule>


@end
