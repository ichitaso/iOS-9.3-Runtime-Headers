/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableSet, NSString, <GKComposeControllerDelegate>, NSURL;

@interface GKComposeController : GKAbstractComposeController  {
    BOOL _alreadySetUp;
    int _successCount;
    int _failCount;
    BOOL _dismissed;
    BOOL _alertShown;
    <GKComposeControllerDelegate> *_delegate;
    NSURL *_serverAddFriendsURL;
    BOOL _messageWasSetExternally;
    NSMutableSet *_playerFriendRequestsSent;
}

@property <GKComposeControllerDelegate> * delegate;
@property(copy) NSString * defaultMessage;
@property(retain) NSURL * serverAddFriendsURL;
@property BOOL messageWasSetExternally;
@property(retain) NSMutableSet * playerFriendRequestsSent;


- (id)serverAddFriendsURL;
- (void)addPlayerRecipients:(id)arg1;
- (void)showAlertForFailures:(id)arg1 allFailed:(BOOL)arg2;
- (void)setPlayerFriendRequestsSent:(id)arg1;
- (id)playerFriendRequestsSent;
- (void)send:(id)arg1;
- (void)showAlertForError:(id)arg1;
- (void)setDefaultMessageWithRealName;
- (void)setServerAddFriendsURL:(id)arg1;
- (void)serverAddFriendsButtonWasTouched;
- (BOOL)messageWasSetExternally;
- (void)setMessageWasSetExternally:(BOOL)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)updateNavigationButtons;
- (void)updateTitle;
- (id)defaultMessage;
- (void)setDefaultMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dismiss;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)delegate;
- (void)dealloc;

@end
