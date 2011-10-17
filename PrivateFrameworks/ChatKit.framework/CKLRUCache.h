/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableDictionary, NSMutableArray;

@interface CKLRUCache : NSObject  {
    unsigned int _capacity;
    NSMutableDictionary *_cacheDict;
    NSMutableArray *_orderArray;
}

@property(readonly) unsigned int count;
@property unsigned int capacity;


- (id)allObjects;
- (void)setCapacity:(unsigned int)arg1;
- (unsigned int)capacity;
- (void)_removeLRUObject;
- (unsigned int)count;
- (id)description;
- (id)objectForKey:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end
