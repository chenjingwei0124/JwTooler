//
//  UIButton+JwCate.h
//  JwPart
//
//  Created by 陈警卫 on 2020/6/24.
//  Copyright © 2020 陈警卫. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^didButtonBlock)(UIButton* btn);

@interface UIButton (JwCate)

/**
 *  button 添加点击事件
 */
- (void)jw_addAction:(didButtonBlock)block;

/**
 *  button 添加事件
 */
- (void)jw_addAction:(didButtonBlock)block forControlEvents:(UIControlEvents)controlEvents;

@end

NS_ASSUME_NONNULL_END
