/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROServerDelegate>, NSLock;

@interface SCROServer : NSObject  {
    NSLock *_contentLock;
    <SCROServerDelegate> *_delegate;
    struct __CFRunLoopSource { } *_serverSource;
    struct __CFRunLoopSource { } *_deathSource;
    struct __CFRunLoopTimer { } *_deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    int _clientCount;
    BOOL _isRegisteredWithMach;
}

+ (void)initialize;
+ (id)sharedServer;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)isRegisteredWithMach;
- (BOOL)registerWithMach;
- (void)unregisterWithMach;
- (long)_incrementClientCount;
- (struct __CFRunLoopTimer { }*)_deathTimer;
- (int)_registerForNotificationOnDeathPort:(unsigned int)arg1;
- (void)_setClientCount:(long)arg1;
- (long)_clientCount;
- (void)setDelegate:(id)arg1;
- (struct __CFRunLoopSource { }*)serverSource;
- (id)delegate;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)init;
- (void)release;

@end
