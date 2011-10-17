/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibratorController : NSObject  {
    id _avController;
    BOOL _customAVController;
    BOOL _startedInterruption;
}

@property(setter=setAVController:,retain) id avController;


- (void)uninterruptAVControllerIfAppropriate;
- (void)_turnOnWithVibrationPattern:(id)arg1;
- (id)_interruptedAVController;
- (void)_turnOff;
- (void)_uninterruptAVControllerIfAppropriate;
- (void)_setAVController:(id)arg1;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
- (id)initWithAVController:(id)arg1;
- (id)_avController;
- (void)setAVController:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)avController;

@end
