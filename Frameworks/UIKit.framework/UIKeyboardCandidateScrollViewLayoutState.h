/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSArray;

@interface UIKeyboardCandidateScrollViewLayoutState : NSObject  {
    NSMutableArray *_allCells;
    NSMutableArray *_candidateCells;
    NSArray *_groupHeaderCells;
    NSArray *_candidateGroups;
    float _totalWidth;
    unsigned int _columnCount;
    float _columnWidth;
    float _rowHeight;
    BOOL _grouped;
    float _groupBarWidth;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    BOOL _layoutFinished;
    unsigned int _currentGroupIndex;
    unsigned int _currentCandidateIndex;
    unsigned int _currentRowIndex;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPosition;
    float _previousGroupMaxY;
    float _groupHeight;
}

@property(retain) NSMutableArray * allCells;
@property(retain) NSMutableArray * candidateCells;
@property(retain) NSArray * groupHeaderCells;
@property(retain) NSArray * candidateGroups;
@property float totalWidth;
@property unsigned int columnCount;
@property float columnWidth;
@property float rowHeight;
@property BOOL grouped;
@property float groupBarWidth;
@property(copy) id completion;
@property BOOL layoutFinished;
@property unsigned int currentGroupIndex;
@property unsigned int currentCandidateIndex;
@property unsigned int currentRowIndex;
@property struct CGPoint { float x1; float x2; } startPosition;
@property float previousGroupMaxY;
@property float groupHeight;


- (void)setGroupHeight:(float)arg1;
- (float)groupHeight;
- (void)setPreviousGroupMaxY:(float)arg1;
- (float)previousGroupMaxY;
- (void)setCurrentRowIndex:(unsigned int)arg1;
- (unsigned int)currentRowIndex;
- (void)setCurrentCandidateIndex:(unsigned int)arg1;
- (unsigned int)currentCandidateIndex;
- (void)setCurrentGroupIndex:(unsigned int)arg1;
- (unsigned int)currentGroupIndex;
- (void)setLayoutFinished:(BOOL)arg1;
- (BOOL)layoutFinished;
- (void)setGroupBarWidth:(float)arg1;
- (float)groupBarWidth;
- (void)setGrouped:(BOOL)arg1;
- (BOOL)grouped;
- (void)setTotalWidth:(float)arg1;
- (float)totalWidth;
- (void)setCandidateGroups:(id)arg1;
- (id)candidateGroups;
- (void)setGroupHeaderCells:(id)arg1;
- (id)groupHeaderCells;
- (void)setCandidateCells:(id)arg1;
- (id)candidateCells;
- (void)setAllCells:(id)arg1;
- (id)allCells;
- (void)setColumnCount:(unsigned int)arg1;
- (unsigned int)columnCount;
- (void)setColumnWidth:(float)arg1;
- (float)columnWidth;
- (void)setStartPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })startPosition;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (float)rowHeight;
- (void)setRowHeight:(float)arg1;
- (void)dealloc;

@end
