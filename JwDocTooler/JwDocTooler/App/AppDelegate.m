//
//  AppDelegate.m
//  JwDocTooler
//
//  Created by 陈警卫 on 2020/11/12.
//

#import "AppDelegate.h"
#import "JwRootViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

/** 进入菜单界面 */
- (void)showRootController{
    [self.window.rootViewController removeFromParentViewController];
    [self.window removeAllSubviews];
    self.window.rootViewController = [JwRootViewController root];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    //主界面控制
    [self showRootController];
    
    return YES;
    
    
}

- (void)applicationWillResignActive:(UIApplication *)application {
    //应用程序即将进入后台
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    //应用程序进入后台
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    //应用程序即将进入前台
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    //应用程序重新激活
}


- (void)applicationWillTerminate:(UIApplication *)application {
    //应用程序即将终止时调用
}


@end
