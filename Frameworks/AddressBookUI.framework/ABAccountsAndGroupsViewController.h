/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABAccountsAndGroupDataSource, UITableView;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
    ABAccountsAndGroupDataSource *_dataSource;
    BOOL _needsReload;
    BOOL _tableViewNeedsReloadAfterResume;
    BOOL _showsRefreshButton;
    BOOL _reselectLastSelectedCell;
}

@property BOOL hidesSearchableSources;
@property BOOL hidesGlobalGroupWrapper;
@property(readonly) UITableView * tableView;
@property(readonly) ABAccountsAndGroupDataSource * dataSource;


- (void)updateNavigationButtons;
- (id)tableView;
- (id)model;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)accessibilityLargeTextDidChange;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)applicationDidResume;
- (id)dataSource;
- (id)dataSource;
- (void)reloadData;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)showMembersOfGroup:(void*)arg1 animate:(BOOL)arg2;
- (void)_applyAccessibilityFontChanges;
- (id)copyMembersViewControllerWithModel:(id)arg1;
- (BOOL)hidesGlobalGroupWrapper;
- (void)_showMembersWithModel:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (BOOL)preservesSelection;
- (void)reselectLastSelectedCellIfNeeded;
- (void)showMembersOfGroupWrapper:(id)arg1 animate:(BOOL)arg2;
- (id)initWithModel:(id)arg1;
- (void)refreshEverythingNow;
- (void)updateRefreshButton;
- (BOOL)hidesSearchableSources;
- (void)setHidesSearchableSources:(BOOL)arg1;
- (void)setHidesGlobalGroupWrapper:(BOOL)arg1;
- (void)showMembersOfGroupWrapper:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (BOOL)shouldShowGroups;
- (int)abViewControllerType;
- (void)_applyStylesToTableView:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setModel:(id)arg1;
- (void)modelDatabaseChange:(id)arg1;

@end