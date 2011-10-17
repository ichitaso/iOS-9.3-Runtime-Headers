/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFDictionary : NSMutableDictionary  {
    unsigned char _cfinfo[4];
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
    id *_keys;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)removeObjectForKey:(id)arg1;
- (void)finalize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)keyEnumerator;
- (Class)classForCoder;
- (void)removeAllObjects;
- (void)setObservationInfo:(void*)arg1;
- (unsigned int)count;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)objectForKey:(id)arg1;
- (id)retain;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;

@end
