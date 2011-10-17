/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKReminderEditor, <EKStyleProvider>, <EKReminderViewControllerDelegate>, EKEventStore, EKReminder;

@interface EKReminderViewController : UIViewController <EKCalendarItemEditorDelegate, EKReminderEditorDelegate> {
    <EKReminderViewControllerDelegate> *_delegate;
    EKReminderEditor *_editor;
}

@property(retain) EKReminder * reminder;
@property(retain) EKEventStore * eventStore;
@property(retain) <EKStyleProvider> * styleProvider;
@property <EKReminderViewControllerDelegate> * delegate;
@property(retain) EKReminderEditor * editor;


- (void)setDelegate:(id)arg1;
- (id)eventStore;
- (void)setEventStore:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (id)navigationItem;
- (id)delegate;
- (BOOL)allowContextProvider:(id)arg1;
- (id)getCurrentContext;
- (void)viewSizeChanged;
- (id)reminder;
- (void)setReminder:(id)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)setEditor:(id)arg1;
- (id)editor;
- (void)eventEditorDidChangeHeight:(id)arg1;
- (void)eventEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)dealloc;
- (id)viewForActionSheet;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
