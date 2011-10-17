/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, UIWebDocumentView, UIWebSelectionView, UIWebSelection, UITapAndAHalfRecognizer;

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate> {
    UIWebDocumentView *_webView;
    UIWebSelectionView *_selectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    BOOL _enabled;
}

@property(readonly) UIWebSelection * selection;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionFrame;
@property BOOL enabled;


- (void)hideCallout;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (void)tap:(id)arg1;
- (void)makeWebSelection:(id)arg1;
- (BOOL)enabled;
- (BOOL)isSelectionGestureRecognizer:(id)arg1;
- (void)didEndScrollingPage;
- (void)willStartScrollingPage;
- (id)initWithWebView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (void)resignedFirstResponder;
- (void)scaleChanged;
- (void)didEndScrollingOverflow;
- (void)willStartScrollingOverflow;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)selectionChanged;
- (void)clearSelection;
- (id)selection;
- (void)setGestureRecognizers;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;

@end
