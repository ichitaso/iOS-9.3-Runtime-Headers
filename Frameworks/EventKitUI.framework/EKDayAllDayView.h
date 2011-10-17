/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, UILabel, <EKDayAllDayViewDelegate>, UIScrollView, UIView, NSMutableArray;

@interface EKDayAllDayView : UIView  {
    int _orientation;
    NSMutableArray *_occurrenceViews;
    UILabel *_allDay;
    BOOL _allDayLabelHighlighted;
    UIScrollView *_scroller;
    float _occurrenceInset;
    <EKDayAllDayViewDelegate> *_delegate;
    BOOL _allowSelection;
    BOOL _showSelection;
    BOOL _dimsNonSelectedItems;
    int _maxVisibleItems;
    EKEvent *_selectedEvent;
    EKEvent *_dimmedOccurrence;
    BOOL _usesSmallText;
    UIView *_splitterView;
}

@property <EKDayAllDayViewDelegate> * delegate;
@property BOOL showsSelection;
@property BOOL allowsOccurrenceSelection;
@property BOOL dimsNonSelectedItems;
@property int maxVisibleItems;
@property(retain) EKEvent * dimmedOccurrence;


- (void)setDelegate:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaxVisibleItems:(int)arg1;
- (int)maxVisibleItems;
- (BOOL)isAllDayLabelHighlighted;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (BOOL)showsSelection;
- (void)setShowsSelection:(BOOL)arg1;
- (void)setOccurrenceInset:(float)arg1 labelInset:(float)arg2;
- (void)addViewToScroller:(id)arg1;
- (float)nextAvailableOccurrenceViewYOrigin;
- (float)_allDayAreaHeightForEventCount:(int)arg1;
- (void)removeAllOccurrenceViews;
- (float)firstEventYOffset;
- (id)dimmedOccurrence;
- (id)occurrenceViewForEvent:(id)arg1;
- (BOOL)allowsOccurrenceSelection;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (BOOL)dimsNonSelectedItems;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (BOOL)containsEvent:(id)arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dealloc;
- (void)setOccurrences:(id)arg1;

@end
