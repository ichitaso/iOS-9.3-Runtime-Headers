/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSCountedSet;

@interface NSFilePresenterRelinquishment : NSObject  {
    NSCountedSet *_blockingAccessClaimIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _reacquirer;

}


- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (BOOL)setReacquirer:(id)arg1;
- (BOOL)addBlockingAccessClaimID:(id)arg1;
- (void)dealloc;

@end
