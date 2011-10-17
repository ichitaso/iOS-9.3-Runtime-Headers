/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, <IMConnectionMonitorDelegate>;

@interface IMConnectionMonitor : NSObject  {
    NSString *_remoteHost;
    <IMConnectionMonitorDelegate> *_delegate;
}

@property(readonly) BOOL isImmediatelyReachable;
@property(readonly) BOOL requiresDataConnectionActivation;
@property(setter=setDataConnectionActive:) BOOL isDataConnectionActive;
@property <IMConnectionMonitorDelegate> * delegate;
@property(readonly) NSString * remoteHost;

+ (id)alloc;

- (void)setDelegate:(id)arg1;
- (id)remoteHost;
- (BOOL)requiresDataConnectionActivation;
- (BOOL)isDataConnectionActive;
- (void)setDataConnectionActive:(BOOL)arg1;
- (void)goDisconnected;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)_setup;
- (BOOL)isImmediatelyReachable;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (void)clear;
- (id)delegate;
- (void)dealloc;

@end
