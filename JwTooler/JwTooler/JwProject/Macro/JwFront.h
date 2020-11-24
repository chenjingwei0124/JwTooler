//
//  JwFront.h
//  JwDocTooler
//
//  Created by 陈警卫 on 2020/11/16.
//

#ifndef JwFront_h
#define JwFront_h

#define JwColorHexString(h) [UIColor jw_colorWithHexString:(h)]
#define JwColorHexAString(h, a) [UIColor jw_colorWithHexString:(h) alpha:(a)]

/** 暗黑颜色适配 */
#define JwColorDynamicColor(l, d) [UIColor jw_colorDynamicWithLightColor:(l) darkColor:(d)]
#define JwColorDynamicHexString(l, d) [UIColor jw_colorDynamicWithHexString:(l) darkString:(d)]


/** window的 根控制器 JwRootController */
#define kJwRootNavigationVC ((JwRootViewController *)[[[[UIApplication sharedApplication] delegate] window] rootViewController])
/** JwRootController 根控制器 JwTabBarController */
#define kJwRootTabBarVC (JwTabBarController *)(((JwRootViewController *)kJwRootNavigationVC).viewControllers[0])
/** tabbarVC的 选择控制器 JwNavigationController */
#define kJwCurrentNavigationVC (JwNavigationController *)(((JwTabBarController *)kJwRootTabBarVC).selectedViewController)

#endif /* JwFront_h */
