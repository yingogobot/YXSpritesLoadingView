//
//  YXSpritesLoadingView.h
//  Gogobot-iOS
//
//  Created by Yin Xu on 05/14/14.
//  Copyright (c) 2014 Yin Xu. All rights reserved.
//

#import <UIKit/UIKit.h>

/***************************************************************
 
General Information Here:
 
 - set shouldShimmering to YES will using the FBShimmering effect on loader text label, default to YES. FBShimmering library is included in YXSpritesActivityLoader. Information for FBShimmering library: https://github.com/facebook/Shimmer

***************************************************************/


/***************************************************************
 
 Define Loading Background Attributes Here:
 
 - 85% alpha white is the default color
 - 5 is default Loader Corner Radius
 - set loaderBlurViewShow to YES will have the blur effect on loader background, the background color will be ignored
 
***************************************************************/

#define loaderBlurViewShow NO
#define loaderBackgroundColor [UIColor colorWithWhite:1.0 alpha:0.85]
#define loaderCornerRadius 5
#define loaderBackgroundWidth 150
#define loaderBackgroundHeight 100

/***************************************************************
 
 Define Animation Attributes Here:
 - cycleAnimationDuration is duration for one cycle of images
 - animationImageWidth & animationImageHeight is the size of the animation image view, but the content mode is UIViewContentModeCenter, so images won't be stretched, set this size carefully, usually large than the sprites
 
 ##IMPORTANT##
 - numberOfFramesInAnimation is total number of sprites in one cycly of animation
 - we suggest to name all your sprite in this format: "name_frameNumber" such as "slice1_0", "slice1_1"....

***************************************************************/

#define cycleAnimationDuration 0.3
#define animationImageWidth 100
#define animationImageHeight 100
#define numberOfFramesInAnimation 3
#define spriteNameString @"slice3_"

/***************************************************************

 Define Loading Text Attributes Here:
 
 - If you want to hide the loading text label, just set the Text to @""
 - Change the Text Font Name if you want to use custom font, Helvetica bold is default font
 - Font Size 15 is default font
 - Change font size will cause the loader background size change too
 - black is default Text Color
 - loadingTextLabelSideMargin is how much it's away from each side, 10 is the default margin
 - loadingTextLabelSideMargin is how much it's away from the bottom, 10 is the default margin
 
***************************************************************/

#define loadingTextFontName @"Helvetica-Bold"
#define loadingTextFontSize 20
#define loadingTextColor [UIColor colorWithRed:0.213 green:0.409 blue:1.000 alpha:1.000]
#define loadingTextLabelSideMargin 10
#define loadingTextLabelBottomMargin 10


@interface YXSpritesLoadingView : UIView

+ (YXSpritesLoadingView *)sharedInstance;
+ (void)show;
+ (void)showWithText:(NSString *)text;
+ (void)showWithText:(NSString *)text andShimmering:(BOOL)shimmering andBlurEffect:(BOOL)blur;
+ (void)dismiss;

@end
