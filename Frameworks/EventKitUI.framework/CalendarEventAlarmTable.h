/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKStyleProvider>, NSString, <CalendarEventAlarmTableDelegate>;

@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource> {
    int _alarmIdentifier;
    NSString *_customString;
    BOOL _customSelected;
    int _selectedItem;
    <CalendarEventAlarmTableDelegate> *_alarmTableDelegate;
    <EKStyleProvider> *_styleProvider;
    BOOL _useAllDayAlarms;
}

@property <CalendarEventAlarmTableDelegate> * alarmTableDelegate;
@property(retain) <EKStyleProvider> * styleProvider;
@property BOOL useAllDayAlarms;


- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUseAllDayAlarms:(BOOL)arg1;
- (void)setAlarmTableDelegate:(id)arg1;
- (id)alarmTableDelegate;
- (int)presetIdentifierAtIndex:(int)arg1;
- (void)setCustomSelected:(BOOL)arg1;
- (BOOL)customSelected;
- (void)setCustomString:(id)arg1;
- (int)presetIdentifier;
- (void)setPresetIdentifier:(int)arg1;
- (BOOL)useAllDayAlarms;
- (int)intervalForPresetIdentifier:(int)arg1;
- (int)_presetIdentifierForRow:(int)arg1;
- (int)countOfPresets;
- (void)_selectRow:(int)arg1;
- (int)_rowForPresetIdentifier:(int)arg1;
- (void)dealloc;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
