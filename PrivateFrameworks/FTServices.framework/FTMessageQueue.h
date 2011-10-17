/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class <FTMessageQueueDelegate>, FTMessage, NSArray, NSMutableArray;

@interface FTMessageQueue : NSObject  {
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    <FTMessageQueueDelegate> *_delegate;
}

@property(readonly) FTMessage * topMessage;
@property(readonly) int count;
@property(readonly) NSArray * messages;
@property <FTMessageQueueDelegate> * delegate;
@property(retain) NSMutableArray * _queue;
@property(retain) NSMutableArray * _addDates;


- (id)messages;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)removeAllMessages;
- (BOOL)addMessage:(id)arg1;
- (BOOL)removeMessage:(id)arg1;
- (void)set_addDates:(id)arg1;
- (id)_addDates;
- (void)set_queue:(id)arg1;
- (id)dequeueTopMessage;
- (void)_setTimeout;
- (void)_clearTimeout;
- (void)_timeoutHit;
- (id)topMessage;
- (int)count;
- (id)init;
- (void)dealloc;
- (id)_queue;

@end
