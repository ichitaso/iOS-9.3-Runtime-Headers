/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISegmentedControl, NSArray, UIButton, UIKeyboardCandidateArrowButton;

@interface UIKeyboardCandidateSortSelectionBar : UIToolbar  {
    NSArray *_sorts;
    int _keyboardBehavior;
    UISegmentedControl *_segmentedControl;
    UIKeyboardCandidateArrowButton *_arrowButton;
    UIButton *_collapseButton;
    BOOL _reducedWidth;
    BOOL _layoutOnFrameChange;
}

@property(retain) NSArray * sorts;
@property int keyboardBehavior;
@property(retain) UIKeyboardCandidateArrowButton * arrowButton;
@property(retain) UIButton * collapseButton;
@property BOOL reducedWidth;
@property(readonly) unsigned int numberOfSegments;
@property int selectedSegmentIndex;
@property(retain) UISegmentedControl * segmentedControl;
@property BOOL layoutOnFrameChange;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)layoutOnFrameChange;
- (void)setCollapseButton:(id)arg1;
- (void)setSegmentedControl:(id)arg1;
- (id)segmentedControl;
- (void)setLayoutOnFrameChange:(BOOL)arg1;
- (void)setArrowButton:(id)arg1;
- (id)collapseButton;
- (int)keyboardBehavior;
- (void)setKeyboardBehavior:(int)arg1;
- (id)arrowButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboardBehavior:(int)arg2;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (id)sorts;
- (void)setSorts:(id)arg1;
- (void)setReducedWidth:(BOOL)arg1;
- (BOOL)reducedWidth;
- (void)layout;
- (int)selectedSegmentIndex;
- (unsigned int)numberOfSegments;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)sendActionsForControlEvents:(unsigned int)arg1;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned int)arg2;
- (unsigned int)allControlEvents;
- (id)allTargets;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)dealloc;

@end
