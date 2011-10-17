/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSString;

@interface SWRunWorkoutPresetDistanceGoal : SWRunWorkoutPreset  {
    NSString *_customGoalUnits;
}

@property NSString * customGoalUnits;

+ (id)newPresetGoalCustomDistanceWithAmount:(id)arg1 units:(id)arg2;
+ (id)newPresetGoalMarathon;
+ (id)newPresetGoalHalfMarathon;
+ (id)newPresetGoal10Miles;
+ (id)newPresetGoal5Miles;
+ (id)newPresetGoal2Miles;
+ (id)newPresetGoal10K;
+ (id)newPresetGoal5K;
+ (id)newPresetGoal3K;

- (id)customGoalUnits;
- (void)_fireDistanceGoalCompletedPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fire100MeterDistanceFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fire200MeterDistanceFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fire300MeterDistanceFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fire400MeterDistanceFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireDistanceHalfwayPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)setCustomGoalUnits:(id)arg1;
- (void)_fireMarathonSecondHalfDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireMarathonFirstHalfDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireHalfMarathonSecondHalfDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireHalfMarathonFirstHalfDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireWorkoutSummaryPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (id)distanceDisplayUnits;

@end
