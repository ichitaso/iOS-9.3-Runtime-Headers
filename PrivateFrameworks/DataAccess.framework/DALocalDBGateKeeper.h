/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableSet, NSMutableArray, <DADataclassLockWatcher>;

@interface DALocalDBGateKeeper : NSObject  {
    BOOL _claimedOwnershipOfContacts;
    <DADataclassLockWatcher> *_contactsLockHolder;
    NSMutableArray *_contactsWaiters;
    NSMutableSet *_waiterIDsExpectingContactsLock;
    BOOL _claimedOwnershipOfEvents;
    <DADataclassLockWatcher> *_eventsLockHolder;
    NSMutableArray *_eventsWaiters;
    NSMutableSet *_waiterIDsExpectingEventsLock;
    BOOL _claimedOwnershipOfNotes;
    <DADataclassLockWatcher> *_notesLockHolder;
    NSMutableArray *_notesWaiters;
    NSMutableSet *_waiterIDsExpectingNotesLock;
    BOOL _claimedOwnershipOfBookmarks;
    <DADataclassLockWatcher> *_bookmarksLockHolder;
    NSMutableArray *_bookmarksWaiters;
    NSMutableSet *_waiterIDsExpectingBookmarksLock;
}

+ (id)sharedGateKeeper;

- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(int)arg2 moreComing:(BOOL)arg3;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)claimedOwnershipOfDataclasses:(int)arg1;
- (id)stateString;

@end
