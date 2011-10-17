/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVAudioSessionDelegateMediaPlayerOnly>, AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject  {
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}

@property(readonly) NSString * category;
@property(readonly) double preferredHardwareSampleRate;
@property(readonly) double preferredIOBufferDuration;
@property(readonly) BOOL inputIsAvailable;
@property(readonly) double currentHardwareSampleRate;
@property(readonly) int currentHardwareInputNumberOfChannels;
@property(readonly) int currentHardwareOutputNumberOfChannels;
@property <AVAudioSessionDelegateMediaPlayerOnly> * delegate;

+ (void)initialize;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isApplicationAudioSession;
- (void)setApplicationAudioSession:(BOOL)arg1;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (BOOL)_setFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (id)_weakReference;
- (id)category;
- (BOOL)setCategory:(id)arg1 error:(id*)arg2;
- (BOOL)setActive:(BOOL)arg1 error:(id*)arg2;
- (BOOL)setActive:(BOOL)arg1 withFlags:(int)arg2 error:(id*)arg3;
- (BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2;
- (BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2;
- (BOOL)inputIsAvailable;
- (double)currentHardwareSampleRate;
- (double)preferredHardwareSampleRate;
- (double)preferredIOBufferDuration;
- (int)currentHardwareInputNumberOfChannels;
- (int)currentHardwareOutputNumberOfChannels;
- (id)init;
- (void)dealloc;

@end
