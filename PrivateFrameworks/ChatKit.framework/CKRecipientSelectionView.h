/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSNumber, NSString, MFContactsSearchManager, UITableView, MFContactsSearchResultsModel, MFSearchShadowView, CKComposeRecipientView, UIScrollView, UIPopoverController, NSArray;

@interface CKRecipientSelectionView : UIView <UITableViewDataSource, UITableViewDelegate, CKOverlayViewProtocol, MFContactsSearchConsumer, _MFComposeRecipientViewDelegate> {
    CKComposeRecipientView *_toField;
    UIScrollView *_toFieldScrollingView;
    UIPopoverController *_searchResultsPopoverController;
    UITableView *_searchResultsTable;
    MFSearchShadowView *_shadowView;
    BOOL _showingSearchField;
    id _delegate;
    NSArray *_searchResults;
    MFContactsSearchResultsModel *_searchResultsModel;
    MFContactsSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    NSArray *_abProperties;
    NSString *_searchText;
}

@property(copy) NSString * searchText;
@property(getter=isShowingSearchField,readonly) BOOL showingSearchField;
@property id delegate;

+ (float)separatorHeight;

- (void)reallyResignFirstResponder;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2;
- (void)_updateShowingSearch;
- (void)_searchWithText:(id)arg1;
- (void)composeRecipientViewDidFinishEnteringRecipient:(id)arg1;
- (void)reflow;
- (id)toField;
- (id)recipients;
- (void)setDelegate:(id)arg1;
- (void)reset;
- (id)searchText;
- (BOOL)hasText;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateContentSize;
- (void)animationDidStop:(id)arg1;
- (id)delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)_hideSearchField:(BOOL)arg1;
- (BOOL)isRecipientAvailable:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)_showSearchField:(BOOL)arg1;
- (void)setABProperties:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ABProperties:(id)arg2;
- (void)updateRecipientLimit;
- (void)stopCheckingRecipientAvailability;
- (void)showErrorAlertForTooManyRecipientsIfNecessary;
- (BOOL)isShowingSearchField;
- (float)heightWithoutSeparator;
- (void)dealloc;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;

@end
