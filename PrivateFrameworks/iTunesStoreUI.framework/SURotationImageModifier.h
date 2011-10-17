/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SURotationImageModifier : SUImageModifier  {
    float _degrees;
    int _orientation;
}

@property float degrees;
@property int orientation;


- (void)setOrientation:(int)arg1;
- (int)orientation;
- (BOOL)isEqual:(id)arg1;
- (void)setDegrees:(float)arg1;
- (float)degrees;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (void)drawBeforeImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;

@end
