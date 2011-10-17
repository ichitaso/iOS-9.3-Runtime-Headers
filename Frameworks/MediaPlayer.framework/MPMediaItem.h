/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemArtwork, NSString, NSArray, NSDate, NSURL;

@interface MPMediaItem : MPMediaEntity  {
}

@property(readonly) BOOL mediaTypeCanSeedGenius;
@property(readonly) NSURL * directStoreURL;
@property(readonly) NSURL * containerLibraryLinkURL;
@property(readonly) NSURL * libraryLinkURL;
@property(readonly) BOOL _hasDownloadProgress;
@property(readonly) BOOL _isDownloadable;
@property(readonly) NSString * albumArtist;
@property(readonly) NSString * albumTitle;
@property(readonly) NSString * artist;
@property(readonly) MPMediaItemArtwork * artwork;
@property double bookmarkTime;
@property(readonly) NSString * composer;
@property(readonly) NSString * genre;
@property(readonly) BOOL isRental;
@property(readonly) BOOL isITunesU;
@property(readonly) int mediaType;
@property(readonly) double playbackDuration;
@property(readonly) double startTime;
@property(readonly) double stopTime;
@property(readonly) NSString * podcastTitle;
@property unsigned int rating;
@property(readonly) NSDate * releaseDate;
@property(readonly) NSString * title;
@property(readonly) unsigned int year;
@property unsigned int skipCount;
@property unsigned int playCount;
@property unsigned int skipCountSinceSync;
@property unsigned int playCountSinceSync;
@property(copy) NSDate * lastPlayedDate;
@property(copy) NSDate * lastSkippedDate;
@property BOOL hasBeenPlayed;
@property(readonly) BOOL rememberBookmarkTime;
@property(readonly) double effectiveStopTime;
@property(readonly) NSString * effectiveAlbumArtist;
@property(readonly) NSArray * chapters;

+ (id)mediaPropertyForDAAPKey:(id)arg1;
+ (id)mediaValueFromDAAPValue:(id)arg1 mediaProperty:(id)arg2;
+ (id)daapValueFromMediaValue:(id)arg1 mediaProperty:(id)arg2;
+ (id)daapKeyForMediaProperty:(id)arg1;
+ (BOOL)_isDownloadableForRedownloadParameters:(id)arg1 filePath:(id)arg2 downloadStatus:(int)arg3 isTemporaryCloudDownload:(BOOL)arg4;
+ (BOOL)_hasDownloadProgressForDownloadStatus:(int)arg1 downloadIdentifier:(id)arg2 isTemporaryCloudDownload:(BOOL)arg3 mediaItemPersistentID:(id)arg4;
+ (id)dynamicProperties;
+ (id)titlePropertyForGroupingType:(int)arg1;
+ (BOOL)_isValidItemProperty:(id)arg1;
+ (id)persistentIDPropertyForGroupingType:(int)arg1;
+ (void)_createFilterableDictionary;
+ (BOOL)canFilterByProperty:(id)arg1;

- (void)setLastPlayedDate:(id)arg1;
- (id)lastPlayedDate;
- (void)setRating:(unsigned int)arg1;
- (unsigned int)rating;
- (BOOL)_isDownloadable;
- (BOOL)_hasDownloadProgress;
- (void)gaplessHeuristicInfo:(unsigned int*)arg1 duration:(unsigned int*)arg2 lastPacketsResync:(unsigned int*)arg3 encodingDelay:(unsigned int*)arg4 encodingDrain:(unsigned int*)arg5;
- (unsigned int)countOfChaptersOfType:(int)arg1;
- (id)chapterOfType:(int)arg1 atTime:(double)arg2;
- (id)chapterOfType:(int)arg1 atIndex:(unsigned int)arg2;
- (BOOL)rememberBookmarkTime;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (BOOL)hasBeenPlayed;
- (void)setLastSkippedDate:(id)arg1;
- (id)lastSkippedDate;
- (void)setSkipCountSinceSync:(unsigned int)arg1;
- (unsigned int)skipCountSinceSync;
- (void)setSkipCount:(unsigned int)arg1;
- (unsigned int)skipCount;
- (void)setPlayCountSinceSync:(unsigned int)arg1;
- (unsigned int)playCountSinceSync;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)playCount;
- (id)predicateForProperty:(id)arg1;
- (id)podcastTitle;
- (double)effectiveStopTime;
- (BOOL)isRental;
- (id)albumTitle;
- (id)effectiveAlbumArtist;
- (id)_bestStoreURL;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkArtist;
- (id)_libraryLinkKind;
- (id)chaptersOfType:(int)arg1;
- (double)playbackDuration;
- (id)_libraryLinkURL;
- (id)_directStoreURL;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)artwork;
- (BOOL)isITunesU;
- (double)bookmarkTime;
- (id)albumArtist;
- (double)stopTime;
- (id)genre;
- (id)composer;
- (id)artist;
- (id)chapters;
- (BOOL)existsInLibrary;
- (double)startTime;
- (unsigned int)year;
- (id)valueForProperty:(id)arg1;
- (id)title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)mediaType;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setBookmarkTime:(double)arg1;
- (id)releaseDate;
- (id)representativeItem;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkArtist;
- (id)_libraryLinkKind;
- (id)libraryLinkURL;
- (id)directStoreURL;
- (id)containerLibraryLinkURL;
- (BOOL)mediaTypeCanSeedGenius;
- (BOOL)shouldPlayInOppositeApplication;
- (id)snapshotAtPlaybackTime:(double)arg1 startRentalClock:(BOOL)arg2;
- (id)uncroppedImageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)albumImageRequestWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_libraryLinkURL:(BOOL)arg1;
- (id)snapshotAtPlaybackTime:(double)arg1 startRentalClock:(BOOL)arg2 timeOut:(double)arg3;
- (id)uncroppedAlbumImageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1;

@end
