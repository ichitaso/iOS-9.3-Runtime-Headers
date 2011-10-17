/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIView, UITableView;

@interface TPAudioDeviceView : UIView <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_deviceTableView;
    UIView *_topBGView;
    UIView *_bottomBGView;
    UIView *_buttonView;
    UIView *_tableView;
    UIView *_subbedView;
    id _delegate;
    BOOL _subbedOutTable;
}


- (void)setActiveRow:(int)arg1;
- (id)_unselectedImage;
- (id)_selectedImage;
- (void)muteButtonPressed:(id)arg1;
- (id)_muteImage;
- (void)_takedownButtons;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForNumButtons:(int)arg1;
- (id)_activeImage;
- (id)_muteButtonForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_takedownTable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForTable;
- (id)_tableHeaderImage;
- (id)_tableFooterImage;
- (void)_setupSurroundingTableViews;
- (void)_setupButtons;
- (void)_setupTable;
- (void)setDelegate:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)reloadData;
- (void)dealloc;
- (void)showTable;
- (void)suboutTable;
- (void)selectRow:(int)arg1;

@end
