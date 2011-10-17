/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UILabel, NSTimer, NSString, <UIKeyboardCandidateExtendedInputTextFieldDelegate>;

@interface UIKeyboardCandidateExtendedInputTextField : UIView  {
    BOOL _caretBlinking;
    <UIKeyboardCandidateExtendedInputTextFieldDelegate> *_delegate;
    UILabel *_label;
    UIView *_caretView;
    NSTimer *_caretTimer;
}

@property(copy) NSString * text;
@property BOOL caretBlinking;
@property <UIKeyboardCandidateExtendedInputTextFieldDelegate> * delegate;
@property(retain) UILabel * label;
@property(retain) UIView * caretView;
@property(retain) NSTimer * caretTimer;

+ (id)font;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setCaretView:(id)arg1;
- (BOOL)caretBlinking;
- (id)caretTimer;
- (void)setCaretTimer:(id)arg1;
- (void)caretTimerFired:(id)arg1;
- (void)showCaret;
- (void)hideCaret;
- (void)setCaretBlinking:(BOOL)arg1;
- (id)caretView;
- (int)textEffectsVisibilityLevel;
- (id)label;
- (void)layout;
- (void)setLabel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)text;
- (id)delegate;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
