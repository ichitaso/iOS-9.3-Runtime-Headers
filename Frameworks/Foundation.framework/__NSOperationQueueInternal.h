/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSOperation;

@interface __NSOperationQueueInternal : NSObject  {
    int __queueLock;
    NSOperation *__firstOperation;
    NSOperation *__lastOperation;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastPriOperation[5];
    struct dispatch_queue_s { } *__pending_barrier;
    int __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    unsigned int __poke;
    unsigned char __mainQ;
    unsigned char __suspended;
    unsigned char __overcommit;
    unsigned char __pad1[1];
    BOOL __nameBuffer[160];
}


- (void)finalize;
- (id)init;
- (void)dealloc;

@end
