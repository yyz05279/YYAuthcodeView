//
//  AppDelegate.h
//  YYAuthcodeView
//
//  Created by YZ Y on 17/4/19.
//  Copyright © 2017年 YYZ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

