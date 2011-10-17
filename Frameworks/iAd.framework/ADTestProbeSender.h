/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADXPCConnection;

@interface ADTestProbeSender : NSObject <ADXPCConnectionDelegate> {
    ADXPCConnection *_connection;
    struct dispatch_queue_s { } *_dispatchQueue;
}

@property(retain) ADXPCConnection * connection;
@property struct dispatch_queue_s { }* dispatchQueue;


- (void)fireTestProbe:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)setDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)dispatchQueue;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void)_setupConnection;
- (id)init;

@end
