/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class UIImageView, ASPageControl, UIScrollView, NSMutableArray;

@interface ASScreenshotsView : UIView <UIScrollViewDelegate> {
    int _currentIndex;
    NSMutableArray *_screenshotViews;
    ASPageControl *_bottomPageControl;
    UIImageView *_bottomShadowView;
    UIScrollView *_scrollView;
    UIImageView *_topShadowView;
}

@property(readonly) int numberOfScreenshots;
@property int currentIndex;

+ (struct CGSize { float x1; float x2; })imageSize;

- (id)imageAtIndex:(int)arg1;
- (int)currentIndex;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)sizeToFit;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)pageControl:(id)arg1 wasTappedInDirection:(int)arg2;
- (void)setCurrentIndex:(int)arg1;
- (void)_setCurrentIndex:(int)arg1;
- (void)setCurrentIndex:(int)arg1 animated:(BOOL)arg2;
- (int)numberOfScreenshots;
- (void)setImage:(id)arg1 forIndex:(int)arg2;
- (id)initWithScreenshotCount:(int)arg1;
- (id)init;
- (void)dealloc;

@end
