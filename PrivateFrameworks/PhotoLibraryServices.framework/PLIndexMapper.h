/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLIndexMapperDataSource>;

@interface PLIndexMapper : NSObject  {
    <PLIndexMapperDataSource> *_dataSource;
}


- (id)indexesForBackingIndexes:(id)arg1;
- (id)backingIndexesForIndexes:(id)arg1;
- (unsigned int)backingIndexForIndex:(unsigned int)arg1;
- (unsigned int)indexForBackingIndex:(unsigned int)arg1;
- (BOOL)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3;
- (id)initWithDataSource:(id)arg1;

@end
