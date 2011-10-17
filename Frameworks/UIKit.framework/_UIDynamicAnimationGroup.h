/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _applier;

    NSMutableArray *_animations;
    NSMutableArray *_runningAnimations;
}

@property(copy) NSArray * animations;


- (id)animations;
- (void)removeAnimation:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)setAnimations:(id)arg1;
- (void)runWithGroupApplier:(id)arg1 completion:(id)arg2;
- (void)runWithGroupApplier:(id)arg1 completion:(id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (void)runWithCompletion:(id)arg1;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (BOOL)_animateForInterval:(double)arg1;
- (void)_stopAnimation;
- (void)dealloc;

@end
