//
//  SCHPlayerMaskView.h
//  SCHPlayer
//
//  Created by Keyto on 2018/3/29.
//  Copyright © 2018年 CGZD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCHLoadingView.h"
#import "SCHSlider.h"

@protocol SCHPlayerMaskViewDelegate <NSObject>

/**返回按钮代理*/
- (void)sch_backButtonAction:(UIButton *)button;
/**播放按钮代理*/
- (void)sch_playButtonAction:(UIButton *)button;
/**全屏按钮代理*/
- (void)sch_fullButtonAction:(UIButton *)button;
/**开始滑动*/
- (void)sch_progressSliderTouchBegan:(SCHSlider *)slider;
/**滑动中*/
- (void)sch_progressSliderValueChanged:(SCHSlider *)slider;
/**滑动结束*/
- (void)sch_progressSliderTouchEnded:(SCHSlider *)slider;
/**失败按钮代理*/
- (void)sch_failButtonAction:(UIButton *)button;

@end

@interface SCHPlayerMaskView : UIButton


/**顶部工具条*/
@property (nonatomic,strong) UIView *topToolBar;
/**底部工具条*/
@property (nonatomic,strong) UIView *bottomToolBar;
/**加载效果*/
@property (nonatomic,strong) SCHLoadingView *activity;
/**顶部工具条返回按钮*/
@property (nonatomic,strong) UIButton *backButton;
/**底部工具条播放按钮*/
@property (nonatomic,strong) UIButton *playButton;
/**底部工具条全屏按钮*/
@property (nonatomic,strong) UIButton *fullButton;
/**底部工具条当前播放时间*/
@property (nonatomic,strong) UILabel *currentTimeLabel;
/**底部工具条视频总时间*/
@property (nonatomic,strong) UILabel *totalTimeLabel;
/**缓冲进度条*/
@property (nonatomic,strong) UIProgressView *progress;
/**播放进度条*/
@property (nonatomic,strong) SCHSlider *slider;
/**加载失败按钮*/
@property (nonatomic,strong) UIButton *failButton;
/**代理人*/
@property (nonatomic,weak) id<SCHPlayerMaskViewDelegate> delegate;
/**进度条背景颜色*/
@property (nonatomic,strong) UIColor *progressBackgroundColor;
/**缓冲条缓冲进度颜色*/
@property (nonatomic,strong) UIColor *progressBufferColor;
/**进度条播放完成颜色*/
@property (nonatomic,strong) UIColor *progressPlayFinishColor;


@end
