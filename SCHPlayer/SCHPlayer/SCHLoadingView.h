//
//  SCHLoadingView.h
//  SCHPlayer
//
//  Created by Keyto on 2018/3/29.
//  Copyright © 2018年 CGZD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCHLoadingView : UIView

/**
 开始动画
 */
- (void)starAnimation;

/**
 停止动画
 */
- (void)stopAnimation;

/** 一次动画所持续时长 默认2秒*/
@property(nonatomic,assign)NSTimeInterval duration;
/** 线条颜色*/
@property (nonatomic, strong) UIColor *strokeColor;


@end
