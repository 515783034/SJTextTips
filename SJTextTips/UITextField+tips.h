//
//  UITextField+tips.h
//  输入提示
//
//  Created by shmily on 15/9/4.
//  Copyright (c) 2015年 shmilyAshen. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^block)(NSString *key);


@interface UITextField (tips)<UITextFieldDelegate>

/// 是否匹配成功
@property(nonatomic,assign,readonly)NSValue *isMatched;

/// 匹配的数组
@property(nonatomic,strong)NSArray *matchArray;

/// 从第几位开始匹配(可选)
@property(nonatomic,assign)NSNumber *startMatch;

/// 匹配成功后的回调(可选)
@property(nonatomic,copy)block finished;

/// 匹配失败后的回调(可选)
@property(nonatomic,copy)block failed;

/// 匹配结果(回调中存在)
@property(nonatomic,copy)NSString *result;

/// 回车的回调
@property(nonatomic,copy)void(^returnKey)();

/// 开始编辑的回调
@property(nonatomic,copy)void(^beginEdit)();

/// 结束编辑的回调
@property(nonatomic,copy)void(^endEdit)();


@end
