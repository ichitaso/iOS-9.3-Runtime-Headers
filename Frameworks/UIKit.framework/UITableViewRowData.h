/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath, UITableView;

@interface UITableViewRowData : NSObject <NSCopying> {
    UITableView *_tableView;
    int _numSections;
    int _sectionRowDataCapacity;
    id *_sectionRowData;
    float _minimumRowHeight;
    float _tableViewWidth;
    BOOL _tableHeaderHeightValid;
    float _tableHeaderHeight;
    BOOL _tableFooterHeightValid;
    float _tableFooterHeight;
    float _heightForTableHeaderViewHiding;
    float _tableTopPadding;
    float _tableBottomPadding;
    BOOL _tableSidePaddingValid;
    float _tableSidePadding;
    NSIndexPath *_reorderedIndexPath;
    NSIndexPath *_gapIndexPath;
    float _reorderedRowHeight;
}

@property(readonly) float heightForAutohidingTableHeaderView;
@property(readonly) float heightForTableHeaderViewHiding;
@property float minimumRowHeight;
@property float tableTopPadding;
@property float tableBottomPadding;
@property float tableSidePadding;


- (float)tableBottomPadding;
- (float)tableTopPadding;
- (void)setTableSidePadding:(float)arg1;
- (float)heightForSection:(int)arg1;
- (int)numberOfRowsBeforeSection:(int)arg1;
- (id)reorderedIndexPath;
- (void)invalidateSection:(int)arg1;
- (int)_sectionForPoint:(struct CGPoint { float x1; float x2; })arg1 beginningWithSection:(int)arg2 numberOfSections:(int)arg3;
- (int)sectionForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)hasFooterForSection:(int)arg1;
- (float)heightForRow:(int)arg1 inSection:(int)arg2;
- (int)_sectionRowForGlobalRow:(int)arg1 inSection:(int*)arg2;
- (void)_updateNumSections;
- (void)_ensureSectionOffsetIsValidForSection:(int)arg1;
- (void)_updateSectionRowDataArrayForNumSections:(int)arg1;
- (void)setMinimumRowHeight:(float)arg1;
- (float)heightForTableFooterView;
- (void)setTableBottomPadding:(float)arg1;
- (float)heightForTableHeaderView;
- (void)setTableTopPadding:(float)arg1;
- (int)sectionLocationForReorderedRow:(int)arg1 inSection:(int)arg2;
- (BOOL)hasHeaderForSection:(int)arg1;
- (int)sectionLocationForRow:(int)arg1 inSection:(int)arg2;
- (int)footerAlignmentForSection:(int)arg1;
- (int)headerAlignmentForSection:(int)arg1;
- (id)targetIndexPathForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2;
- (void)removeReorderGapFromIndexPath:(id)arg1;
- (void)addReorderGapFromIndexPath:(id)arg1;
- (void)tableViewWidthDidChangeToWidth:(float)arg1;
- (void)tableFooterHeightDidChangeToHeight:(float)arg1;
- (float)tableSidePadding;
- (float)heightForFooterInSection:(int)arg1;
- (float)heightForHeaderInSection:(int)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRow:(int)arg1 inSection:(int)arg2;
- (void)setReorderedIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTable;
- (int)globalRowForRowAtIndexPath:(id)arg1;
- (float)minimumRowHeight;
- (id)indexPathForRowAtGlobalRow:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })globalRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForGlobalRow:(int)arg1;
- (float)maxFooterTitleWidthForSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })floatingRectForFooterInSection:(int)arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)maxHeaderTitleWidthForSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })floatingRectForHeaderInSection:(int)arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForFooterInSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForHeaderInSection:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })sectionsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)ensureAllSectionsAreValid;
- (float)heightForTable;
- (void)tableHeaderHeightDidChangeToHeight:(float)arg1;
- (float)heightForTableHeaderViewHiding;
- (float)heightForAutohidingTableHeaderView;
- (void)setHeightForTableHeaderViewHiding:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTableFooterView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTableHeaderView;
- (void)invalidateAllSections;
- (id)initWithTableView:(id)arg1;
- (int)numberOfRows;
- (int)numberOfSections;
- (int)numberOfRowsInSection:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
