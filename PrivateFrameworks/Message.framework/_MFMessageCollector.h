/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray *messages;
}


- (void)newMessagesAvailable:(id)arg1;
- (id)messages;
- (id)copyMessages;
- (BOOL)shouldCancel;
- (id)init;
- (void)dealloc;

@end
