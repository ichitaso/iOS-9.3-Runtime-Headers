/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFSet : NSMutableSet  {
    unsigned char _cfinfo[4];
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)finalize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)member:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (unsigned int)_trueCount;
- (void)getObjects:(id*)arg1;
- (unsigned int)count;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)retain;
- (void)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;

@end
