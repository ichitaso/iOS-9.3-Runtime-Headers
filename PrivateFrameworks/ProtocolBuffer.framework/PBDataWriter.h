/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSMutableData;

@interface PBDataWriter : NSObject  {
    NSMutableData *_data;
}


- (void)writeBigEndianFixed32:(unsigned int)arg1;
- (void)writeSfixed32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeProtoBuffer:(id)arg1;
- (void)writeInt8:(BOOL)arg1;
- (void)writeSint64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSint32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeInt64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)writeUint32:(unsigned int)arg1 forTag:(unsigned int)arg2;
- (void)writeUint64:(unsigned long long)arg1 forTag:(unsigned long long)arg2;
- (void)writeDouble:(double)arg1 forTag:(unsigned short)arg2;
- (id)data;
- (void)writeFixed32:(unsigned int)arg1 forTag:(unsigned short)arg2;
- (void)writeFloat:(float)arg1 forTag:(unsigned short)arg2;
- (void)writeBOOL:(BOOL)arg1 forTag:(unsigned short)arg2;
- (void)writeInt32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeString:(id)arg1 forTag:(unsigned short)arg2;
- (void)writeData:(id)arg1 forTag:(unsigned short)arg2;
- (BOOL)writeData:(id)arg1;
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeBigEndianShortThenString:(id)arg1;
- (void)writeBigEndianFixed16:(unsigned short)arg1;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (void)writeBareVarint:(long long)arg1;
- (id)init;
- (void)dealloc;

@end
