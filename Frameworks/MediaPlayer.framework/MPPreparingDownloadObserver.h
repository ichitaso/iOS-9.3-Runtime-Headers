/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSNumber;

@interface MPPreparingDownloadObserver : MPMediaDownloadObserver  {
    NSNumber *_mediaItemPersistentIdentifier;
}


- (void)_onQueue_invalidate;
- (id)initWithMediaItemPersistentIdentifier:(id)arg1;
- (BOOL)canCancel;
- (double)downloadProgress;
- (void)cancelDownload;

@end
