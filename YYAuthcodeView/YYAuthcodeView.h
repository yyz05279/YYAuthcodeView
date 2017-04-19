//
//  YYAuthcodeView.h
//  DDFood
//
//  Created by YZ Y on 16/6/17.
//  Copyright © 2016年 YZ Y. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, YYAuthcodeViewType) {
    YYAuthcodeViewTypeNormal,
    YYAuthcodeViewTypeDistractions,
};

@interface YYAuthcodeView : UIView
@property (nonatomic, copy)NSString *authCodeStr;//验证码字符串
- (instancetype)initWithType:(YYAuthcodeViewType)type;
- (void)refresh;

@end
