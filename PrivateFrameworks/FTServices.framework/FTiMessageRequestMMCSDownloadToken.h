/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSData;

@interface FTiMessageRequestMMCSDownloadToken : FTiMessageMessage <NSCopying> {
    NSString *_owner;
    NSString *_responseAuthToken;
    NSData *_signature;
    NSString *_responseRequestorID;
}

@property(copy) NSString * owner;
@property(copy) NSData * signature;
@property(copy) NSString * responseAuthToken;
@property(copy) NSString * responseRequestorID;


- (id)messageBody;
- (int)command;
- (id)owner;
- (id)signature;
- (void)setSignature:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setResponseRequestorID:(id)arg1;
- (id)responseRequestorID;
- (void)setResponseAuthToken:(id)arg1;
- (id)responseAuthToken;
- (void)handleResponseDictionary:(id)arg1;
- (int)responseCommand;
- (id)requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
