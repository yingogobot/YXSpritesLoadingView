//
//  YXViewController.m
//  YXSpritesLoadingViewExample
//
//  Created by Yin Xu on 5/14/14.
//  Copyright (c) 2014 YinXuApp. All rights reserved.
//

#import "YXViewController.h"
#import "YXSpritesLoadingView.h"

@interface YXViewController ()

@end

@implementation YXViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showLoader:(id)sender
{
    [self.view endEditing:YES];
    if (self.showTextSwitch.on) {
        [YXSpritesLoadingView showWithText:self.loaderTextField.text andShimmering:self.showShimmeringSwitch.on andBlurEffect:self.showBlurSwitch.on];
        
    }
    else
    {
        [YXSpritesLoadingView showWithText:nil andShimmering:self.showShimmeringSwitch.on andBlurEffect:self.showBlurSwitch.on];
    }
}

- (IBAction)dismissLoader:(id)sender
{
    [YXSpritesLoadingView dismiss];
}

@end
