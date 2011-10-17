/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@class CPDistributedMessagingCenter, NSObject, NSLock;

@interface MSMailDefaultService : NSObject  {
    BOOL _shouldLaunch;
    NSLock *_lock;
    CPDistributedMessagingCenter *_server;
    CPDistributedMessagingCenter *_action;
    NSObject *_delegate;
}

@property NSObject * delegate;
@property BOOL shouldLaunchMobileMail;

+ (void)useNewThreadingModel;
+ (id)smi_serverCommandName;
+ (BOOL)shouldUseNewThreadingModel;

- (void)setDelegate:(id)arg1;
- (void)setShouldLaunchMobileMail:(BOOL)arg1;
- (BOOL)shouldLaunchMobileMail;
- (void)_setActiveAction:(id)arg1 responseSelector:(SEL)arg2;
- (void)_mailServiceDidTerminate:(id)arg1;
- (void)_generateUnitTestResponsesForResultArray:(id)arg1;
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3;
- (BOOL)_unitTestsAreEnabled;
- (void)_smi_notifyClientDidFinishWithError:(id)arg1;
- (id)_activeAction;
- (BOOL)_callMailServicesMethod:(id)arg1 arg:(id)arg2 reply:(id*)arg3 error:(id*)arg4 responseSelector:(SEL)arg5;
- (id)delegate;
- (void)_setServer:(id)arg1;
- (id)_copyServer;
- (void)cancel;
- (id)init;
- (void)dealloc;

@end
