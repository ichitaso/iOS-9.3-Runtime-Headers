/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSString, NSInputStream, NSOutputStream, EAAccessory;

@interface EASession : NSObject  {
    EAAccessory *_accessory;
    unsigned int _sessionID;
    NSString *_protocolString;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    BOOL _openCompleted;
}

@property(readonly) EAAccessory * accessory;
@property(readonly) NSString * protocolString;
@property(readonly) NSInputStream * inputStream;
@property(readonly) NSOutputStream * outputStream;


- (id)inputStream;
- (id)outputStream;
- (id)accessory;
- (void)setOpenCompleted:(BOOL)arg1;
- (BOOL)isOpenCompleted;
- (void)_endStreams;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (id)_shortDescription;
- (void)_streamClosed;
- (unsigned int)_sessionID;
- (id)protocolString;
- (id)description;
- (id)init;
- (void)dealloc;

@end
