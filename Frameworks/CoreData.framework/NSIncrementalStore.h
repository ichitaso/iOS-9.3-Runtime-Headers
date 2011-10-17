/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore  {
    NSDictionary *_storeMetadata;
    unsigned long long _lastIdentifier;
    void *_reserveda;
    void *_reservedb;
}

+ (id)identifierForNewStoreAtURL:(id)arg1;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;

- (id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (BOOL)loadMetadata:(id*)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (void)_preflightCrossCheck;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (BOOL)load:(id*)arg1;
- (id)referenceObjectForObjectID:(id)arg1;
- (id)_rawMetadata__;
- (void)setMetadata:(id)arg1;
- (id)metadata;

@end
