/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSDecimalNumber, NSString, SWVoicePromptController, NSMutableArray;

@interface SWRunWorkoutPreset : NSObject <SWRunWorkoutObserver> {
    NSString *_presetGoal;
    unsigned int _templateId;
    NSString *_templateName;
    NSString *_workoutName;
    float _goal;
    NSDecimalNumber *_goalInDisplayUnits;
    NSString *_goalType;
    SWVoicePromptController *_promptController;
    NSMutableArray *_timeObservationTargets;
    NSMutableArray *_distanceObservationTargets;
    NSMutableArray *_calorieObservationTargets;
    NSMutableArray *_stateObservationTargets;
    NSMutableArray *_userEventObservationTargets;
}

@property(readonly) NSString * presetGoal;
@property(readonly) unsigned int templateId;
@property(readonly) NSString * templateName;
@property(readonly) NSString * workoutName;
@property(readonly) float goal;
@property(readonly) NSString * goalType;
@property(readonly) NSString * distanceDisplayUnits;

+ (id)presetForGoal:(id)arg1;
+ (id)presetForCustomGoalWithAmount:(id)arg1 units:(id)arg2;

- (id)presetGoal;
- (void)_setUpGoalCompletedTargetWithUnits:(id)arg1;
- (void)_setUpHalfwayTargetWithUnits:(id)arg1;
- (void)_setUpGoalCompletedTarget;
- (void)_setUpFinalRushTargets;
- (void)_setUpHalfwayTarget;
- (void)_workoutController:(id)arg1 observeUserEvent:(id)arg2 targets:(id)arg3;
- (void)_observeStateChangeForWorkoutController:(id)arg1 oldState:(id)arg2 newState:(id)arg3 targets:(id)arg4;
- (void)_observeSteadilyIncreasingValueForRunWorkoutController:(id)arg1 withCurrentWorkoutValue:(id)arg2 targets:(id)arg3;
- (void)_addUserEventObservationTarget:(id)arg1;
- (void)_stopAllPromptsOrFireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_setUpBenchmarkTargetsForKilometerDistanceWorkout;
- (void)_addDistanceObservationTarget:(id)arg1;
- (void)_addCalorieObservationTarget:(id)arg1;
- (void)_setUpBenchmarkTargets;
- (void)_addTimeObservationTarget:(id)arg1;
- (void)_fireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireAttaboysForWorkoutController:(id)arg1;
- (id)_paceDisplayUnitsForWorkoutData:(id)arg1;
- (id)_paceInDisplayUnits:(id)arg1 forWorkoutData:(id)arg2;
- (id)_distanceDisplayUnitsForWorkoutData:(id)arg1;
- (id)_distanceInDisplayUnits:(id)arg1 forWorkoutData:(id)arg2;
- (void)_addStateObservationTarget:(id)arg1;
- (id)initWithPresetGoal:(id)arg1 goal:(float)arg2 goalType:(id)arg3 goalInDisplayUnits:(id)arg4 templateId:(unsigned int)arg5 templateName:(id)arg6 workoutName:(id)arg7;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned int)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (id)distanceDisplayUnits;
- (float)goal;
- (id)workoutName;
- (id)templateName;
- (unsigned int)templateId;
- (id)goalType;
- (void)dealloc;

@end
