/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSRecursiveLock, NSMutableArray, ABGroupWrapper;

@interface ABModel : NSObject  {
    void *_addressBook;
    NSMutableArray *_displayedGroups;
    struct { struct { /* ? */ } *x1; int x2; int x3; } *_sectionLists;
    struct __CFDictionary { } *_headerSortKeyToHeaderString;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _displayedMemberPreparedRange;
    unsigned int _numberOfDisplayedMembers;
    BOOL _displayedMembersAreSearchResults;
    void *_selectedPerson;
    ABGroupWrapper *_selectedGroupWrapper;
    ABGroupWrapper *_lastSelectedGroupWrapper;
    unsigned int _displayOrdering;
    struct __CFArray { } *_databaseChangeDelegates;
    void *_backgroundAddressBook;
    BOOL _backgroundAddressBookInvalidated;
    NSMutableArray *_cachedModelRecords;
    NSRecursiveLock *_memberLock;
    BOOL _loadingInBackground;
    NSRecursiveLock *_backgroundLoadingLock;
    BOOL _backgroundInvalidated;
    id _delayedNotificationHandler;
    BOOL _autoInvalidateOnDatabaseChange;
}

@property(retain) ABGroupWrapper * selectedGroupWrapper;
@property void* addressBook;

+ (unsigned int)sortOrdering;
+ (void)initialize;

- (id)initWithAddressBook:(void*)arg1;
- (void)setAddressBook:(void*)arg1;
- (void*)addressBook;
- (void)setSortOrdering:(unsigned int)arg1;
- (void)dealloc;
- (void)setDisplayNameOrdering:(unsigned int)arg1;
- (void)resetSortKeyToHeaderStringDictionary;
- (void)setFilteredDisplayedMembers:(struct __CFArray { }*)arg1;
- (int)displayedMemberSectionListsCount;
- (id)allCachedModelRecords;
- (void*)displayedMemberAtIndex:(unsigned int)arg1;
- (long)indexForDisplayedMember:(void*)arg1;
- (void)copyDisplayedNamePieces:(id*)arg1 isGroup:(BOOL*)arg2 highlightIndex:(int*)arg3 forMemberID:(int*)arg4 atindex:(unsigned int)arg5;
- (struct { struct { /* ? */ } *x1; int x2; int x3; }*)displayedMemberSectionLists;
- (void*)selectedPerson;
- (void)setSelectedGroup:(void*)arg1;
- (void*)selectedGroup;
- (void)invalidateLastSelectedGroupWrapper;
- (id)selectedGroupWrapper;
- (void)addDatabaseChangeDelegate:(id)arg1;
- (void)removeDatabaseChangeDelegate:(id)arg1;
- (struct __CFArray { }*)_databaseChangeDelegates;
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1;
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2;
- (id)lastSelectedGroupWrapper;
- (void)resetSectionList;
- (void)setAutoInvalidateOnDatabaseChange:(BOOL)arg1;
- (void)invalidateDisplayedMembers;
- (void)prepareDisplayedMembersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_waitUntilBackgroundThreadFinished;
- (struct __CFDictionary { }*)headerSortKeyToHeaderStringDictionary;
- (BOOL)shouldUsePartialLoadingForGroupWrapper:(id)arg1;
- (long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(struct __CFDictionary { }*)arg2;
- (long)resetFullSectionList:(struct __CFDictionary { }*)arg1 maximumSectionCount:(int)arg2;
- (void)_cachePeople:(struct __CFArray { }*)arg1 atEnd:(BOOL)arg2;
- (unsigned int)numberOfDisplayedMembers;
- (id)displayedMembersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_newModelRecordFromRecord:(void*)arg1;
- (struct __CFArray { }*)_copyArrayOfPeopleInSelectedGroupWrapperForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inBackground:(BOOL)arg2;
- (void)_loadMembersInBackground:(id)arg1;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(BOOL)arg1;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_displayedGroupMembersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (long)_indexOfMember:(void*)arg1 inDisplayedMembers:(id)arg2;
- (void)setSelectedGroupWrapper:(id)arg1;
- (void)setLastSelectedGroupWrapper:(id)arg1;
- (void)setSelectedPerson:(void*)arg1;
- (void)invalidateDisplayedGroups;
- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(BOOL)arg1 deletedPerson:(BOOL)arg2;
- (void)_modelDatabaseChangedLocally:(struct __CFDictionary { }*)arg1;
- (void)_modelDatabaseChangedExternally:(struct __CFDictionary { }*)arg1;

@end
