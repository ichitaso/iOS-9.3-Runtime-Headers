/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject  {
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;

- (void)finalize;
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayer:(id)arg3;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasPostProcessingLayers;
- (id)_postProcessingRootLayer;
- (int)_auxiliaryTrackID;
- (id)_postProcessingVideoLayer;
- (void)dealloc;

@end
