#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BEAlertButton.h"
#import "BEAlertPresenter.h"
#import "BEAlertViewActionDispatcher.h"
#import "BEAlertViewBuilder.h"
#import "UIAlertView+BlockExtension.h"

FOUNDATION_EXPORT double UIAlertViewBlockExtensionVersionNumber;
FOUNDATION_EXPORT const unsigned char UIAlertViewBlockExtensionVersionString[];

