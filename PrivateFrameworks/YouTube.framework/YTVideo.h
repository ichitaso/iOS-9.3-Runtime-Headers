/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSArray, NSString, NSMutableArray, NSCalendarDate;

@interface YTVideo : NSObject  {
    NSString *_id;
    NSString *_title;
    NSString *_author;
    NSCalendarDate *_dateUpdated;
    NSCalendarDate *_dateAdded;
    NSArray *_videoReferences;
    NSString *_notificationName;
    NSString *_videoDescription;
    NSString *_category;
    NSArray *_tags;
    unsigned int _numberOfViews;
    unsigned int _numLikes;
    unsigned int _numDislikes;
    int _batchStatus;
    NSURL *_infoURL;
    NSURL *_thumbnailURL;
    NSURL *_commentsURL;
    NSURL *_editURL;
    NSURL *_ratingsURL;
    NSURL *_captionsURL;
    NSString *_shortID;
    NSString *_unplayable;
    BOOL _isProcessing;
    NSMutableArray *_captions;
    int _privacy;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _thumbnailProxyBlock;

}

+ (void)reset3GPlaybackStallCount;
+ (void)playbackDidStall;
+ (id)videoNotFoundError;
+ (id)unsupportedVideoError;
+ (id)videoIsProcessingError;
+ (void)disableNotifications;
+ (void)enableNotifications;

- (id)dateAdded;
- (id)dateUpdated;
- (id)dateAddedString;
- (id)commentsURL;
- (id)ratingsURL;
- (id)captionsURL;
- (id)videoDescription;
- (id)tags;
- (id)tagsString;
- (unsigned int)numLikes;
- (unsigned int)numDislikes;
- (BOOL)positiveRating;
- (id)ratingPercentageString;
- (unsigned int)numberOfViews;
- (int)batchStatus;
- (struct CGImage { }*)roundedThumbnailLoadIfAbsent:(BOOL)arg1;
- (struct CGImage { }*)largeThumbnailLoadIfAbsent:(BOOL)arg1;
- (struct CGImage { }*)pluginThumbnailLoadIfAbsent:(BOOL)arg1;
- (void)loadThumbnailWithCallback:(id)arg1;
- (id)anyVideoReference;
- (id)privacyString;
- (BOOL)ownVideo;
- (id)initFromArchiveDictionary:(id)arg1;
- (id)initWithID:(id)arg1 title:(id)arg2 dateUpdated:(id)arg3 dateAdded:(id)arg4 videoReferences:(id)arg5 infoURL:(id)arg6 videoDescription:(id)arg7 category:(id)arg8 tags:(id)arg9 author:(id)arg10 thumbnailURL:(id)arg11 numLikes:(unsigned int)arg12 numDislikes:(unsigned int)arg13 numberOfViews:(unsigned int)arg14 batchStatus:(int)arg15 commentsURL:(id)arg16 editURL:(id)arg17 ratingsURL:(id)arg18 captionsURL:(id)arg19 shortID:(id)arg20 unplayable:(id)arg21 isProcessing:(BOOL)arg22 privacy:(int)arg23;
- (id)archiveDictionary;
- (struct CGImage { }*)thumbnailLoadIfAbsent:(BOOL)arg1;
- (void)_postVideoDidChange;
- (void)carrierBundleDidChangeNotification:(id)arg1;
- (void)_thumbnailDidLoad;
- (id)videoReferenceForProfile:(int)arg1;
- (BOOL)allowsHighQuality3GPlayback;
- (id)captions;
- (id)bestVideoReference;
- (id)shortID;
- (BOOL)isBookmarked;
- (id)unplayable;
- (BOOL)isProcessing;
- (id)editURL;
- (id)author;
- (double)age;
- (id)title;
- (id)ID;
- (BOOL)isPlayable;
- (id)category;
- (id)thumbnailURL;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (id)infoURL;

@end
