/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class YTSearchRequest, NSMutableArray;

@interface YTBookmarksVideoDataSource : YTVideoDataSource  {
    NSMutableArray *_bookmarkedShortIDs;
    YTSearchRequest *_bookmarksSearchRequest;
    BOOL _lastReloadWasAccountsFavorites;
}


- (void)addVideo:(id)arg1;
- (unsigned int)maxVideosToSave;
- (void)_nextBatch;
- (void)searchRequest:(id)arg1 foundBatchURL:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (BOOL)isLoading;
- (void)reloadData;
- (id)init;
- (void)dealloc;

@end
