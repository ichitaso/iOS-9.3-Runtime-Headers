/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class CNFRegController, <CNFRegWizardControllerDelegate>;

@interface CNFRegWizardController : PSSetupController  {
    CNFRegController *_regController;
    int _serviceType;
    <CNFRegWizardControllerDelegate> *_firstRunDelegate;
    id _resignListener;
    id _resumeListener;
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int canShowDisabledScreen : 1; 
        unsigned int hideLearnMoreButton : 1; 
        unsigned int showSplashOnSignin : 1; 
        unsigned int reloadOnViewWillAppear : 1; 
        unsigned int allowCancel : 1; 
    } _wizardFlags;
}

@property BOOL canStartNested;
@property BOOL canShowSplashScreen;
@property BOOL allowCancel;
@property BOOL showSplashOnSignin;
@property BOOL canShowDisabledScreen;
@property BOOL hideLearnMoreButton;
@property BOOL shouldListenForSuspension;
@property BOOL reloadOnViewWillAppear;
@property(retain) CNFRegController * regController;
@property <CNFRegWizardControllerDelegate> * firstRunDelegate;

+ (void)setGlobalAppearanceStyle:(int)arg1;
+ (void)setSupportsAutoRotation:(BOOL)arg1;

- (void)setupController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)controllersToShow;
- (BOOL)shouldShowFirstRunController;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (BOOL)canStartNested;
- (void)setCanStartNested:(BOOL)arg1;
- (void)setCanShowSplashScreen:(BOOL)arg1;
- (void)setCanShowDisabledScreen:(BOOL)arg1;
- (BOOL)reloadOnViewWillAppear;
- (void)setReloadOnViewWillAppear:(BOOL)arg1;
- (BOOL)shouldListenForSuspension;
- (void)setShouldListenForSuspension:(BOOL)arg1;
- (BOOL)allowCancel;
- (void)setAllowCancel:(BOOL)arg1;
- (BOOL)showSplashOnSignin;
- (void)setShowSplashOnSignin:(BOOL)arg1;
- (id)firstRunDelegate;
- (void)setFirstRunDelegate:(id)arg1;
- (id)initWithServiceTypes:(int)arg1;
- (void)_stopListeningForResignResume;
- (int)_firstRunState:(id)arg1;
- (BOOL)canShowSplashScreen;
- (BOOL)canShowDisabledScreen;
- (id)controllerClassesToShow:(BOOL)arg1;
- (void)_doCancel;
- (id)controllersToShow:(BOOL)arg1;
- (BOOL)shouldShowFirstRunController:(BOOL)arg1;
- (void)_startListeningForResignResume;
- (BOOL)hideLearnMoreButton;
- (void)setHideLearnMoreButton:(BOOL)arg1;
- (void)dismissFinished:(BOOL)arg1;
- (id)initWithRegController:(id)arg1;
- (void)setRegController:(id)arg1;
- (void)dismissWithState:(unsigned int)arg1;
- (id)regController;

@end
