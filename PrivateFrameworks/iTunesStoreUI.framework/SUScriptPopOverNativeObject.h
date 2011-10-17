/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIBarButtonItem, SUDOMElement;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject  {
    BOOL _redisplayAfterRotation;
    UIBarButtonItem *_sourceButtonItem;
    SUDOMElement *_sourceDOMElement;
}

@property(retain) UIBarButtonItem * sourceButtonItem;
@property(retain) SUDOMElement * sourceDOMElement;


- (void)dealloc;
- (id)sourceDOMElement;
- (id)sourceButtonItem;
- (BOOL)_isAffectedByWindowNotification:(id)arg1;
- (void)setupNativeObject;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)destroyNativeObject;
- (void)setSourceDOMElement:(id)arg1;
- (void)setSourceButtonItem:(id)arg1;

@end
