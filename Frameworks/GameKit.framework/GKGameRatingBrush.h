/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKGameRatingBrush : GKThemeBrush  {
    UIImage *_foregroundImage;
    UIImage *_backgroundImage;
}

@property(retain) UIImage * foregroundImage;
@property(retain) UIImage * backgroundImage;


- (float)scaleForInput:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)foregroundImage;
- (void)setForegroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)dealloc;

@end
