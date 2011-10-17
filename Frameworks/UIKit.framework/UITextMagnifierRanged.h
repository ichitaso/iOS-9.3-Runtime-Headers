/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UITextMagnifierTimeWeightedPoint, UIResponder<UITextInput>;

@interface UITextMagnifierRanged : UIView <UITextMagnifier> {
    UIResponder<UITextInput> *_text;
    UIView *_target;
    struct CGPoint { 
        float x; 
        float y; 
    } _magnificationPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _animationPoint;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
    float _touchOffsetFromMagnificationPoint;
    float _magnifierOffsetFromTouch;
}

@property(retain) UIResponder<UITextInput> * text;
@property(retain) UIView * target;
@property(readonly) struct CGPoint { float x1; float x2; } terminalPoint;
@property(readonly) BOOL terminalPointPlacedCarefully;
@property struct CGPoint { float x1; float x2; } magnificationPoint;
@property struct CGPoint { float x1; float x2; } animationPoint;

+ (id)sharedRangedMagnifier;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (BOOL)wasPlacedCarefullyAtTime:(double)arg1;
- (int)horizontalMovementAtTime:(double)arg1;
- (void)updateFrame;
- (struct CGPoint { float x1; float x2; })snappedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)offsetFromMagnificationPoint;
- (struct CGPoint { float x1; float x2; })animationPoint;
- (void)zoomDownAnimation;
- (void)windowWillRotate:(id)arg1;
- (void)zoomUpAnimation;
- (void)detectLostTouches:(id)arg1;
- (struct CGPoint { float x1; float x2; })magnificationPoint;
- (void)remove;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)animateToAutoscrollRenderer;
- (void)animateToMagnifierRenderer;
- (void)setToMagnifierRenderer;
- (id)initWithDefaultFrame;
- (void)setAnimationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)horizontalMovement;
- (BOOL)terminalPointPlacedCarefully;
- (void)setAutoscrollDirections:(int)arg1;
- (struct CGPoint { float x1; float x2; })terminalPoint;
- (void)setMagnificationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint { float x1; float x2; })arg3 offset:(struct CGPoint { float x1; float x2; })arg4 animated:(BOOL)arg5;
- (void)stopMagnifying:(BOOL)arg1;
- (void)postAutoscrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)autoscrollWillNotStart;
- (id)text;
- (void)setText:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)dealloc;

@end
