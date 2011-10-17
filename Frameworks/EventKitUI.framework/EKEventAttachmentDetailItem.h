/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray;

@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate> {
    NSArray *_cellControllers;
}


- (void)reset;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (void)_cleanUpCellControllers;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (int)numberOfSubitems;
- (void)eventViewController:(id)arg1 didSelectSubitem:(int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)dealloc;

@end
