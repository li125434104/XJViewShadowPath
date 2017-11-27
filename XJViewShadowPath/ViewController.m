//
//  ViewController.m
//  XJViewShadowPath
//
//  Created by LXJ on 2017/11/27.
//  Copyright © 2017年 LianLuo. All rights reserved.
//

#import "ViewController.h"
#import "UIView+ShadowPath.h"
#import "TUUIMacro.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor groupTableViewBackgroundColor];
    
    UIView *shadowView = [[UIView alloc] initWithFrame:CGRectMake(50, 200, 250, 250)];
    [self.view addSubview:shadowView];
    shadowView.backgroundColor = [UIColor whiteColor];
    [shadowView setShadowPathWith:kColorFromHexA(0xff66C6F5, 0.7)
                    shadowOpacity:0.3
                     shadowRadius:5
                   shadowPathSide:ShadowPathLeft
                  shadowPathWidth:20];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
