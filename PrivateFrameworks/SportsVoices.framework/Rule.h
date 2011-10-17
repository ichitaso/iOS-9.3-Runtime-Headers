/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class SlotsInContext, NewProduction;

@interface Rule : GrammarPart  {
    SlotsInContext *_leftHandSide;
    NewProduction *_rightHandSide;
    BOOL _repeat;
}

+ (id)ruleWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2;
+ (id)test;
+ (id)instanceFromPlist:(id)arg1;

- (id)description;
- (void)dealloc;
- (id)initWithLeftHandSide:(id)arg1 rightHandSideOverlays:(id)arg2 rightHandSideBaseIndices:(id)arg3;
- (id)initWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2;
- (id)appliedTo:(id)arg1;
- (id)initFromPlist:(id)arg1;

@end
