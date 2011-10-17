/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView;

@interface MPPortraitTransportControls : MPTransportControls  {
    UIImageView *_backgroundView;
}

+ (float)defaultHeight;

- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (id)newVolumeSlider;
- (void)_layoutComplexParts;
- (void)_layoutBasicParts;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end
