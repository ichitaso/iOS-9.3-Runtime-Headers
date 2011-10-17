/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class UIView<ADBannerControllerDelegate>, ADHostWindowController, NSString;

@interface ADBannerController : NSObject  {
    UIView<ADBannerControllerDelegate> *_delegate;
    ADHostWindowController *_hostWindowController;
    BOOL _isOpen;
    BOOL _bannerWillLeaveApplication;
    NSString *_identifier;
    double _createdAt;
    id _remoteSession;
    id _remoteBannerController;
    BOOL _storyboardSupportsPortrait;
    BOOL _storyboardSupportsPortraitUpsideDown;
    BOOL _storyboardSupportsLandscapeLeft;
    BOOL _storyboardSupportsLandscapeRight;
}

@property UIView<ADBannerControllerDelegate> * delegate;
@property(retain) ADHostWindowController * hostWindowController;
@property(readonly) BOOL isOpen;
@property(readonly) BOOL bannerWillLeaveApplication;
@property double createdAt;
@property(readonly) NSString * identifier;
@property(retain) id remoteSession;
@property(retain) id remoteBannerController;
@property BOOL storyboardSupportsPortrait;
@property BOOL storyboardSupportsPortraitUpsideDown;
@property BOOL storyboardSupportsLandscapeLeft;
@property BOOL storyboardSupportsLandscapeRight;


- (void)setDelegate:(id)arg1;
- (void)setStoryboardSupportsLandscapeRight:(BOOL)arg1;
- (BOOL)storyboardSupportsLandscapeRight;
- (void)setStoryboardSupportsLandscapeLeft:(BOOL)arg1;
- (BOOL)storyboardSupportsLandscapeLeft;
- (void)setStoryboardSupportsPortraitUpsideDown:(BOOL)arg1;
- (BOOL)storyboardSupportsPortraitUpsideDown;
- (void)setStoryboardSupportsPortrait:(BOOL)arg1;
- (BOOL)storyboardSupportsPortrait;
- (id)remoteSession;
- (BOOL)bannerWillLeaveApplication;
- (id)hostWindowController;
- (void)unloadAndClose;
- (void)loadDebuggerFromPath:(id)arg1 portName:(id)arg2;
- (void)loadLocalAd:(id)arg1;
- (void)interstitialPresentedInView:(BOOL)arg1;
- (void)bannerKeysDidChange:(id)arg1;
- (void)interstitialWasRemovedFromSuperview:(id)arg1;
- (void)bannerFrameDidChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 viewControllerOrientation:(int)arg2;
- (void)updateSpecification;
- (void)cancelBannerViewAction;
- (void)refuseBannerViewAction;
- (void)executeBannerViewActionFrom:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withClickLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)applicationDidResignActive:(id)arg1;
- (void)controllerKeysDidChange:(id)arg1;
- (id)keysDidChangeMessageDictionary:(id)arg1;
- (void)handleBannerVisibilityHeartbeatNotification:(id)arg1;
- (void)checkForSessionOpenTimeout;
- (void)setHostWindowController:(id)arg1;
- (void)_closeAndReportError:(id)arg1;
- (void)dismissHostWindowController;
- (void)_adSheetConnectionLost;
- (void)setRemoteSession:(id)arg1;
- (BOOL)isOpen;
- (void)setCreatedAt:(double)arg1;
- (double)createdAt;
- (void)setRemoteBannerController:(id)arg1;
- (id)remoteBannerController;
- (void)interstitialTouchedDismissAreaWithControlEvent:(unsigned int)arg1;
- (void)_remote_bannerViewWillLoadAd:(id)arg1;
- (void)_remote_interstitialViewExpiredAndWasUnloaded:(id)arg1;
- (void)_remote_bannerViewDidFail:(id)arg1;
- (void)_remote_bannerViewDidLoadAd:(id)arg1;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_storyboardDidChangeSupportedOrientations:(id)arg1;
- (void)_remote_storyboardDidFinishFirstSignificantDraw:(id)arg1;
- (void)_remote_storyboardDidTransitionOut:(id)arg1;
- (void)_remote_storyboardWillTransitionOut:(id)arg1;
- (void)_remote_storyboardDidTransitionIn:(id)arg1;
- (void)_remote_storyboardWillTransitionIn:(id)arg1;
- (void)_remote_bannerControllerDidOpen:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)open;
- (void)close;
- (id)identifier;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)delegate;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)_close;

@end
