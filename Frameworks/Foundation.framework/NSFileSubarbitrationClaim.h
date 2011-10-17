/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSFileAccessNode, NSMutableSet, NSArray, NSMutableDictionary;

@interface NSFileSubarbitrationClaim : NSFileAccessClaim  {
    NSArray *_readingURLs;
    unsigned int _readingOptions;
    NSArray *_writingURLs;
    unsigned int _writingOptions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageSender;

    NSArray *_readingLocations;
    NSArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    NSMutableSet *_forwardedClaimIDs;
    NSMutableDictionary *_readRelinquishmentsByPresenterID;
    NSMutableDictionary *_writeRelinquishmentsByPresenterID;
}


- (id)relinquishmentForMessageOfKind:(id)arg1 toPresenterForID:(id)arg2;
- (id)initWithReadingURLs:(id)arg1 options:(unsigned int)arg2 writingURLs:(id)arg3 options:(unsigned int)arg4 claimer:(id)arg5;
- (void)devalueOldClaim:(id)arg1;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)evaluateNewClaim:(id)arg1;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)granted;
- (void)forwardReacquisitionMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenterForID:(id)arg3;
- (void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenter:(id)arg3 usingReplySender:(id)arg4;
- (id)initWithClient:(struct _xpc_connection_s { }*)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (id)messageSender;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)setMessageSender:(id)arg1;
- (void)revoked;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(id)arg2;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)dealloc;

@end
