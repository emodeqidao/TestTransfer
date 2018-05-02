//
//  ViewController.m
//  TestTransfer
//
//  Created by xixi on 2018/3/18.
//  Copyright © 2018年 xixi. All rights reserved.
//

#import "ViewController.h"
#import <XTransfer/XTransfer.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    

    
    [[XTranslateManager shareClient] setAppId:@"your baidu appID" secretkey:@"your baidu secretkey"];
    [[XTranslateManager shareClient] transfer:@"嘿 我要去北京" toLanguage:XLanguage_en block:^(BOOL isRight, id responseObj) {

    }];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
