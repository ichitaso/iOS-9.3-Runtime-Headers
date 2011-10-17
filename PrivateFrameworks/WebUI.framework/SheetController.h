/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class UIAlertView, NSMutableArray;

@interface SheetController : NSObject <BrowserPanel, UIModalViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    struct __CFDictionary { } *_views;
    UIAlertView *_view;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
    int _actionToPerform;
    BOOL _isDismissed;
}


- (void)setDelegate:(id)arg1;
- (BOOL)disablesStatusBarPress;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (void)hideSheet;
- (int)panelType;
- (int)panelState;
- (int)pausesPages;
- (BOOL)ignoresPrivateBrowsingStyle;
- (void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3;
- (void)didPresentAlertView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
