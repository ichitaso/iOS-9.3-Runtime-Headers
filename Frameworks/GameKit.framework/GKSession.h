/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKSessionDelegate>, NSString, <GKSessionPrivateDelegate>, GKConnection;

@interface GKSession : NSObject  {
    id _session;
}

@property <GKSessionDelegate> * delegate;
@property(readonly) NSString * sessionID;
@property(readonly) NSString * displayName;
@property(readonly) int sessionMode;
@property(readonly) NSString * peerID;
@property(getter=isAvailable) BOOL available;
@property double disconnectTimeout;
@property <GKSessionPrivateDelegate> * privateDelegate;
@property(getter=isBusy) BOOL busy;
@property BOOL wifiEnabled;
@property(readonly) GKConnection * connection;

+ (void)initialize;

- (id)privateImpl;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (id)privateDelegate;
- (BOOL)wifiEnabled;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2;
- (BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (double)disconnectTimeout;
- (void)setDisconnectTimeout:(double)arg1;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (BOOL)isAvailable;
- (BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (void)denyConnectionFromPeer:(id)arg1;
- (BOOL)isBusy;
- (void)setWifiEnabled:(BOOL)arg1;
- (int)sessionMode;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3;
- (void)setBusy:(BOOL)arg1;
- (id)peersWithConnectionState:(int)arg1;
- (void)setAvailable:(BOOL)arg1;
- (BOOL)isPeerBusy:(id)arg1;
- (id)displayNameForPeer:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)peerID;
- (id)displayName;
- (id)delegate;
- (id)sessionID;
- (id)connection;
- (id)description;
- (void)dealloc;

@end
