/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class TableViewManager, <TableViewManagerDelegate>, UITableView;

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate> {
    TableViewManager *_tableManager;
}

@property(retain) UITableView * tableView;
@property(readonly) TableViewManager * tableManager;
@property <TableViewManagerDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (void)initAUUITableViewControllerCommon;
- (id)tableManager;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setTableView:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
