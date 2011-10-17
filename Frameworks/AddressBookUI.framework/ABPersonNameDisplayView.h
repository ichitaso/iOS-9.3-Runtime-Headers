/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABNamePropertyGroup, UILabel, NSString, ABStyleProvider, UIView, UIFont;

@interface ABPersonNameDisplayView : ABPasteboardControl  {
    ABNamePropertyGroup *_namePropertyGroup;
    int _primaryProperty;
    NSString *_primaryPropertyFormattingCountryCode;
    float _minimumHeight;
    BOOL _alignOnBottom;
    UILabel *_headlineLabel;
    UILabel *_tagLineLabel;
    UILabel *_messageLabel;
    UILabel *_messageDetailLabel;
    UIFont *_messageFont;
    UIFont *_messageDetailFont;
    ABStyleProvider *_styleProvider;
    NSString *_customHeadline;
    NSString *_customTagLine;
    NSString *_customMessage;
    NSString *_customMessageDetail;
    UIView *_customMessageView;
}

@property(retain) UIView * customMessageView;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(copy) NSString * message;
@property(retain) ABStyleProvider * styleProvider;
@property(copy) NSString * tagLine;
@property(copy) NSString * headline;
@property BOOL alignOnBottom;
@property float minimumHeight;
@property(copy) NSString * primaryPropertyFormattingCountryCode;
@property int primaryProperty;
@property(retain) ABNamePropertyGroup * namePropertyGroup;


- (id)messageFont;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPrimaryProperty:(int)arg1;
- (void)dealloc;
- (void)_setSubviewsHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHeadline:(id)arg1;
- (void)setTagLine:(id)arg1;
- (id)tagLine;
- (id)headline;
- (BOOL)alignOnBottom;
- (void)setAlignOnBottom:(BOOL)arg1;
- (float)minimumHeight;
- (void)setMinimumHeight:(float)arg1;
- (id)primaryPropertyFormattingCountryCode;
- (void)setPrimaryPropertyFormattingCountryCode:(id)arg1;
- (void)_updateHeadlineText;
- (void)_updateTagLineText;
- (void)_setMessageText:(id)arg1 isDetail:(BOOL)arg2;
- (void)_setFont:(id)arg1 isDetail:(BOOL)arg2;
- (id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned int)arg2;
- (void)initializeHeadlineAndTaglineIfNeeded;
- (float)_heightForLabelsForWidth:(float)arg1;
- (struct CGSize { float x1; float x2; })multilineLabel:(id)arg1 sizeThatFits:(struct CGSize { float x1; float x2; })arg2;
- (void)_adjustLabelTextColorForPasteboardSelection:(BOOL)arg1;
- (id)_copyPrimaryValue;
- (id)_copyTagLine;
- (void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3;
- (void)_setLabel:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3;
- (id)namePropertyGroup;
- (void)setNamePropertyGroup:(id)arg1;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (int)primaryProperty;
- (void)setMessageFont:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (id)messageDetail;
- (id)messageDetailFont;
- (void)setMessageDetailFont:(id)arg1;
- (id)customMessageView;
- (void)setCustomMessageView:(id)arg1;
- (BOOL)abShouldShowMenu;
- (void)abMenuControllerWillShow:(id)arg1;
- (void)abMenuControllerWillHide;
- (void)setStyleProvider:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
