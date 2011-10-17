/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLExpandableViewDelegate>;

@interface PLExpandableView : UIView  {
    <PLExpandableViewDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contractedFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _expandedFrame;
    struct CGPoint { 
        float x; 
        float y; 
    } _leftTouchLocation;
    struct CGPoint { 
        float x; 
        float y; 
    } _rightTouchLocation;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLeftLocation;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousRightLocation;
    unsigned int _leftTouchIndex;
    unsigned int _rightTouchIndex;
    float _pinchVelocity;
    double _trackingTimeInterval;
    float _expansionFraction;
    struct { 
        unsigned int state : 3; 
        unsigned int prevState : 3; 
        unsigned int tracking : 1; 
        unsigned int autorotationDisabled : 1; 
        unsigned int animationDisabled : 1; 
        unsigned int updateContractedFrame : 1; 
        unsigned int updateExpandedFrame : 1; 
        unsigned int allowsExpansion : 1; 
        unsigned int delegateWillBeginExpanding : 1; 
        unsigned int delegateWillCompleteExpanding : 1; 
        unsigned int delegateDidCompleteExpanding : 1; 
        unsigned int delegateWillCancelExpanding : 1; 
        unsigned int delegateDidCancelExpanding : 1; 
        unsigned int delegateDidBeginCollapsing : 1; 
        unsigned int delegateWillCompleteCollapsing : 1; 
        unsigned int delegateDidCompleteCollapsing : 1; 
        unsigned int delegateWillCancelCollapsing : 1; 
        unsigned int delegateDidCancelCollapsing : 1; 
        unsigned int delegateExpandedFractionChanged : 1; 
    } _expandFlags;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contractedFrame;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } expandedFrame;
@property BOOL allowsExpansion;


- (void)setDelegate:(id)arg1;
- (int)previousState;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)isTracking;
- (int)state;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)canCollapse;
- (float)expansionFraction;
- (void)setAllowsExpansion:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedFrame;
- (void)setExpandedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contractedFrame;
- (void)expandWithAnimation:(BOOL)arg1;
- (void)collapseWithAnimation:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pinchRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 insetTouches:(BOOL)arg3;
- (void)finishTransition;
- (void)canceledPinch:(id)arg1;
- (void)finishedPinch:(id)arg1;
- (void)continuedPinch:(id)arg1;
- (void)startedPinch:(id)arg1;
- (BOOL)allowsExpansion;
- (void)finishTransitionToState:(int)arg1;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (int)snapState:(BOOL)arg1;
- (float)continueTrackingPinch:(id)arg1;
- (void)notifyExpansionFraction:(float)arg1 force:(BOOL)arg2;
- (void)beginTrackingPinch:(id)arg1;
- (void)_setState:(int)arg1 withDuration:(double)arg2;
- (void)updatePinchState:(id)arg1;
- (BOOL)_canPinch;
- (void)_setExpansionFraction:(float)arg1;
- (void)stateDidChangeFrom:(int)arg1;
- (void)_transitionFromCompleteContract:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCancelContract:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromContracting:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanded:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCancelExpand:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteExpand:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanding:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromContracted:(int)arg1 withDuration:(double)arg2;
- (void)setContractedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)stateWillChangeTo:(int)arg1;
- (void)_notifyDidCompleteCollapsing;
- (void)_notifyDidCancelCollapsing;
- (void)_notifyWillCompleteCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCancelCollapsingWithDuration:(double)arg1;
- (void)_notifyDidCancelExpanding;
- (void)_notifyWillBeginCollapsing;
- (void)_notifyDidCompleteExpanding;
- (void)_notifyWillCancelExpandingWithDuration:(double)arg1;
- (void)_notifyWillCompleteExpandingWithDuration:(double)arg1;
- (void)_notifyWillBeginExpanding;
- (void)_setAutorotationDisabled:(BOOL)arg1;

@end
