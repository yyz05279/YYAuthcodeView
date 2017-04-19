//
//  ViewController.m
//  YYAuthcodeView
//
//  Created by YZ Y on 17/4/19.
//  Copyright © 2017年 YYZ. All rights reserved.
//

#import "ViewController.h"
#import "YYAuthcodeView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor lightGrayColor];
    YYAuthcodeView *normalView = [[YYAuthcodeView alloc] initWithType:YYAuthcodeViewTypeNormal];
    normalView.frame = CGRectMake(50, 100, 200, 50);
    [normalView refresh];
    [self.view addSubview:normalView];
    YYAuthcodeView *distractionsView = [[YYAuthcodeView alloc] initWithType:YYAuthcodeViewTypeDistractions];
    distractionsView.frame = CGRectMake(50, 200, 200, 50);
    [distractionsView refresh];
    [self.view addSubview:distractionsView];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


@end
