/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UITableView, NSTimer, NSMutableArray, GKContentView, NSString, GKSession, NSMutableDictionary;

@interface GKPeerPickerViewController : UIViewController  {
    id _delegate;
    NSMutableDictionary *_sessionMap;
    GKContentView *_btView;
    GKContentView *_listView;
    GKContentView *_statusView;
    GKContentView *_inviteView;
    GKContentView *_currentView;
    GKContentView *_connectTypeView;
    GKContentView *_noPeersView;
    UITableView *_peerTableView;
    unsigned int _connectionTypesMask;
    NSString *_currentConnectionTypeKey;
    NSMutableArray *_menuQueue;
    BOOL _animating;
    BOOL _alertPresented;
    int _state;
    int _pendingState;
    BOOL _updating;
    NSTimer *_invitationWaitTimer;
    int _bluetoothStatus;
    NSString *_searchingForServicesString;
    NSMutableArray *_peers;
    NSString *_pendingPeer;
}

@property id delegate;
@property(readonly) GKSession * currentSession;
@property(retain) GKContentView * btView;
@property(retain) GKContentView * listView;
@property(retain) GKContentView * statusView;
@property(retain) GKContentView * inviteView;
@property(retain) GKContentView * connectTypeView;
@property(retain) GKContentView * noPeersView;
@property(readonly) GKContentView * currentView;
@property unsigned int connectionTypesMask;
@property NSString * currentConnectionTypeKey;
@property(retain) NSMutableDictionary * sessionMap;
@property(copy) NSString * searchingForServicesString;
@property(retain) NSMutableArray * peers;
@property(retain) UITableView * peerTableView;
@property int bluetoothStatus;
@property(retain) NSMutableArray * menuQueue;
@property(getter=isAnimating) BOOL animating;
@property BOOL alertPresented;
@property int state;
@property int pendingState;
@property BOOL updating;
@property(getter=isVisible,readonly) BOOL visible;
@property(retain) NSTimer * invitationWaitTimer;


- (void)setBluetoothStatus:(int)arg1;
- (id)searchingForServicesString;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 peerDidBecomeBusy:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)setAlertPresented:(BOOL)arg1;
- (void)_btPowerStateChanged:(id)arg1;
- (void)_timedOutWaitingForInvitation:(id)arg1;
- (id)currentView;
- (void)_changePanelAnimationDidEnd:(id)arg1;
- (id)noPeersView;
- (void)_createNoPeersViewIfNeeded;
- (id)statusView;
- (void)_createStatusViewIfNeeded;
- (id)inviteView;
- (void)_createInviteViewIfNeeded;
- (id)listView;
- (void)_createListViewIfNeeded;
- (id)btView;
- (void)_createBTViewIfNeeded;
- (void)_showView:(id)arg1 animated:(BOOL)arg2;
- (id)connectTypeView;
- (void)_setSessionAvailabilityForState:(int)arg1;
- (void)_createConnectTypeViewIfNeeded;
- (void)_showInviteViewWithName:(id)arg1 animated:(BOOL)arg2;
- (void)_showStatusView:(int)arg1 peerName:(id)arg2 animated:(BOOL)arg3;
- (void)_showNoPeersView:(BOOL)arg1;
- (void)_showListView:(BOOL)arg1;
- (void)_setupListView;
- (int)_determineBluetoothStatus;
- (void)_showBluetoothErrorView:(BOOL)arg1;
- (void)_showRequestBluetoothView:(BOOL)arg1;
- (void)_showConnectTypeView:(BOOL)arg1;
- (int)pendingState;
- (void)setUpdating:(BOOL)arg1;
- (BOOL)alertPresented;
- (BOOL)updating;
- (BOOL)_shouldShowConnectTypeView;
- (id)menuQueue;
- (void)loadInitialView;
- (void)setPendingState:(int)arg1;
- (void)_declineInvitation:(id)arg1;
- (void)_acceptInvitation:(id)arg1;
- (void)_turnBluetoothOn:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_nearbyButtonPressed:(id)arg1;
- (void)_onlineButtonPressed:(id)arg1;
- (int)bluetoothStatus;
- (BOOL)_updatePicker:(int)arg1;
- (void)_sortAndUpdateTable;
- (id)currentSession;
- (id)peerTableView;
- (id)peers;
- (id)currentConnectionTypeKey;
- (id)sessionMap;
- (void)setInvitationWaitTimer:(id)arg1;
- (id)invitationWaitTimer;
- (void)setMenuQueue:(id)arg1;
- (void)setPeerTableView:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setNoPeersView:(id)arg1;
- (void)setInviteView:(id)arg1;
- (void)setStatusView:(id)arg1;
- (void)setListView:(id)arg1;
- (void)setBtView:(id)arg1;
- (void)setConnectTypeView:(id)arg1;
- (void)setCurrentConnectionTypeKey:(id)arg1;
- (void)setSessionMap:(id)arg1;
- (void)setSearchingForServicesString:(id)arg1;
- (unsigned int)connectionTypesMask;
- (void)setConnectionTypesMask:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)dismiss;
- (BOOL)isVisible;
- (BOOL)isAnimating;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)setState:(int)arg1;
- (int)state;
- (void)didReceiveMemoryWarning;
- (void)show;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)dealloc;

@end
