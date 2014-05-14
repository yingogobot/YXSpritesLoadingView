//
//  YXViewController.h
//  YXSpritesLoadingViewExample
//
//  Created by Yin Xu on 5/14/14.
//  Copyright (c) 2014 YinXuApp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YXViewController : UIViewController

@property (nonatomic, weak) IBOutlet UISwitch *showTextSwitch;
@property (nonatomic, weak) IBOutlet UISwitch *showShimmeringSwitch;
@property (nonatomic, weak) IBOutlet UISwitch *showBlurSwitch;
@property (nonatomic, weak) IBOutlet UITextField *loaderTextField;

- (IBAction)showLoader:(id)sender;
- (IBAction)dismissLoader:(id)sender;

@end
