//
//  RNModerateToRelax.h
//  RNModerateServicToRelax
//
//  Created by Nicka on 11/7/23.
//  Copyright © 2023 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNModerateToRelax : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)moderateRelax_shared;
- (UIViewController *)moderateRelax_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
