/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CoreDAVTaskManager>, NSMutableSet, NSError, <CoreDAVTaskGroupDelegate>, <CoreDAVAccountInfoProvider>;

@interface CoreDAVTaskGroup : NSObject  {
    <CoreDAVTaskManager> *_taskManager;
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    double _timeoutInterval;
    NSMutableSet *_outstandingTasks;
    BOOL _isCancelling;
    BOOL _isTearingDown;
    <CoreDAVTaskGroupDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSError *_error;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property double timeoutInterval;
@property(copy) id progressBlock;
@property(copy) id completionBlock;
@property(retain) NSError * error;
@property(readonly) <CoreDAVTaskManager> * taskManager;
@property(readonly) <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(readonly) NSMutableSet * outstandingTasks;


- (void)setError:(id)arg1;
- (id)completionBlock;
- (id)outstandingTasks;
- (void)_tearDownAllTasks;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1;
- (void)syncAway;
- (void)cancelTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
- (id)accountInfoProvider;
- (void)bailWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;
- (void)setCompletionBlock:(id)arg1;
- (id)delegate;
- (id)error;
- (void)dealloc;
- (id)taskManager;

@end
