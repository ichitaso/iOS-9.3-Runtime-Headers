/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class UIAlertView, NSMutableArray, NSURLCredential;

@interface WebUIAuthenticationManager : NSObject  {
    NSMutableArray *_authenticationChallenges;
    NSURLCredential *_credentials;
    UIAlertView *_authenticationView;
    id _delegate;
    BOOL _isShowingAuthenticationPanel;
}


- (void)cancelAuthentication;
- (void)setDelegate:(id)arg1;
- (id)authenticationChallenge;
- (void)addAuthenticationChallenge:(id)arg1;
- (void)removeAuthenticationChallenge:(id)arg1;
- (void)setShowingAuthentication:(BOOL)arg1;
- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(BOOL)arg2;
- (void)sheetReturnKeyPressed:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;

@end
