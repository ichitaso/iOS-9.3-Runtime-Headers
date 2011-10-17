/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureConnectionInternal, AVCaptureOutput, NSArray;

@interface AVCaptureConnection : NSObject  {
    AVCaptureConnectionInternal *_internal;
}

@property(readonly) NSArray * inputPorts;
@property(readonly) AVCaptureOutput * output;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isActive,readonly) BOOL active;
@property(readonly) NSArray * audioChannels;
@property(getter=isVideoMirroringSupported,readonly) BOOL supportsVideoMirroring;
@property(getter=isVideoMirrored) BOOL videoMirrored;
@property(getter=isVideoOrientationSupported,readonly) BOOL supportsVideoOrientation;
@property int videoOrientation;
@property(getter=isVideoMinFrameDurationSupported,readonly) BOOL supportsVideoMinFrameDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMinFrameDuration;
@property(getter=isVideoMaxFrameDurationSupported,readonly) BOOL supportsVideoMaxFrameDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMaxFrameDuration;
@property(readonly) float videoMaxScaleAndCropFactor;
@property float videoScaleAndCropFactor;

+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;

- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)addInputPort:(id)arg1;
- (void)removeInputPort:(id)arg1;
- (id)audioChannels;
- (BOOL)isVideoMirrored;
- (void)setVideoMirrored:(BOOL)arg1;
- (int)videoOrientation;
- (void)setVideoOrientation:(int)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDuration;
- (void)setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMaxFrameDuration;
- (void)setVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)videoScaleAndCropFactor;
- (void)setVideoScaleAndCropFactor:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoCropRect;
- (void)setVideoCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)videoRetainedBufferCountHint;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (BOOL)videoFirstAndLastFramesUncropped;
- (void)setVideoFirstAndLastFramesUncropped:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })videoMotionFilterOverlapRatios;
- (void)setVideoMotionFilterOverlapRatios:(struct CGSize { float x1; float x2; })arg1;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (BOOL)sourcesFromFrontFacingCamera;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (void)updateAudioChannelsArray;
- (id)output;
- (id)inputPorts;
- (void)updateAudioLevelsArray;
- (BOOL)isVideoMirroringSupported;
- (BOOL)isVideoOrientationSupported;
- (BOOL)isVideoMinFrameDurationSupported;
- (BOOL)isVideoMaxFrameDurationSupported;
- (float)videoMaxScaleAndCropFactor;
- (BOOL)isVideoCropRectSupported;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (BOOL)isVideoFirstAndLastFramesUncroppedSupported;
- (BOOL)isVideoMotionFilterOverlapRatiosSupported;
- (BOOL)isLive;
- (id)mediaType;
- (void)dealloc;

@end
