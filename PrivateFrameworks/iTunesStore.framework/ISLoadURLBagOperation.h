/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
    SSURLBagContext *_context;
}

@property(readonly) SSURLBagContext * context;


- (id)uniqueKey;
- (id)initWithBagContext:(id)arg1;
- (void)run;
- (id)context;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (id)_copyProductionBootstrapURLs;
- (id)_copySandboxBootstrapURLs;
- (void)_loadConfigurationFromURLBag:(id)arg1;
- (void)_loadURLBagFromURL:(id)arg1;
- (id)_copyBootstrapURLs;
- (id)init;
- (void)dealloc;
- (BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;

@end
