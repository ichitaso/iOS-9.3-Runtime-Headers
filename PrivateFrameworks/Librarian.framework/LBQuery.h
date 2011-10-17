/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSPredicate, NSThread, NSMutableIndexSet, NSMutableArray, NSString, NSMutableDictionary, NSArray;

@interface LBQuery : NSObject  {
    NSString *_query;
    unsigned int _accumulatedItemCount;
    NSMutableArray *_changes;
    NSMutableDictionary *_toBeRemoved;
    NSMutableDictionary *_toBeReplaced;
    NSMutableDictionary *_toBeInserted;
    NSMutableIndexSet *_removalSet;
    NSMutableIndexSet *_replacementSet;
    NSMutableIndexSet *_insertionSet;
    bool_pendingChanges;
    bool_ubiquitousGatherComplete;
    int _queryState;
    BOOL _synchronous;
    NSArray *_values;
    NSArray *_sortingAttributes;
    struct { 
        unsigned int first_max_num; 
        unsigned int first_max_ms; 
        unsigned int progress_max_num; 
        unsigned int progress_max_ms; 
        unsigned int update_max_num; 
        unsigned int update_max_ms; 
    } _batchingParameters;
    NSMutableArray *_results;
    NSMutableDictionary *_resultsDict;
    int (*_create_result_fn)();
    void *_create_result_context;
    int (*_create_result_callbacks_equal)();
    int (*_create_result_callbacks_release)();
    int (*_create_value_fn)();
    void *_create_value_context;
    int (*_create_value_callbacks_equal)();
    int (*_create_value_callbacks_release)();
    NSArray *_searchScopes;
    unsigned long _scopeOptions;
    int (*_sort_fn)();
    void *_sort_context;
    struct dispatch_queue_s { } *_notificationQueue;
    struct __LBItemUpdateObserver { } *_observer;
    NSThread *_executeThread;
    struct dispatch_source_s { } *_notifyTimer;
    unsigned long long _notifyInterval;
    bool_pendingNote;
    long long _disableCount;
    NSMutableDictionary *_created;
    NSPredicate *_predicate;
}


- (void)finalize;
- (void)setBatchingParameters:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(struct __CFArray { }*)arg4;
- (void)setCreateResultFunction:(int (*)())arg1 withContext:(void*)arg2 callbacks:(const struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setCreateValueFunction:(int (*)())arg1 withContext:(void*)arg2 callbacks:(const struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setSortComparator:(int (*)())arg1 withContext:(void*)arg2;
- (void)setSearchScope:(id)arg1 withOptions:(unsigned long)arg2;
- (unsigned char)executeWithOptions:(unsigned long)arg1;
- (void)processUpdates;
- (id)valuesOfAttribute:(id)arg1;
- (unsigned int)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(int)arg2;
- (int)indexOfResult:(const void*)arg1;
- (const void*)resultAtIndex:(int)arg1;
- (unsigned int)resultCount;
- (void)disableUpdates;
- (void)enableUpdates;
- (id)predicate;
- (void)stop;
- (void)dealloc;
- (void)_stop;
- (void)_didInsert:(id)arg1;
- (void)_willInsert:(id)arg1;
- (void)_didRemove:(id)arg1;
- (void)_willRemove:(id)arg1;
- (void)_didReplace:(id)arg1;
- (void)_willReplace:(id)arg1;
- (void)_postNote:(struct __CFString { }*)arg1;
- (void)_createChangeSets;
- (void)_didChange:(unsigned int)arg1 inSet:(id)arg2;
- (void)_willChange:(unsigned int)arg1 inSet:(id)arg2;
- (void)_runQuery;
- (void)updateQueryResultForURL:(id)arg1 info:(id)arg2 updateType:(int)arg3;
- (void)deleteURL:(id)arg1;
- (void)addChangeToURL:(id)arg1 withInfo:(id)arg2;
- (void)addCreatedURL:(id)arg1 withInfo:(id)arg2 makeLive:(bool)arg3;
- (void)addItemWithURL:(id)arg1 usingInfo:(id)arg2;
- (void)_processUpdates;
- (void)_processChanges;
- (void)postNote:(struct __CFString { }*)arg1;
- (void)_enableUpdates;
- (void)sendNote;
- (void)_disableUpdates;
- (void)_real_dealloc;

@end
