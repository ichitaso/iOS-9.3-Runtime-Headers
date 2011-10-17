/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSURLRequest, QLPreviewController, UIImageView, QLPreviewConverter, UIView, UIImage, <QLPreviewItem>, QLProgressLayer;

@interface QLDisplayBundle : UIViewController  {
    UIView *_displayViewContainer;
    UIView *_displayView;
    QLPreviewController *_owner;
    id _delegate;
    <QLPreviewItem> *_previewItem;
    NSURLRequest *_previewRequest;
    int _index;
    QLProgressLayer *_progressLayer;
    BOOL _loadingProgressVisible;
    BOOL _loaded;
    UIImage *_swipeImage;
    UIImageView *_swipeImageView;
    QLPreviewConverter *_previewConverter;
    BOOL _preloaded;
    BOOL _preloading;
}

@property(retain) <QLPreviewItem> * previewItem;
@property(retain) NSURLRequest * previewRequest;
@property(retain) UIView * displayView;
@property BOOL preloaded;
@property BOOL preloading;
@property(retain) UIImage * swipeImage;
@property int index;
@property BOOL loaded;
@property(retain) QLPreviewConverter * previewConverter;
@property id delegate;
@property QLPreviewController * owner;

+ (id)backgroundColorForBackgroundType:(int)arg1;
+ (BOOL)canComputeSwipeImage;
+ (id)copySwipeImageOperation;
+ (BOOL)canPreloadInThread;

- (void)setLoaded:(BOOL)arg1;
- (id)owner;
- (void)setPreviewRequest:(id)arg1;
- (void)setDisplayView:(id)arg1;
- (void)startLoadWithHints:(id)arg1;
- (void)startSlidingIn:(id)arg1;
- (void)prepareForSlidingOut;
- (void)prepareForZoomingOut;
- (void)prepareForZoomingIn;
- (void)didFailLoadingWithError:(id)arg1;
- (void)startTearDownUI;
- (void)overlayWillAppearAnimated:(BOOL)arg1;
- (void)overlayWillDisappearAnimated:(BOOL)arg1;
- (BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)preloadInThread;
- (BOOL)preloading;
- (void)setPreloading:(BOOL)arg1;
- (void)setSwipeImage:(id)arg1;
- (id)previewConverter;
- (void)setPreviewConverter:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)_addSwipeImage;
- (void)_addProgressUI;
- (void)_removeSwipeImage;
- (void)_removeProgressiveUI;
- (id)swipeImage;
- (void)_showLoadingProgress:(BOOL)arg1;
- (void)loadWithHints:(id)arg1;
- (void)prepareForSlidingIn:(id)arg1;
- (BOOL)preloaded;
- (void)didLoad;
- (void)setPreloaded:(BOOL)arg1;
- (void)_notifyDidFailLoadingWithError:(id)arg1;
- (void)_removeProgressiveUIAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)initWithPreviewItem:(id)arg1 owner:(id)arg2;
- (int)backgroundType;
- (id)previewItem;
- (BOOL)hasCustomToolbar;
- (BOOL)canPrint;
- (id)pdfPreviewURL;
- (void)setDelegate:(id)arg1;
- (void)setIndex:(int)arg1;
- (id)previewRequest;
- (void)setOwner:(id)arg1;
- (BOOL)loaded;
- (id)printPageRenderer;
- (int)index;
- (void)loadView;
- (void)deactivate;
- (int)modalPresentationStyle;
- (id)delegate;
- (void)cancelLoad;
- (id)description;
- (void)dealloc;
- (void)tearDownUI;
- (id)displayView;

@end
