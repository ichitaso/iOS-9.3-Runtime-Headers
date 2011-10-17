/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMapTable, NSArray;

@interface MKCache0 : NSObject  {
    NSMapTable *_itemCache;
    unsigned int _currentHeapTime;
    float _compactionFactor;
    unsigned int _maxCapacity;
}

@property(readonly) NSArray * orderedObjects;
@property(readonly) NSArray * allObjects;
@property(readonly) unsigned int count;
@property float compactionFactor;
@property(readonly) unsigned int maxCapacity;


- (unsigned int)maxCapacity;
- (void)compact;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)allObjects;
- (void)removeAllObjects;
- (void)setCompactionFactor:(float)arg1;
- (float)compactionFactor;
- (BOOL)needsCompaction;
- (BOOL)canStopCompaction;
- (id)_allObjects;
- (void)evictObject:(id)arg1;
- (id)orderedObjects;
- (id)initWithCapacity:(unsigned int)arg1 maxCapacity:(unsigned int)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (unsigned int)count;
- (id)description;
- (id)objectForKey:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end
