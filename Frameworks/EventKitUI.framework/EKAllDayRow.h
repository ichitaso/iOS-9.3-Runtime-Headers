/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, NSMutableSet;

@interface EKAllDayRow : NSObject  {
    NSMutableArray *_blocks;
    NSMutableSet *_occupyingDays;
    unsigned int _startDate;
}


- (id)occurrenceBlocks;
- (unsigned int)spaceGapFor:(id)arg1;
- (void)addOccurrenceBlock:(id)arg1;
- (id)init;
- (void)dealloc;

@end
