/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, UIImage, UIView;

@interface GKTableView : UITableView  {
    UIView *_topShadowView;
    BOOL _shouldPlaceShadowBelowTableHeader;
    float _shadowInset;
    NSArray *_backgroundTiles;
    UIImage *_backgroundImage;
    struct CGSize { 
        float width; 
        float height; 
    } _statusOffsetShift;
    BOOL _becomeFirstResponderOnTouch;
    int _backgroundStyle;
    float _defaultColumnWidth;
    float _tableHeaderPinnedHeight;
    BOOL _shouldPinHeaderToTop;
    BOOL _shouldAdjustScrollInsetsForTableHeader;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastTouchStartedAt;
    unsigned int _loadingSequenceNumber;
    BOOL _shouldOverrideTableFooterGroupPadding;
}

@property float shadowInset;
@property(retain) NSArray * backgroundTiles;
@property(retain) UIImage * backgroundImage;
@property BOOL becomeFirstResponderOnTouch;
@property int backgroundStyle;
@property(readonly) int defaultColumnCount;
@property float defaultColumnWidth;
@property float tableHeaderPinnedHeight;
@property(retain) UIView * topShadowView;
@property BOOL shouldPinHeaderToTop;
@property BOOL shouldPlaceShadowBelowTableHeader;
@property BOOL shouldAdjustScrollInsetsForTableHeader;
@property struct CGSize { float x1; float x2; } statusOffsetShift;
@property(readonly) struct CGPoint { float x1; float x2; } lastTouchStartedAt;
@property(readonly) unsigned int loadingSequenceNumber;
@property BOOL shouldOverrideTableFooterGroupPadding;


- (id)capCellWithReuseIdentifier:(id)arg1 sectionHeaderStyle:(int)arg2 tableView:(id)arg3;
- (id)showMoreCapCellForSection:(int)arg1;
- (id)loadingCapCellForSection:(int)arg1;
- (id)sectionHeaderCapCellWithTitle:(id)arg1 section:(int)arg2;
- (BOOL)shouldOverrideTableFooterGroupPadding;
- (unsigned int)loadingSequenceNumber;
- (void)setTableHeaderPinnedHeight:(float)arg1;
- (void)setShadowInset:(float)arg1;
- (float)shadowInset;
- (void)setTopShadowView:(id)arg1;
- (int)defaultColumnCount;
- (BOOL)becomeFirstResponderOnTouch;
- (void)layoutTilesWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 offset:(struct CGSize { float x1; float x2; })arg2;
- (void)updateBackgroundImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateShadowViews;
- (BOOL)shouldAdjustScrollInsetsForTableHeader;
- (id)topShadowView;
- (float)tableHeaderPinnedHeight;
- (BOOL)shouldPinHeaderToTop;
- (BOOL)shouldPlaceShadowBelowTableHeader;
- (float)defaultColumnWidth;
- (void)setShouldOverrideTableFooterGroupPadding:(BOOL)arg1;
- (void)setShouldAdjustScrollInsetsForTableHeader:(BOOL)arg1;
- (void)setShouldPinHeaderToTop:(BOOL)arg1;
- (void)setDefaultColumnWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableHeaderFrame;
- (void)updateBackground;
- (struct CGSize { float x1; float x2; })statusOffsetShift;
- (struct CGPoint { float x1; float x2; })lastTouchStartedAt;
- (void)setStatusOffsetShift:(struct CGSize { float x1; float x2; })arg1;
- (id)backgroundTiles;
- (void)setBackgroundTiles:(id)arg1;
- (void)setShouldPlaceShadowBelowTableHeader:(BOOL)arg1;
- (void)setBecomeFirstResponderOnTouch:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (float)_backgroundInset;
- (BOOL)usesVariableMargins;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)canBecomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)reloadData;
- (void)didMoveToWindow;
- (void)dealloc;

@end
