/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowSettings : PUSettings {
    BOOL _allowUserInteractivity;
    OKProducerPreset *_currentPreset;
    NSString *_currentPresetUniqueIdentifier;
    float _interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
    float _interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
    float _interactiveTransitionFingerTrackingBoxRadiusMaxValue;
    float _interactiveTransitionFingerTrackingBoxRadiusMinValue;
    float _interactiveTransitionProgressThresholdDefaultValue;
    float _interactiveTransitionProgressThresholdIncrementValue;
    float _interactiveTransitionProgressThresholdMaxValue;
    float _interactiveTransitionProgressThresholdMinValue;
    float _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
    float _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
    float _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
    float _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
    BOOL _slideshowSettingsEnableFullscreenSupport;
}

@property (nonatomic) BOOL allowUserInteractivity;
@property (nonatomic, retain) OKProducerPreset *currentPreset;
@property (nonatomic, retain) NSString *currentPresetUniqueIdentifier;
@property (nonatomic) float interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
@property (nonatomic) float interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
@property (nonatomic) float interactiveTransitionFingerTrackingBoxRadiusMaxValue;
@property (nonatomic) float interactiveTransitionFingerTrackingBoxRadiusMinValue;
@property (nonatomic) float interactiveTransitionProgressThresholdDefaultValue;
@property (nonatomic) float interactiveTransitionProgressThresholdIncrementValue;
@property (nonatomic) float interactiveTransitionProgressThresholdMaxValue;
@property (nonatomic) float interactiveTransitionProgressThresholdMinValue;
@property (nonatomic) float interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
@property (nonatomic) float interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
@property (nonatomic) float interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
@property (nonatomic) float interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
@property (nonatomic) BOOL slideshowSettingsEnableFullscreenSupport;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)allowUserInteractivity;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentPreset;
- (id)currentPresetUniqueIdentifier;
- (float)interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
- (float)interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
- (float)interactiveTransitionFingerTrackingBoxRadiusMaxValue;
- (float)interactiveTransitionFingerTrackingBoxRadiusMinValue;
- (float)interactiveTransitionProgressThresholdDefaultValue;
- (float)interactiveTransitionProgressThresholdIncrementValue;
- (float)interactiveTransitionProgressThresholdMaxValue;
- (float)interactiveTransitionProgressThresholdMinValue;
- (float)interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
- (float)interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
- (float)interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
- (float)interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
- (void)performPostSaveActions;
- (void)removeTransitionTimingCustomizationsFromUserDefaults;
- (void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
- (void)saveInteractiveSlideshowSettingsInUserDefaults;
- (void)setAllowUserInteractivity:(BOOL)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setCurrentPresetUniqueIdentifier:(id)arg1;
- (void)setDefaultPresetTransitionValues;
- (void)setDefaultValues;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusDefaultValue:(float)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusIncrementValue:(float)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusMaxValue:(float)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusMinValue:(float)arg1;
- (void)setInteractiveTransitionProgressThresholdDefaultValue:(float)arg1;
- (void)setInteractiveTransitionProgressThresholdIncrementValue:(float)arg1;
- (void)setInteractiveTransitionProgressThresholdMaxValue:(float)arg1;
- (void)setInteractiveTransitionProgressThresholdMinValue:(float)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue:(float)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue:(float)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMaxValue:(float)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMinValue:(float)arg1;
- (void)setSlideshowSettingsEnableFullscreenSupport:(BOOL)arg1;
- (BOOL)slideshowSettingsEnableFullscreenSupport;
- (BOOL)transitionSettingsAreDefaults;

@end
