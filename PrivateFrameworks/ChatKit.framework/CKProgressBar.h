/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView;

@interface CKProgressBar : UIView  {
    UIImageView *_well;
    UIImageView *_fill;
    float _progressValue;
}

@property float progressValue;

+ (float)defaultHeight;
+ (float)_minFillWidth;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setupFillFrame;
- (float)progressValue;
- (void)setProgressValue:(float)arg1;
- (void)_stopAnimating;
- (void)dealloc;

@end
