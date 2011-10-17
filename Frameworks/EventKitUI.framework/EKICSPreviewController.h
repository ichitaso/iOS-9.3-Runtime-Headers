/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventViewController, <EKICSPreviewControllerDelegate>, UIViewController, EKEventStore, EKICSPreviewModel;

@interface EKICSPreviewController : NSObject  {
    EKICSPreviewModel *_model;
    BOOL _allowsImport;
    BOOL _allowsEditing;
    BOOL _allowsSubitems;
    EKEventStore *_eventStore;
    EKEventViewController *_currentImport;
    UIViewController *_contentViewController;
    <EKICSPreviewControllerDelegate> *_previewDelegate;
    BOOL _importing;
    BOOL _allowsToDos;
    BOOL _allowsInvalidProperties;
}

@property <EKICSPreviewControllerDelegate> * previewDelegate;
@property BOOL allowsImport;
@property BOOL allowsEditing;
@property BOOL allowsSubitems;
@property BOOL allowsInvalidProperties;
@property BOOL allowsToDos;
@property(readonly) BOOL isImporting;
@property(readonly) int totalEventCount;
@property(readonly) int unimportedEventCount;


- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (id)viewController;
- (id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned int)arg3;
- (void)setAllowsInvalidProperties:(BOOL)arg1;
- (BOOL)allowsInvalidProperties;
- (void)setAllowsToDos:(BOOL)arg1;
- (BOOL)allowsToDos;
- (BOOL)allowsImport;
- (void)setPreviewDelegate:(id)arg1;
- (id)previewDelegate;
- (void)icsPreviewListControllerDidRequestImportAll:(id)arg1;
- (void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2;
- (id)popoverContentController;
- (id)initWithData:(id)arg1 eventStore:(id)arg2;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2;
- (void)importAllIntoCalendar:(id)arg1;
- (void)importEventFromController:(id)arg1 intoCalendar:(id)arg2;
- (void)presentCalendarChooserForController:(id)arg1;
- (void)importAllRequested:(id)arg1;
- (void)setAllowsImport:(BOOL)arg1;
- (id)detailViewForEvent:(id)arg1 eventInRealStore:(BOOL)arg2;
- (int)unimportedEventCount;
- (void)_databaseChanged:(id)arg1;
- (int)totalEventCount;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned int)arg3;
- (void)calendarChooserDidFinish:(id)arg1;
- (void)calendarChooserDidCancel:(id)arg1;
- (BOOL)allowsSubitems;
- (void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
- (void)setAllowsSubitems:(BOOL)arg1;
- (BOOL)isImporting;
- (void)dealloc;

@end
