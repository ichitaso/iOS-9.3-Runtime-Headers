/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSString, AVPlayerItem, CALayer, AVSubtitleLayer;

@interface AVPlayerLayerInternal : NSObject  {
    AVPlayer *_player;
    CALayer *contentLayer;
    NSString *videoGravity;
    NSString *subtitleGravity;
    AVSubtitleLayer *subtitleLayer;
    BOOL shouldObservePlayer;
    BOOL isObservingPlayer;
    BOOL hasPlayerToObserve;
    BOOL disableActions;
    BOOL isOverscanSubtitleSupportEnabled;
    struct dispatch_queue_s { } *serialQueue;
    BOOL isPresentationLayer;
    BOOL isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } *isReadyForDisplayMutex;
    AVPlayerItem *itemMarkedReadyForDisplay;
    struct CGSize { 
        float width; 
        float height; 
    } presentationSize;
}



@end
