/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, <AVVoiceControllerRecordDelegate>, <Endpointer>, NSDictionary, <AVVoiceControllerPlaybackDelegate>;

@interface AVVoiceController : NSObject  {
    void *_impl;
}

@property(getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;
@property(getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;
@property(readonly) NSString * recordRoute;
@property(readonly) unsigned long long lastRecordStartTime;
@property int hardwareConfiguration;
@property(readonly) NSDictionary * recordSettings;
@property(getter=isRecording,readonly) BOOL recording;
@property <Endpointer> * endpointerDelegate;
@property int recordEndpointMode;
@property double recordStartWaitTime;
@property double recordInterspeechWaitTime;
@property double recordEndWaitTime;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property(readonly) NSDictionary * playbackSettings;
@property(getter=isPlaying,readonly) BOOL playing;
@property float playbackVolume;
@property(getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;
@property float alertVolume;
@property <AVVoiceControllerPlaybackDelegate> * playbackDelegate;
@property <AVVoiceControllerRecordDelegate> * recordDelegate;


- (void)finalize;
- (void)stopRecording;
- (id)recordRoute;
- (unsigned long long)lastRecordStartTime;
- (BOOL)isBargeInDetectEnabled;
- (void)setBargeInDetectEnabled:(BOOL)arg1;
- (BOOL)isStopOnBargeInEnabled;
- (void)setStopOnBargeInEnabled:(BOOL)arg1;
- (id)initWithHardwareConfig:(int)arg1 error:(id*)arg2;
- (void)releaseAudioSession;
- (int)hardwareConfiguration;
- (void)setHardwareConfiguration:(int)arg1;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id*)arg2;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (BOOL)playAlertSoundForType:(int)arg1;
- (BOOL)startRecording;
- (BOOL)preparePlaybackWithSettings:(id)arg1 error:(id*)arg2;
- (BOOL)preparePlaybackFromURL:(id)arg1 error:(id*)arg2;
- (BOOL)startPlaying;
- (void)stopPlaying;
- (id)recordDelegate;
- (void)setRecordDelegate:(id)arg1;
- (id)recordSettings;
- (double)getRecordBufferDuration;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (id)endpointerDelegate;
- (int)recordEndpointMode;
- (void)setRecordEndpointMode:(int)arg1;
- (double)recordStartWaitTime;
- (void)setRecordStartWaitTime:(double)arg1;
- (double)recordInterspeechWaitTime;
- (void)setRecordInterspeechWaitTime:(double)arg1;
- (double)recordEndWaitTime;
- (void)setRecordEndWaitTime:(double)arg1;
- (id)playbackDelegate;
- (void)setPlaybackDelegate:(id)arg1;
- (id)playbackSettings;
- (double)getPlaybackBufferDuration;
- (BOOL)setPlaybackBufferDuration:(double)arg1;
- (void)setAlertVolume:(float)arg1;
- (float)alertVolume;
- (void)setPlaybackVolume:(float)arg1;
- (float)playbackVolume;
- (BOOL)isStopOnEndpointEnabled;
- (void)setStopOnEndpointEnabled:(BOOL)arg1;
- (void)hardwareConfigChanged;
- (void)setEndpointerDelegate:(id)arg1;
- (void)beganRecording;
- (void)beganPlaying;
- (void)startpointDetected;
- (void)interspeechPointDetected;
- (void)endpointDetected;
- (void)encodeError;
- (void)recordBufferReceived:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (void)beginPlaybackInterruption;
- (void)beginRecordInterruption;
- (void)endPlaybackInterruption;
- (void)endRecordInterruption;
- (void)playbackBufferReceived:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (BOOL)isRecording;
- (void)finishedRecording;
- (BOOL)isPlaying;
- (BOOL)isMeteringEnabled;
- (void)setMeteringEnabled:(BOOL)arg1;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (float)averagePowerForChannel:(unsigned int)arg1;
- (void)finishedPlaying;
- (struct ControllerImpl { id x1; id x2; id x3; struct CAStreamBasicDescription { double x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; unsigned int x_4_1_9; } x4; double x5; boolx6; struct AudioQueueLevelMeterState {} *x7; struct OpaqueAudioQueue {} *x8; int x9; struct OpaqueAudioConverter {} *x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct AudioQueueBuffer {} **x15; unsigned long long x16; int x17; int x18; boolx19; struct MemorySyncBool { boolx_20_1_1; } x20; boolx21; float x22; id x23; boolx24; unsigned int x25; id x26; struct CAStreamBasicDescription { double x_27_1_1; unsigned int x_27_1_2; unsigned int x_27_1_3; unsigned int x_27_1_4; unsigned int x_27_1_5; unsigned int x_27_1_6; unsigned int x_27_1_7; unsigned int x_27_1_8; unsigned int x_27_1_9; } x27; double x28; struct { int *x_29_1_1; } x29; struct OpaqueAudioQueue {} *x30; int x31; id x32; unsigned int x33; struct AudioQueueBuffer {} **x34; int x35; boolx36; boolx37; boolx38; boolx39; struct MemorySyncBool { boolx_40_1_1; } x40; boolx41; float x42; unsigned int x43; struct CAStreamBasicDescription { double x_44_1_1; unsigned int x_44_1_2; unsigned int x_44_1_3; unsigned int x_44_1_4; unsigned int x_44_1_5; unsigned int x_44_1_6; unsigned int x_44_1_7; unsigned int x_44_1_8; unsigned int x_44_1_9; } x44; long long x45; struct OpaqueAudioQueue {} *x46; struct AudioQueueBuffer {} *x47[3]; boolx48; int x49; float x50; double x51; unsigned long long x52; float x53; id x54; struct OpaqueAudioFileID {} *x55; unsigned int x56; struct AudioFormatListItem {} *x57; unsigned int x58; unsigned int x59; char *x60; struct AudioFilePacketTableInfo { long long x_61_1_1; int x_61_1_2; int x_61_1_3; } x61; long long x62; long long x63; boolx64; int x65; int x66; id x67; boolx68; boolx69; boolx70; boolx71; int x72; double x73; double x74; double x75; boolx76; boolx77; int x78; int x79; boolx80; unsigned int x81; boolx82; int x83; boolx84; struct _opaque_pthread_mutex_t { long x_85_1_1; BOOL x_85_1_2[40]; } x85[4]; int x86; boolx87; }*)impl;
- (void)decodeError;
- (id)init;
- (void)dealloc;

@end
