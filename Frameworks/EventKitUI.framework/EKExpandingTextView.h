/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UILabel;

@interface EKExpandingTextView : UITextView <UITextViewDelegate> {
    UILabel *_placeholderLabel;
    BOOL _allowEnclosingViewScroll;
}

@property(copy) NSString * placeholder;
@property BOOL allowEnclosingScrollView;


- (BOOL)shouldScrollEnclosingScrollView;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)setTextAlignment:(int)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAllowEnclosingScrollView:(BOOL)arg1;
- (BOOL)allowEnclosingScrollView;
- (void)_updatePlaceholder;
- (void)dealloc;

@end
