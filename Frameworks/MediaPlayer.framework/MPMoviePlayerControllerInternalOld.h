/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, UIColor, UIWindow, MPMoviePlayerVideoViewController, NSError, NSURL;

@interface MPMoviePlayerControllerInternalOld : NSObject  {
    MPAVController *_player;
    NSURL *_contentURL;
    int _scalingMode;
    int _movieControlMode;
    UIWindow *_window;
    UIWindow *_previousKeyWindow;
    MPMoviePlayerVideoViewController *_videoViewController;
    UIColor *_backgroundColor;
    unsigned int _previousStatusBarOrientation;
    int _previousStatusBarStyle;
    NSError *_playbackError;
    double _initialPlaybackTime;
    struct { 
        unsigned int active : 1; 
        unsigned int visible : 1; 
        unsigned int mediaType : 1; 
        unsigned int isStreaming : 1; 
        unsigned int statusBarWasHidden : 1; 
        unsigned int shouldRestartPlaybackAfterAudioRouteChange : 1; 
        unsigned int playbackFailed : 1; 
        unsigned int isFinishing : 1; 
        unsigned int hideLoadingIndicatorForLocalFiles : 1; 
        unsigned int fullscreen : 1; 
        unsigned int playAfterCreatingPlayer : 1; 
        unsigned int canShowControlsOverlay : 1; 
        unsigned int tearDownPlayerOnEnd : 1; 
        unsigned int didSendPreloadNotification : 1; 
        unsigned int isValidating : 1; 
        unsigned int unused : 17; 
    } _playerBitfield;
}



@end
