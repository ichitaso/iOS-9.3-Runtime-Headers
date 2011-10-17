/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSAttributedString, NSString, UIColor, NSObject<GKTextLayout>;

@interface GKCoreTextRenderer : NSObject  {
    NSAttributedString *_attributedText;
    NSObject<GKTextLayout> *_textLayout;
    id _contentPath;
    float _leading;
    BOOL _shouldQuoteText;
    BOOL _shouldDrawEmoji;
    BOOL _shouldSizeToTextImageBounds;
    BOOL _hasTruncationClusters;
    BOOL _adjustsFontSizeToFitWidth;
    NSString *_truncationSymbol;
    int _numberOfLines;
    float _minimumFontSize;
    int _baselineAdjustment;
    UIColor *_textColor;
    UIColor *_shadowColor;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(retain) NSAttributedString * attributedText;
@property(retain) UIColor * textColor;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property(readonly) unsigned int actualLineCount;
@property int numberOfLines;
@property BOOL adjustsFontSizeToFitWidth;
@property float minimumFontSize;
@property int baselineAdjustment;
@property(retain) id contentPath;
@property float leading;
@property BOOL shouldQuoteText;
@property BOOL shouldDrawEmoji;
@property BOOL hasTruncationClusters;
@property(readonly) float baselineYOffset;
@property BOOL shouldSizeToTextImageBounds;
@property(copy) NSString * truncationSymbol;
@property(retain) NSObject<GKTextLayout> * textLayout;


- (void)setHasTruncationClusters:(BOOL)arg1;
- (BOOL)hasTruncationClusters;
- (struct __CTRun { }*)truncateLine:(struct __CTLine { }*)arg1 removingStringRange:(struct { int x1; int x2; })arg2 runAttributes:(struct __CFDictionary { }*)arg3 truncationSymbol:(id)arg4;
- (void)_drawInContext:(struct CGContext { }*)arg1 drawEmoji:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })suggestFrameSizeWithConstraints:(struct CGSize { float x1; float x2; })arg1 fitsRange:(struct { int x1; int x2; }*)arg2;
- (float)lineImageHeightForAttributedString:(id)arg1;
- (id)string:(id)arg1 withCTFont:(struct __CTFont { }*)arg2;
- (id)overallAttribute:(id)arg1 forString:(id)arg2;
- (id)textLayoutForString:(id)arg1 withConstraints:(struct CGSize { float x1; float x2; })arg2;
- (Class)classForTextLayout;
- (id)textLayout;
- (void)invalidateTextLayout;
- (void)setTextLayout:(id)arg1;
- (BOOL)shouldSizeToTextImageBounds;
- (BOOL)shouldDrawEmoji;
- (BOOL)shouldQuoteText;
- (struct CGSize { float x1; float x2; })suggestFrameSizeForString:(id)arg1 withConstraints:(struct CGSize { float x1; float x2; })arg2 fitsRange:(struct { int x1; int x2; }*)arg3;
- (void)setShouldSizeToTextImageBounds:(BOOL)arg1;
- (void)setShouldQuoteText:(BOOL)arg1;
- (void)setLeading:(float)arg1;
- (void)setTruncationSymbol:(id)arg1;
- (id)truncationSymbol;
- (void)setContentPath:(id)arg1;
- (id)contentPath;
- (unsigned int)actualLineCount;
- (float)baselineYOffset;
- (float)lineHeightForAttributedString:(id)arg1;
- (float)calculatedFontSizeForString:(id)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)lineHeightForFont:(struct __CTFont { }*)arg1;
- (void)setShouldDrawEmoji:(BOOL)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNumberOfLines:(int)arg1;
- (int)numberOfLines;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)textColor;
- (BOOL)adjustsFontSizeToFitWidth;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (float)leading;
- (void)setBaselineAdjustment:(int)arg1;
- (int)baselineAdjustment;
- (void)setMinimumFontSize:(float)arg1;
- (float)minimumFontSize;
- (void)setTextColor:(id)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (id)init;
- (void)dealloc;

@end
