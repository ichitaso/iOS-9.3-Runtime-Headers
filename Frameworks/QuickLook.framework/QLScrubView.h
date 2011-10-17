/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSOperationQueue, <QLScrubViewDataSource>, QLPageNumberView, NSMutableArray, NSMutableSet, NSMutableDictionary, QLThumbnailView;

@interface QLScrubView : UIView  {
    <QLScrubViewDataSource> *_dataSource;
    id _delegate;
    BOOL _runOnMainThread;
    BOOL _needsThumbLayout;
    float _thumbOrigin;
    float _thumbEnd;
    float _thumbHeight;
    int _pageCount;
    int _selectedPage;
    NSOperationQueue *_queue;
    NSMutableSet *_operations;
    NSMutableDictionary *_thumbViews;
    NSMutableArray *_visibleThumbIndexes;
    QLThumbnailView *_selectedThumbnailView;
    QLPageNumberView *_pageNumberLabel;
}

@property BOOL runOnMainThread;
@property id delegate;
@property <QLScrubViewDataSource> * dataSource;

+ (float)defaultWidth;

- (BOOL)runOnMainThread;
- (void)_cancelAllOperations;
- (void)_removeThumbviews;
- (void)_updateSelectedThumbnailView;
- (void)_notifyPageChanged;
- (void)_showPageLabel;
- (void)_notifyScrubingStarted;
- (void)_handleSwipAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_notifyScrubingEnded;
- (void)_hidePageLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_thumbnailFrameForPageAtIndex:(int)arg1;
- (void)reloadThumbnails;
- (void)selectPageNumber:(int)arg1;
- (void)setRunOnMainThread:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didReceiveMemoryWarning;
- (id)delegate;
- (id)dataSource;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
