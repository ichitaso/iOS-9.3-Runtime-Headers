/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UIFont;

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics> {
    int lineBreakMode;
}

@property int numberOfLines;
@property int lineBreakMode;
@property(retain) UIFont * font;
@property(copy) NSString * text;


- (void)setURL:(id)arg1;
- (void)setNumberOfLines:(int)arg1;
- (int)numberOfLines;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2;
- (void)setLineBreakMode:(int)arg1;
- (int)lineBreakMode;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
