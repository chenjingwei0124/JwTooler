//
//  JwMacro.h
//  JwDocTooler
//
//  Created by 陈警卫 on 2020/11/12.
//

#ifndef JwMacro_h
#define JwMacro_h

/*
 iPhone XsM/11PM         414*896 @3x 1242*2688            6.5 458
 iPhone Xr/11            414*896 @2x 828*1792             6.1 326
 iPhone X/Xs/11P         375*812 @3x 1125*2436            5.8 458
 iPhone 6+/6S+/7+/8+     414*736 @3x 1242*2208(1080*1920) 5.5 401
 iPhone 6/6S/7/8/SE2     375*667 @2x 750*1334             4.7 326
 iPhone 5/5S/5c/SE       320*568 @2x 640*1136             4.0 326
 iPhone 4/4s             320*480 @2x 640*960              3.5 326
 */

/** 屏幕的size */
#define kJwScreenSize [UIScreen mainScreen].bounds.size
/** 屏幕的width */
#define kJwScreenWidth [UIScreen mainScreen].bounds.size.width
/** 屏幕的height */
#define kJwScreenHeight [UIScreen mainScreen].bounds.size.height

/** 电池状态栏高度 */
#define kJwScreenBatteryBarHeight (kJwIS_iPhoneBangs ? 44 : 20)
/** 导航栏高度 */
#define kJwScreenNavBarHeight 44
/** 电池状态栏和导航栏高度 */
#define kJwScreenNavBatBarHeight (kJwScreenBatteryBarHeight + kJwScreenNavBarHeight)

/** 底栏高度 */
#define kJwScreenBottomHeight (kJwIS_iPhoneBangs ? 34 : 0)
/** tab菜单栏高度 */
#define kJwScreenTabBarHeight 49
/** 底栏和tab菜单栏高度 */
#define kJwScreenTabBottomBarHeight (kJwScreenBottomHeight + kJwScreenTabBarHeight)

/** 布局比例基准 */
#define kJwScreenBaseWidth 375.0
#define kJwScreenBaseHeight 667.0
#define kJwScreenScale_Width (kJwScreenWidth/kJwScreenBaseWidth)
#define kJwScreenScale_Height (kJwScreenHeight/kJwScreenBaseHeight)

#define kJwIS_iPhone4 CGSizeEqualToSize(kJwScreenSize, CGSizeMake(320, 480))
#define kJwIS_iPhone5 CGSizeEqualToSize(kJwScreenSize, CGSizeMake(320, 568))
#define kJwIS_iPhone6 CGSizeEqualToSize(kJwScreenSize, CGSizeMake(375, 667))
#define kJwIS_iPhoneP CGSizeEqualToSize(kJwScreenSize, CGSizeMake(414, 736))
/** iPhone56P判定数值 */
#define kJwIS_iPhone56PValue(is5, is6, isP) (kJwIS_iPhone5 ? is5 : ()kJwIS_iPhone6 ? is6 : isP)

/** 判定是否刘海屏 */
#define kJwIS_iPhoneBangs \
({BOOL isiPhoneBangs = NO;\
if (@available(iOS 11.0, *)) {\
isiPhoneBangs = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isiPhoneBangs);})

/** AppDelegate */
#define kJwAppDelegate ((AppDelegate*)[[UIApplication sharedApplication] delegate])

/** WeakObj */
#define Weak(name) __weak __typeof(name) w##name = name
/** StrongObj */
#define Strong(name) __strong __typeof(name) s##name = name
/** BlockObj */
#define Block(name) __block __typeof(name) b##name = name

/** DLOG */
#if DEBUG
#ifndef DLog
#define DLog(format, args...) \
NSLog(@"[%s:%d]: " format "\n", strrchr(__FILE__, '/') + 1, __LINE__, ## args);
#endif
#else
#ifndef DLog
#define DLog(format, args...) do {} while(0)
#endif
#endif

/** RGB颜色 */
#define JwColorRGB(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
/** RGBA颜色 */
#define JwColorRGBA(r, g, b, a)  [UIColor colorWithRed:(r)/255.f green:(g)/255.f blue:(b)/255.f alpha:(a)]
/** 随机颜色 */
#define JwColorRandom JwColorRGB(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))



#endif /* JwMacro_h */
