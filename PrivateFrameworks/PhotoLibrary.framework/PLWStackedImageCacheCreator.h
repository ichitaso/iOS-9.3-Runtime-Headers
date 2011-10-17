/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLWStackedImageCache;

@interface PLWStackedImageCacheCreator : NSObject <PLStackViewDataSource> {
    PLWStackedImageCache *_stackedImageCache;
}


- (void)createStackedImageForAlbum:(id)arg1;
- (struct NSObject { Class x1; }*)_albumForStack:(id)arg1;
- (id)stackView:(id)arg1 collapsedIndexesForCount:(unsigned int)arg2;
- (void)stackView:(id)arg1 saveStackedImage:(id)arg2 options:(id)arg3;
- (id)stackedImageForStackView:(id)arg1 options:(id*)arg2;
- (id)stackView:(id)arg1 textBadgeStringForImageAtIndex:(int)arg2;
- (id)stackView:(id)arg1 itemViewAtIndex:(int)arg2 loadImagesSynchronously:(BOOL)arg3;
- (int)stackViewPosterItemIndex:(id)arg1;
- (int)stackViewItemCount:(id)arg1;
- (void)stackView:(id)arg1 invalidateCachedImagesForIndex:(int)arg2;
- (id)init;
- (void)dealloc;

@end
