/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImageView, UIPageControl, IUGeniusGridView, NSMutableArray, NSMutableSet, UIScrollView, MPGeniusMix;

@interface IUGeniusMixViewController : IUiPodViewController <IUGeniusGridViewDelegate, UIScrollViewDelegate> {
    UIScrollView *_scrollView;
    NSMutableArray *_gridViews;
    UIPageControl *_pageControl;
    IUGeniusGridView *_flippedGridView;
    NSMutableSet *_unusedGridViewPool;
    UIImageView *_artworkImageView;
    unsigned int _didPushMix : 1;
    unsigned int _isZooming : 1;
}

@property(readonly) MPGeniusMix * selectedMix;


- (void)_nowPlayingItemDidChange:(id)arg1;
- (id)_moreListTitle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (void)geniusGridViewWasTapped:(id)arg1;
- (void)_zoomOutDidStop;
- (int)navigationTransition;
- (struct CGPoint { float x1; float x2; })_contentOffsetForCurrentPage;
- (void)_enqueueGridViewForReuse:(id)arg1;
- (id)_dequeueExistingGridView;
- (void)_pushViewControllerContext:(id)arg1;
- (id)_viewControllerContextForCurrentPage;
- (void)_pruneGridViewPages;
- (BOOL)_hasGridViewForPage:(int)arg1;
- (BOOL)_currentPageIsPlayingGeniusMix;
- (void)_zoomArtworkInForDataSource:(id)arg1;
- (void)_flipGridViewForAnimatedPop;
- (void)_zoomArtworkOut;
- (void)_flipGridView:(id)arg1 toOrientation:(int)arg2 animated:(BOOL)arg3;
- (int)_playingGeniusMixPage;
- (int)_pageForContentOffset;
- (void)reloadDataWithSelectedMix:(id)arg1;
- (void)_createGridViewIfNecessaryForPage:(int)arg1;
- (struct CGPoint { float x1; float x2; })_contentOffsetForPage:(int)arg1;
- (id)selectedMix;
- (void)_pageControlValueDidChange:(id)arg1;
- (id)_geniusMixDataSource;
- (void)_unloadGridViews;
- (id)init;
- (void)dealloc;

@end
