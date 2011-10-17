/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <NSObject><NSCopying>, NSMutableOrderedSet, NSIndexSet, PLIndexMapper, NSMutableIndexSet, PLManagedAlbumList, PLPhotoLibrary, NSString, NSPredicate;

@interface PLFilteredAlbumList : NSObject <PLIndexMapperDataSource, PLIndexMappingCache, PLAlbumContainer> {
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    PLManagedAlbumList *backingAlbumList;
    int filter;
    NSPredicate *predicate;
    NSMutableOrderedSet *_albums;
}

@property(readonly) PLIndexMapper * indexMapper;
@property(readonly) NSIndexSet * filteredIndexes;
@property(readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) int albumListType;
@property int filter;
@property(readonly) NSMutableOrderedSet * albums;
@property(readonly) BOOL canEditAlbums;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(retain) PLManagedAlbumList * backingAlbumList;
@property(retain) NSPredicate * predicate;
@property(retain) NSMutableOrderedSet * _albums;
@property(readonly) NSString * _prettyDescription;
@property(readonly) NSString * _typeDescription;

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;

- (void)setPredicate:(id)arg1;
- (id)predicate;
- (int)filter;
- (id)_typeDescription;
- (id)identifier;
- (void)setFilter:(int)arg1;
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned int)arg2;
- (void)getFilteredAlbums:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)filteredAlbumsAtIndexes:(id)arg1;
- (id)objectInFilteredAlbumsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInFilteredAlbumsOfObject:(id)arg1;
- (unsigned int)countOfFilteredAlbums;
- (void)set_albums:(id)arg1;
- (id)_albums;
- (void)_invalidateFilteredIndexes;
- (void)_backingContextDidChange:(id)arg1;
- (id)backingAlbumList;
- (void)setBackingAlbumList:(id)arg1;
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;
- (void)mappedDataSourceChanged:(id)arg1;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)cachedIndexMapState;
- (id)indexMapper;
- (id)filteredIndexes;
- (int)albumListType;
- (id)_prettyDescription;
- (BOOL)hasAtLeastOneAlbum;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (BOOL)canEditAlbums;
- (id)photoLibrary;
- (id)albums;
- (id)managedObjectContext;
- (id)description;
- (void)dealloc;

@end
