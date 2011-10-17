/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, MPVideoView, CALayer, NSMutableArray;

@interface MPMovieSnapshotController : NSObject  {
    MPVideoView *_videoView;
    MPAVController *_player;
    CALayer *_layer;
    NSMutableArray *_pendingSnapshots;
    unsigned int _expectingTimeJump : 1;
    unsigned int _pendingRestore : 1;
    float _originalTime;
}

@property MPAVController * player;


- (void)setVideoView:(id)arg1;
- (void)scheduleSnapshotWithSize:(struct CGSize { float x1; float x2; })arg1 orientation:(int)arg2 time:(float)arg3 delegate:(id)arg4;
- (void)_takeSnapshot:(id)arg1;
- (void)_finishSnapshot:(id)arg1;
- (id)_currentSnapshot;
- (void)_timeDidJump:(id)arg1;
- (void)_restoreOriginalTime;
- (void)_startNextSnapshot;
- (void)setPlayer:(id)arg1;
- (void)setLayer:(id)arg1;
- (id)player;
- (void)cancel;
- (void)dealloc;

@end
