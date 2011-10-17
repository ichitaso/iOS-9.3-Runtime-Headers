/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString, NSData;

@interface FTRelayCancelMessage : FTFaceTimeMessage <NSCopying> {
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSNumber *_reason;
    NSData *_relayConnectionID;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSString * peerID;
@property(copy) NSData * peerPushToken;
@property(copy) NSNumber * relayType;
@property(copy) NSNumber * reason;
@property(copy) NSData * relayConnectionID;
@property(copy) NSData * selfRelayIP;
@property(copy) NSNumber * selfRelayPort;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * peerRelayPort;


- (id)messageBody;
- (void)setReason:(id)arg1;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (id)reason;
- (void)setRelayConnectionID:(id)arg1;
- (id)relayConnectionID;
- (id)peerRelayPort;
- (id)peerRelayIP;
- (id)selfRelayPort;
- (id)selfRelayIP;
- (id)relayType;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerRelayPort:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setRelayType:(id)arg1;
- (id)peerPushToken;
- (id)requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)bagKey;

@end
