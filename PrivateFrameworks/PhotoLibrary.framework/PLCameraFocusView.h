/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAKeyframeAnimation, NSArray;

@interface PLCameraFocusView : UIView  {
    NSArray *_images;
    CAKeyframeAnimation *_contentsAnimation;
    CAKeyframeAnimation *_boundsAnimation;
    double _animationStartTime;
    BOOL _fadingOut;
}


- (void)_fadeOut;
- (void)startAnimating;
- (void)stopAnimating;
- (void)focusDidEnd;
- (void)scaleFrame:(float)arg1 reposition:(BOOL)arg2;
- (void)_fadeOutDidFinish;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (id)nameForDarkImage;
- (id)nameForLightImage;
- (id)init;
- (void)dealloc;

@end
