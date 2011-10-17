/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLElement, NSString, DOMDocument, UIView<UITextSelectingContainer>;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
    DOMDocument *_document;
    DOMHTMLElement *_textElement;
    DOMHTMLElement *_sizeElement;
    NSString *_initialText;
    NSString *_currentStyle;
    UIView<UITextSelectingContainer> *_proxiedView;
    unsigned int _baseWritingDirectionIsRTL : 1;
    unsigned int _changingView : 1;
    unsigned int _disableNotifications : 1;
    unsigned int _delegateRespondsToFieldEditorDidChange : 1;
    unsigned int _delegateRespondsToShouldInsertText : 1;
    unsigned int _delegateRespondsToShouldReplaceWithText : 1;
    unsigned int _fieldEditorReentrancyGuard : 1;
    unsigned int _isResigningFirstResponder : 1;
    unsigned int _mouseWasDragged : 1;
    unsigned int _reserved : 21;
}

@property struct CGPoint { float x1; float x2; } autoscrollContentOffset;

+ (id)activeFieldEditor;
+ (id)sharedFieldEditor;
+ (void)releaseSharedInstance;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)updateAutoscroll:(id)arg1;
- (BOOL)mouseEventsChangeSelection;
- (BOOL)notificationsDisabled;
- (id)automaticallySelectedOverlay;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
- (BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(BOOL)arg5;
- (id)textColorForCaretSelection;
- (id)_textSelectingContainer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForVisiblePosition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (void)autoscrollWillNotStart;
- (void)scrollToMakeInlineHoleVisible;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3;
- (void)webViewDidChange:(id)arg1;
- (void)_setTextElementStyle:(id)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (id)sizeStyleForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setTextElementString:(id)arg1;
- (void)_selectNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)resumeWithNotification:(id)arg1;
- (void)setNotificationsDisabled:(BOOL)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)selectionChanged;
- (void)selectAll;
- (id)customOverlayContainer;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2;
- (BOOL)hasMarkedText;
- (void)setTextSelectionBehavior:(int)arg1;
- (void)revealSelection;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (id)textInputTraits;
- (int)scrollYOffset;
- (int)scrollXOffset;
- (id)interactionAssistant;
- (void)setBaseWritingDirection:(int)arg1;
- (void)becomeFieldEditorForView:(id)arg1;
- (id)selectionView;
- (id)style;
- (void)setStyle:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (id)_responderForBecomeFirstResponder;
- (id)proxiedView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)resignFirstResponder;
- (id)text;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
