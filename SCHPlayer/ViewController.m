//
//  ViewController.m
//  SCHPlayer
//
//  Created by Keyto on 2018/3/23.
//  Copyright © 2018年 CGZD. All rights reserved.
//
#import "ViewController.h"
#import "SCHPlayerView.h"

@interface ViewController ()
/**SCHPlayerView*/
@property (nonatomic,weak) SCHPlayerView *playerView;

@end


@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
//    self.view.backgroundColor = [UIColor blackColor];
    
    SCHPlayerView *playerView = [[SCHPlayerView alloc] initWithFrame:CGRectMake(0, 90, self.view.frame.size.width, 300)];
    _playerView = playerView;
    [self.view addSubview:_playerView];
    
    //当前Xcode是否勾选了旋转，告知播放器 默认为NO
    _playerView.isLandscape = NO; //
    //全屏是否隐藏状态栏，默认一直不隐藏
    _playerView.fullStatusBarHiddenType = FullStatusBarHiddenWhenFull;
    //    //顶部工具条隐藏样式，默认不隐藏
    _playerView.topToolBarHiddenType = TopToolBarHiddenSmall;
    //  全屏手势控制，默认Yes
    _playerView.fullGestureControl = YES;
    //    小屏手势控制，默认YES
    _playerView.smallGestureControl = YES;
    //视频地址
    _playerView.url = [NSURL URLWithString:@"http://dvideo.spriteapp.cn/video/2017/0830/b0e248268d4b11e79e13842b2b4c75ab_wpd.mp4"];
    //播放
    [_playerView playVideo];
    
    
    //返回按钮点击事件回调,小屏状态才会调用，全屏默认变为小屏
    [_playerView backButton:^(UIButton *button) {
        NSLog(@"返回按钮被点击");
    }];
    //播放完成回调
    [_playerView endPlay:^{
        NSLog(@"播放完成");
    }];
    
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)viewDidDisappear:(BOOL)animated{
    [_playerView destroyPlayer];
}


- (void)dealloc{
    
    NSLog(@"播放器销毁了");
    
    [_playerView destroyPlayer];
    
}

@end
