/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendar, <EKStyleProvider>, EKEventStore, <EKCalendarEditItemDelegate>;

@interface EKCalendarEditItem : NSObject  {
    EKEventStore *_store;
    EKCalendar *_calendar;
    <EKCalendarEditItemDelegate> *_delegate;
    <EKStyleProvider> *_styleProvider;
}

@property <EKCalendarEditItemDelegate> * delegate;
@property(retain) <EKStyleProvider> * styleProvider;


- (void)setDelegate:(id)arg1;
- (id)headerTitle;
- (void)reset;
- (BOOL)becomeFirstResponder;
- (id)delegate;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(int)arg2;
- (BOOL)saveStateToCalendar:(id)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (int)numberOfSubitems;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (void)dealloc;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
