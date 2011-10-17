/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDownloadGridImageModifier : SUImageModifier  {
    struct CGSize { 
        float width; 
        float height; 
    } _maxImageSize;
}

@property struct CGSize { float x1; float x2; } maxImageSize;


- (struct CGSize { float x1; float x2; })maxImageSize;
- (void)setMaxImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (BOOL)scalesImage;
- (void)drawAfterImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (void)drawBeforeImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;

@end
