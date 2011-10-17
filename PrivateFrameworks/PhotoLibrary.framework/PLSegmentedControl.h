/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableDictionary;

@interface PLSegmentedControl : UISegmentedControl  {
    NSMutableDictionary *_tagMap;
}

@property int selectedTag;


- (void)removeSegmentAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)removeAllSegments;
- (int)selectedTag;
- (void)setSelectedTag:(int)arg1;
- (unsigned int)segmentIndexForTag:(unsigned int)arg1;
- (void)setTag:(int)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)_incrementIndexesForTagsStartingAtIndex:(unsigned int)arg1;
- (int)tagForSegmentAtIndex:(unsigned int)arg1;
- (void)dealloc;

@end
