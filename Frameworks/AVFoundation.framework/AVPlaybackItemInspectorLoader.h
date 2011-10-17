/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader  {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
    BOOL _shouldCacheDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _cachedDuration;
}

@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;


- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)finalize;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (void)_addFigObjectNotifications;
- (void)_removeFigObjectNotifications;
- (id)_playbackItemPropertiesForKeys:(id)arg1;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)assetInspector;
- (void)cancelLoading;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
