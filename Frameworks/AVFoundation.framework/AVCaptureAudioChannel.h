/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject  {
    AVCaptureAudioChannelInternal *_internal;
}

@property(readonly) float averagePowerLevel;
@property(readonly) float peakHoldLevel;


- (void)invalidate;
- (float)averagePowerLevel;
- (float)peakHoldLevel;
- (id)initWithConnection:(id)arg1;
- (void)dealloc;

@end
