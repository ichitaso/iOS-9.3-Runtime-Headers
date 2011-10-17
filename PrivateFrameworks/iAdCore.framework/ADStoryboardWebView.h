/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableSet, <ADWebViewDelegate><ADStoryboardWebViewDelegate>, NSMutableArray, ADAdJSO, NSString, ADAdData, UIViewController, <ADStoryboardWebViewDelegate><ADWebViewDelegate>;

@interface ADStoryboardWebView : ADWebView <ADJSODelegate, UIAlertViewDelegate> {
    BOOL _scrollingEnabled;
    <ADStoryboardWebViewDelegate><ADWebViewDelegate> *_delegate;
    NSString *_qToken;
    BOOL _privilegedClient;
    BOOL _adManagesPurchaseFlow;
    UIViewController *_viewController;
    ADAdData *_adResponse;
    ADAdJSO *_adScriptObject;
    NSMutableArray *_mapPlugins;
    id _currentModalOwner;
    struct dispatch_queue_s { } *_scriptObjectModalAccessDispatchQueue;
    int _javaScriptAlertButtonIndex;
    BOOL _isShuttingDown;
    NSMutableSet *_activeJavaScriptAlerts;
}

@property BOOL scrollingEnabled;
@property(readonly) float estimatedProgress;
@property <ADWebViewDelegate><ADStoryboardWebViewDelegate> * delegate;
@property UIViewController * viewController;
@property(retain) NSString * qToken;
@property(getter=isPrivilegedClient) BOOL privilegedClient;
@property BOOL adManagesPurchaseFlow;
@property(readonly) BOOL isBusy;
@property(retain) ADAdData * adResponse;
@property(retain) ADAdJSO * adScriptObject;
@property(retain) NSMutableArray * mapPlugins;
@property(retain) id currentModalOwner;
@property struct dispatch_queue_s { }* scriptObjectModalAccessDispatchQueue;
@property int javaScriptAlertButtonIndex;
@property BOOL isShuttingDown;
@property(retain) NSMutableSet * activeJavaScriptAlerts;

+ (void)initialize;

- (BOOL)isBusy;
- (void)setDelegate:(id)arg1;
- (BOOL)isShuttingDown;
- (void)setActiveJavaScriptAlerts:(id)arg1;
- (id)activeJavaScriptAlerts;
- (void)setIsShuttingDown:(BOOL)arg1;
- (void)setJavaScriptAlertButtonIndex:(int)arg1;
- (int)javaScriptAlertButtonIndex;
- (void)setScriptObjectModalAccessDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)scriptObjectModalAccessDispatchQueue;
- (id)currentModalOwner;
- (void)setMapPlugins:(id)arg1;
- (id)mapPlugins;
- (void)willUnloadContent;
- (void)scriptObjectRequestsGeolocation:(id)arg1;
- (void)scriptObject:(id)arg1 didCreateView:(id)arg2;
- (id)webViewForScriptObject:(id)arg1;
- (id)scriptObjectValueForQToken:(id)arg1;
- (void)setCurrentModalOwner:(id)arg1;
- (void)setAdScriptObject:(id)arg1;
- (id)adScriptObject;
- (float)estimatedProgress;
- (void)mapPluginDestroyed:(id)arg1;
- (void)configureMapPlugin:(id)arg1;
- (void)scriptObject:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2;
- (void)scriptObject:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 animated:(BOOL)arg4;
- (void)logForPrivilegedClients:(id)arg1;
- (id)adResponse;
- (id)humanReadableNameForContent;
- (void)scriptObjectDidTakeScreenShot:(id)arg1;
- (void)scriptObjectWillTakeScreenShot:(id)arg1;
- (void)scriptObject:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2;
- (void)scriptObject:(id)arg1 didReportSystemEventWithType:(int)arg2;
- (void)scriptObject:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3;
- (id)scriptObject:(id)arg1 requestsURLForString:(id)arg2 allowOtherDomains:(BOOL)arg3 error:(id*)arg4;
- (void)javaScriptObjectDidFinishModalActivity:(id)arg1;
- (BOOL)javaScriptObjectShouldBeginModalActivity:(id)arg1;
- (void)scriptObject:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned int)arg2;
- (void)scriptObject:(id)arg1 didReportClickEventWithContext:(id)arg2;
- (void)privilegedAdWantsToDismiss;
- (void)scriptObjectContentSignalsReady:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bannerRectOnScreen;
- (id)bannerParameters;
- (void)setAdResponse:(id)arg1;
- (BOOL)isPrivilegedClient;
- (void)clientApplicationDidBecomeActive;
- (void)clientApplicationDidResignActive;
- (void)setPrivilegedClient:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })tapLocation;
- (void)setQToken:(id)arg1;
- (void)setAdManagesPurchaseFlow:(BOOL)arg1;
- (BOOL)adManagesPurchaseFlow;
- (id)qToken;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)setPaused:(BOOL)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (BOOL)scrollingEnabled;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)interfaceOrientation;
- (id)delegate;
- (void)didMoveToWindow;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
