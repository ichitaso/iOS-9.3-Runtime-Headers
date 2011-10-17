/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSMutableDictionary;

@interface TISweepSource : NSObject  {
    NSMutableDictionary *debugValues;
    int stepCount;
}

@property int stepCount;
@property(readonly) NSMutableDictionary * debugValues;

+ (id)sharedInstance;

- (void)addValue:(id)arg1 withMin:(float)arg2 withMax:(float)arg3;
- (void)addValue:(id)arg1 withValue:(float)arg2;
- (id)sweepStateHeader;
- (id)sweepStateValues;
- (void)advanceSweep;
- (BOOL)finished;
- (int)stepCount;
- (void)setStepCount:(int)arg1;
- (id)debugValues;
- (void)dealloc;

@end
