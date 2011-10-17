/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSArray, NSString, NSData, NSURL;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {
    NSURL *_serverID;
    NSString *_syncKey;
    NSData *_dataPayload;
}

@property(retain) NSURL * serverID;
@property(readonly) NSData * dataPayload;
@property(readonly) NSString * syncKey;
@property(readonly) NSArray * childrenOrder;


- (id)dataPayload;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (void)dealloc;
- (id)syncKey;
- (id)serverID;
- (void)setServerID:(id)arg1;

@end
