/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSLock;

@interface SCROClient : NSObject  {
    NSLock *_lock;
    unsigned int _identifier;
    unsigned int _port;
    struct __CFArray { } *_queue;
    struct __CFSet { } *_callbackSet;
}

+ (id)addClientGetIdentifier:(unsigned int*)arg1 getPort:(unsigned int*)arg2;
+ (long)removeClientWithPort:(unsigned int)arg1;
+ (void)sendCallback:(id)arg1;
+ (id)callbacksForClientIdentifier:(unsigned int)arg1;
+ (void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned int)arg2;
+ (void)initialize;

- (void)_unlock;
- (BOOL)_wantsCallback:(id)arg1;
- (void)_sendCallback:(id)arg1;
- (id)_dequeueCallbacks;
- (void)_registerCallbackWithKey:(int)arg1;
- (void)_lock;
- (void)_invalidate;
- (id)init;
- (void)dealloc;

@end
