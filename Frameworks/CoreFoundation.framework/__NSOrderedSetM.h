/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSMutableArray;

@interface __NSOrderedSetM : NSMutableOrderedSet  {
    unsigned int _used;
    struct __CFBasicHash { } *_set;
    NSMutableArray *_array;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id*)arg1 :(unsigned int)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (unsigned int)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)_mutate;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;

@end
