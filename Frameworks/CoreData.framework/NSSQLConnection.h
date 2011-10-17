/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLStatement, NSArray, NSSQLAdapter;

@interface NSSQLConnection : NSObject  {
    NSSQLAdapter *_adapter;
    BOOL _transactionIsOpen;
    BOOL _useSyntaxColoredLogging;
    int _debug;
    NSSQLStatement *_sqlStatement;
    NSArray *_columnsToFetch;
    NSArray *_metadataColumns;
}

+ (void)initialize;

- (void)finalize;
- (void)_raiseOptimisticLockingExceptionWithReason:(id)arg1;
- (id)initWithAdapter:(id)arg1;
- (void)awake;
- (void)sleep;
- (BOOL)hasOpenTransaction;
- (void)forceTransactionClosed;
- (void)_forceDisconnectOnError;
- (void)transactionDidBegin;
- (void)transactionDidCommit;
- (void)transactionDidRollback;
- (BOOL)canConnect;
- (BOOL)databaseIsEmpty;
- (void)selectAttributes:(id)arg1 fetchRequest:(id)arg2 lock:(BOOL)arg3 entity:(id)arg4;
- (id)sqlStatement;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (id)describeResults;
- (int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2;
- (void)performAdapterOperations:(id)arg1;
- (void)createSchema;
- (struct __CFArray { }*)rawIntegerRowsForSQL:(id)arg1;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (id)fetchTableNames;
- (id)fetchTableCreationSQL;
- (id)fetchMetadata;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (void)prepareForPrimaryKeyGeneration;
- (void)endPrimaryKeyGeneration;
- (BOOL)hasPrimaryKeyTable;
- (void)_performPostSaveTasks;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (id)allPeerRanges;
- (void)updateRow:(id)arg1;
- (void)insertCorrelation:(id)arg1;
- (void)updateCorrelation:(id)arg1;
- (void)deleteCorrelation:(id)arg1;
- (void)performAdapterOperation:(id)arg1;
- (void)prepareAndExecuteSQLStatement:(id)arg1;
- (void)createTableForEntity:(id)arg1;
- (void)createIndexesForEntity:(id)arg1;
- (void)createManyToManyTablesForEntity:(id)arg1;
- (void)willCreateSchema;
- (void)beginTransaction;
- (BOOL)hasMetadataTable;
- (void)didCreateSchema;
- (void)createTablesForEntities:(id)arg1;
- (void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(BOOL)arg2;
- (void)createMetadata;
- (void)saveMetadata:(id)arg1;
- (void)rollbackTransaction;
- (id)metadataColumns;
- (void)setColumnsToFetch:(id)arg1;
- (id)newFetchedArray;
- (void)endFetch;
- (BOOL)isFetchInProgress;
- (id)adapter;
- (void)prepareSQLStatement:(id)arg1;
- (void)execute;
- (void)resetSQLStatement;
- (void)releaseSQLStatement;
- (BOOL)isOpen;
- (id)fetchUbiqiutyKnowledgeVector;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (id)columnsToFetch;
- (void)disconnect;
- (void)insertRow:(id)arg1;
- (void)deleteRow:(id)arg1;
- (void)connect;
- (void)commitTransaction;
- (void)dealloc;

@end
