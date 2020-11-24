//
//  JwJumpModel.m
//  JwCompose
//
//  Created by 陈警卫 on 2019/10/21.
//  Copyright © 2019 陈警卫. All rights reserved.
//

#import "JwJumpModel.h"

@implementation JwJumpModel

/**
 快速初始化
 */
+ (JwJumpModel *)modelWithType:(NSString *)type{
    JwJumpModel *model = [[JwJumpModel alloc] init];
    model.type = type;
    return model;
}

@end
