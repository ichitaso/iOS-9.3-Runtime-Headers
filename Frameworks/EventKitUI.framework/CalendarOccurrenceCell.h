/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventOccurrenceListItem;

@interface CalendarOccurrenceCell : UITableViewCell  {
    EKEventOccurrenceListItem *_view;
}


- (id)initWithEvent:(id)arg1;
- (void)setStartDate:(double)arg1;
- (unsigned int)isAllDay;
- (void)setLocation:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (BOOL)showDisclosure;
- (id)_scriptingInfo;
- (void)setTitle:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 location:(id)arg3 startDate:(double)arg4 allDay:(BOOL)arg5 tentative:(BOOL)arg6;
- (unsigned int)designator;
- (void)setShowsColors:(BOOL)arg1;
- (void)setDotColor:(id)arg1;
- (void)setIsBirthday:(BOOL)arg1;
- (void)setIsEndDate:(BOOL)arg1;
- (void)updateWithEvent:(id)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (unsigned int)isCancelled;
- (id)init;
- (void)dealloc;

@end
