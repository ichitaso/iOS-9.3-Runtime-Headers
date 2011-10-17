/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class UIView, UIViewController<ADStatusBarController>, UIWindow, UIViewController;

@interface ADHostWindowController : NSObject  {
    BOOL _supportsPortrait;
    BOOL _supportsPortraitUpsideDown;
    BOOL _supportsLandscapeLeft;
    BOOL _supportsLandscapeRight;
    UIView *_bannerView;
    UIViewController<ADStatusBarController> *_statusBarViewController;
    UIViewController *_bannerViewController;
    BOOL _presented;
    UIWindow *_bannerWindow;
    float _savedWindowLevel;
    BOOL _mustShowStatusWindow;
}

@property UIView * bannerView;
@property(retain) UIViewController<ADStatusBarController> * statusBarViewController;
@property BOOL supportsPortrait;
@property BOOL supportsPortraitUpsideDown;
@property BOOL supportsLandscapeLeft;
@property BOOL supportsLandscapeRight;
@property BOOL presented;
@property(retain) UIViewController * bannerViewController;
@property(retain) UIWindow * bannerWindow;
@property float savedWindowLevel;
@property BOOL mustShowStatusWindow;


- (id)bannerWindow;
- (void)setMustShowStatusWindow:(BOOL)arg1;
- (BOOL)mustShowStatusWindow;
- (void)setSavedWindowLevel:(float)arg1;
- (float)savedWindowLevel;
- (void)setPresented:(BOOL)arg1;
- (BOOL)presented;
- (id)bannerViewController;
- (BOOL)supportsLandscapeRight;
- (BOOL)supportsLandscapeLeft;
- (BOOL)supportsPortraitUpsideDown;
- (BOOL)supportsPortrait;
- (BOOL)supportsOrientation:(int)arg1;
- (void)_preventInterstitialExceptionOnInsert;
- (void)_hideHostUI;
- (void)_showHostUI;
- (void)setBannerWindow:(id)arg1;
- (void)setBannerViewController:(id)arg1;
- (void)beginTransitionOut;
- (void)endTransitionIn;
- (void)beginTransitionIn;
- (void)setStatusBarViewController:(id)arg1;
- (id)statusBarViewController;
- (void)setSupportsLandscapeRight:(BOOL)arg1;
- (void)setSupportsLandscapeLeft:(BOOL)arg1;
- (void)setSupportsPortraitUpsideDown:(BOOL)arg1;
- (void)setSupportsPortrait:(BOOL)arg1;
- (void)clearBannerView;
- (void)endTransitionOut;
- (void)setBannerView:(id)arg1;
- (id)bannerView;
- (void)setStatusBarHidden:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end
