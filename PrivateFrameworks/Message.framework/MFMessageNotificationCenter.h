/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFRecursiveLock, NSMutableDictionary;

@interface MFMessageNotificationCenter : NSNotificationCenter  {
    MFRecursiveLock *_lock;
    NSMutableDictionary *_notificationMapping;
    struct __CFDictionary { } *_holders;
}


- (void)objectWillBeDeallocated:(id)arg1 holder:(id)arg2;
- (void)_mf_lock;
- (void)_mf_unlock;
- (id)copyAllObserversForNotificationName:(id)arg1 andObject:(id)arg2;
- (void)_removeEntryForObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)postNotification:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
