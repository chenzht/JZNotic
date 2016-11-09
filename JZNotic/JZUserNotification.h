//
//  JZUserNotification.h
//  JZNotic
//
//  Created by Jozo.Chan on 16/11/2.
//  Copyright © 2016年 i.Jozo. All rights reserved.
//

//
//  UserNotification.h
//  UserNotification
//
//  Created by Hong on 16/9/20.
//  Copyright © 2016年 Hong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Macro.h"

typedef NS_ENUM(NSUInteger, AttachmentType) {
    AttachmentTypeImage,
    AttachmentTypeImageGif,
    AttachmentTypeAudio,
    AttachmentTypeMovie
};

@interface JZUserNotification : NSObject

#pragma mark - 自定义信息动作
+ (void)addNotificationAction;
+ (void)addNotificationAction2;


MInterfaceSharedInstance(sharedNotification)

- (void)registerNotification;

#pragma mark - Add Local Notification

- (void)addNotificationWithTimeIntervalTrigger;

- (void)addNotificationWithCalendarTrigger;

- (void)addNotificationWithLocationTrigger;

#pragma mark - Categories

- (void)setCategories;

- (void)addNotificationWithCategroy1;

- (void)addNotificationWithCategroy2;

- (void)addNotificationWithCategroy3;

#pragma mark - Add Remote Notification

- (void)addRemoteNotification;

- (void)addRemoteNotificationDownload;

- (void)addRemoteNotificationSilentDownload;

- (void)addRemoteNotificationCategory1;

- (void)addRemoteNotificationCategory2;

- (void)addRemoteNotificationCategory3;

#pragma mark - 附件
- (void)addNotificationWithUserDefined1;
- (void)addNotificationWithUserDefined2;
- (void)addNotificationWithAttachmentType:(AttachmentType)type;

#pragma mark - AppDelegate

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler;

@end

