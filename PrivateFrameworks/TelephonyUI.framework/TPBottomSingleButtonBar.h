/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPButton, UIImageView, UIView;

@interface TPBottomSingleButtonBar : TPBottomBar  {
    id _delegate;
    UIImageView *_backgroundView;
    UIView *_well;
    TPButton *_button;
}

+ (id)_backgroundImage;

- (id)initForIncomingCallWaitingWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initForTTYWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initForEndCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addBackgroundAndWellIfNecessary;
- (id)button;
- (void)setButton:(id)arg1 andStyle:(BOOL)arg2;
- (void)dealloc;
- (id)initForEndVideoWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initForVoiceControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
