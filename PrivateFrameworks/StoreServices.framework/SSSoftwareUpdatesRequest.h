/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSoftwareUpdatesContext, <SSSoftwareUpdatesRequestDelegate>;

@interface SSSoftwareUpdatesRequest : SSRequest  {
    SSSoftwareUpdatesContext *_context;
}

@property(readonly) SSSoftwareUpdatesContext * updateQueueContext;
@property <SSSoftwareUpdatesRequestDelegate> * delegate;


- (id)updateQueueContext;
- (id)initWithUpdateQueueContext:(id)arg1;
- (id)handleFailureResponse:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (void)_sendResponseToDelegate:(id)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void)dealloc;

@end
