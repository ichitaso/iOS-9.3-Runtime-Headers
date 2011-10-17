/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoViewController, <MPMusicPlayerControllerServerDelegate>, MPMusicPlayerControllerServer, NSMutableArray, NSMutableDictionary;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {
    <MPMusicPlayerControllerServerDelegate> *_delegate;
    MPMusicPlayerControllerServer *_musicPlayerServer;
    NSMutableArray *_clientPorts;
    NSMutableDictionary *_clientPortsForPIDs;
    NSMutableDictionary *_clientStateForPIDs;
    MPVideoViewController *_videoViewController;
    int _activeClientPID;
    int _extendedModeNotifyToken;
    unsigned int _queuePrepared : 1;
}

+ (BOOL)_canSeedGeniusWithItem:(id)arg1;

- (void)_registerClientPort:(unsigned int)arg1 forProcessID:(int)arg2 hasAudioBackgroundMode:(BOOL)arg3;
- (BOOL)_currentClientPIDHasPermissionToPlay;
- (id)_avControllerForClientPID:(int)arg1;
- (id)_clientStateForPID:(int)arg1;
- (void)_applicationStateChangedNotification:(id)arg1;
- (void)_clientPortInvalidatedNotification:(id)arg1;
- (id)_avControllerForClientPID:(int)arg1 ignoreExtendedMode:(BOOL)arg2;
- (void)_endPlaybackForClientIfNecessary:(int)arg1;
- (BOOL)_clientPIDHasPermissionToPlay:(int)arg1;
- (void)_clientPortInvalidated:(id)arg1;
- (BOOL)useApplicationSpecificQueue;
- (void)_endPlayback;
- (id)_clientState;
- (void)_prepareQueueIfNecessary;
- (void)_tearDownVideoView;
- (void)skipToPreviousChapter;
- (void)skipToNextChapter;
- (void)skipToBeginningOrPreviousItem;
- (void)shuffle;
- (void)setNowPlayingItem:(id)arg1;
- (void)prepareQueueForPlayback;
- (id)queueAsQuery;
- (void)playItem:(id)arg1;
- (void)registerForServerDiedNotifications;
- (void)setUseApplicationSpecificQueue:(id)arg1;
- (id)serverIsAlive;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setCurrentChapterIndex:(id)arg1;
- (id)currentChapterIndex;
- (id)isNowPlayingItemFromGeniusMix;
- (id)unshuffledIndexOfNowPlayingItem;
- (id)indexOfNowPlayingItem;
- (void)setPlaybackSpeed:(id)arg1;
- (id)playbackSpeed;
- (void)setAllowsRemoteUIAccess:(id)arg1;
- (id)allowsRemoteUIAccess;
- (void)pauseWithFadeoutDuration:(id)arg1;
- (id)nowPlayingItemAtIndex:(id)arg1;
- (id)setQueueWithSeedItems:(id)arg1;
- (id)isGeniusAvailable;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (id)_avController;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)setCurrentPlaybackTime:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)play;
- (void)pause;
- (void)stop;
- (id)numberOfItems;
- (id)init;
- (void)dealloc;
- (void)setRepeatMode:(id)arg1;
- (id)repeatMode;
- (void)skipToPreviousItem;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)setShuffleMode:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (id)currentPlaybackTime;
- (void)endSeeking;
- (id)shuffleMode;
- (id)playbackState;
- (id)nowPlayingItem;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)_setQueueWithQuery:(id)arg1;

@end
