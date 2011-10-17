/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableView, EKSource, <EKStyleProvider>, EKEventStore, EKCalendar, <EKCalendarEditorDelegate>, NSArray;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate> {
    UITableView *_tableView;
    NSArray *_editItems;
    EKCalendar *_calendar;
    EKSource *_source;
    EKEventStore *_eventStore;
    int _allowedEntityTypes;
    <EKCalendarEditorDelegate> *_delegate;
    <EKStyleProvider> *_styleProvider;
}

@property(retain) EKEventStore * eventStore;
@property(retain) EKCalendar * calendar;
@property <EKCalendarEditorDelegate> * delegate;
@property(retain) <EKStyleProvider> * styleProvider;


- (void)setDelegate:(id)arg1;
- (id)eventStore;
- (void)setEventStore:(id)arg1;
- (void)done:(id)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)_deleteCalendar;
- (void)setupForCalendar;
- (BOOL)_shouldShowDeleteButton;
- (void)calendarChanged:(id)arg1;
- (id)initWithSource:(id)arg1 eventStore:(id)arg2 allowedEntityTypes:(int)arg3;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 allowedEntityTypes:(int)arg3;
- (id)_editItems;
- (void)_presentValidationAlert:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
