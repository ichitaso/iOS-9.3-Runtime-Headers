/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSMappedObjectStore, NSString;

@interface NSPersistentStoreMap : NSObject  {
    NSMappedObjectStore *_store;
    NSString *_databaseUUID;
    NSMutableDictionary *_storeMetadata;
    unsigned long long _nextPK64;
    NSMutableDictionary *_mappings;
}

+ (void)initialize;

- (id)externalMapping;
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
- (id)_storeMetadataForSaving;
- (void)setDatabaseUUID:(id)arg1;
- (unsigned long long)nextPK64;
- (id)databaseUUID;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (id)handleFetchRequest:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (id)store;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)configurationName;
- (void)setMetadata:(id)arg1;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (id)metadata;
- (void)dealloc;

@end
