/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, AVSubtitleTextLayer;

@interface AVSubtitleLayerInternal : NSObject  {
    AVPlayer *player;
    struct OpaqueFigSubtitleRenderer { } *renderer;
    AVSubtitleTextLayer *textLayer;
    struct __CFAttributedString { } *currentSubtitleSample;
    id boundaryTimeObserver;
    BOOL currentSubtitleSampleIsForced;
    BOOL nonForcedSubtitleDisplayEnabled;
    BOOL shouldObservePlayer;
    BOOL isObservingPlayer;
    BOOL hasPlayerToObserve;
    struct dispatch_queue_s { } *serialQueue;
    BOOL isPresentationLayer;
    BOOL isOverscanSubtitleSupportEnabled;
}



@end
