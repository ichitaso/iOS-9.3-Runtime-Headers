/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSTimer, UITableView;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView *m_table;
    UIView *m_shadowView;
    UIView *m_selExtraView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_referenceRect;
    float m_pointerOffset;
    BOOL m_scrollable;
    BOOL m_scrolling;
    BOOL m_shouldFade;
    struct CGPoint { 
        float x; 
        float y; 
    } m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer *m_scrollTimer;
    int m_visibleRows;
    int m_firstVisibleRow;
    int m_mode;
    double dismissDelay;
    double _dismissDelay;
}

@property(readonly) int mode;
@property double dismissDelay;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)titleForItemAtIndex:(int)arg1;
- (int)indexForIndexPath:(id)arg1;
- (void)didSelectItemAtIndex:(int)arg1;
- (void)endScrolling:(id)arg1;
- (void)setNeedsDisplayForCell:(id)arg1;
- (double)dismissDelay;
- (void)_delayedFade;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)setNeedsDisplayForTopBottomCells;
- (int)defaultSelectedIndex;
- (struct CGSize { float x1; float x2; })preferredSize;
- (void)setDismissDelay:(double)arg1;
- (void)showAsHUD;
- (void)autoscrollTimerFired:(id)arg1;
- (void)stopAnyAutoscrolling;
- (void)selectItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)fade;
- (void)fadeWithDelay:(double)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)showAsPopupFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)highlightRow:(int)arg1;
- (int)numberOfItems;
- (BOOL)isVisible;
- (void)hide;
- (int)mode;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)font;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)applicationWillSuspend:(id)arg1;
- (void)show;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
