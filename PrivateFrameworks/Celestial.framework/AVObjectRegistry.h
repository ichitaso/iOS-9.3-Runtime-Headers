/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSRecursiveLock, NSMutableSet;

@interface AVObjectRegistry : NSObject  {
    NSMutableSet *_registeredObjects;
    NSRecursiveLock *_lock;
}

+ (id)defaultObjectRegistry;

- (id)init;
- (void)dealloc;
- (void)registerObjectForSafeRetain:(id)arg1;
- (void)finishedRelease;
- (BOOL)shouldReleaseObject:(id)arg1 requireThread:(id)arg2;
- (void)safePerformTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;
- (void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;
- (void)safePostNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)safePostNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4;
- (void)safePostDelayedNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4;
- (BOOL)safeRetainObject:(id)arg1;
- (void)safeInvokeWithDescription:(id)arg1;
- (void)safeInvokeWithDescriptionDelayed:(id)arg1;
- (void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)safePostDelayedNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (BOOL)isObjectRegistered:(id)arg1;
- (void)safePerformOnThread:(id)arg1 target:(id)arg2 selector:(SEL)arg3 object:(id)arg4;
- (void)registerObject:(id)arg1;
- (void)unregisterObject:(id)arg1;

@end
