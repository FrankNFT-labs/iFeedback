//
//  UIDevice+Types.h
//  iFeedback
//
//  Created by frank poncelet on 10/07/13.
//  Copyright (c) 2013 frank poncelet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (Types)

//
+ (NSString *) currentDeviceType;

+ (NSString *) orientationString;

+ (NSString *) iosVersion;

+ (NSString *) deviceName;



@end
