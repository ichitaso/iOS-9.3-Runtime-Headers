/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSData;

@interface MCEmailAccountPayloadBase : MCPayload  {
    BOOL _preventMove;
    BOOL _preventAppSheet;
    BOOL _SMIMEEnabled;
    BOOL _SMIMEEncryptionEnabled;
    NSString *_SMIMESigningIdentityUUID;
    NSString *_SMIMEEncryptionIdentityUUID;
    NSData *_SMIMESigningIdentityPersistentID;
    NSData *_SMIMEEncryptionIdentityPersistentID;
}

@property(retain) NSData * SMIMEEncryptionIdentityPersistentID;
@property(retain) NSData * SMIMESigningIdentityPersistentID;
@property(readonly) NSString * SMIMEEncryptionIdentityUUID;
@property(readonly) NSString * SMIMESigningIdentityUUID;
@property(readonly) BOOL SMIMEEncryptionEnabled;
@property(readonly) BOOL SMIMEEnabled;
@property(readonly) BOOL preventAppSheet;
@property(readonly) BOOL preventMove;


- (id)SMIMEEncryptionIdentityPersistentID;
- (void)setSMIMEEncryptionIdentityPersistentID:(id)arg1;
- (id)SMIMESigningIdentityPersistentID;
- (void)setSMIMESigningIdentityPersistentID:(id)arg1;
- (id)SMIMEEncryptionIdentityUUID;
- (id)SMIMESigningIdentityUUID;
- (BOOL)SMIMEEncryptionEnabled;
- (BOOL)SMIMEEnabled;
- (BOOL)preventAppSheet;
- (BOOL)preventMove;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (id)description;
- (void)dealloc;

@end
