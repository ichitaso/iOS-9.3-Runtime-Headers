/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : NSObject  {
    NSMutableArray *_dataBuffers;
    unsigned int _offsetIntoFirstData;
    long long _curOffset;
    int _codePage;
    NSString *_parseErrorReason;
    BOOL _moreDataExpected;
    int _dataGeneration;
    long long _expectedTotalBytesCount;
    long long _currentBytesReceivedCount;
    unsigned int _lastFoundBufferWithoutLineEnding;
    unsigned int _numTokensInBuffersWithoutLineEndings;
    BOOL _lastLookedAtBufferHadStringEndPrefix;
    BOOL _keepPreviousData;
    NSMutableArray *_bypassedDataBuffers;
    NSFileHandle *_logFileHandle;
    NSString *_logFilePath;
    int _streamingState;
}

@property int streamingState;
@property BOOL keepPreviousData;
@property(readonly) long long curOffset;
@property int codePage;
@property(retain) NSString * parseErrorReason;
@property BOOL moreDataExpected;
@property int dataGeneration;
@property long long expectedTotalBytesCount;
@property(readonly) long long currentBytesReceivedCount;

+ (struct dispatch_queue_s { }*)_logQueue;

- (id)init;
- (void)dealloc;
- (void)setKeepPreviousData:(BOOL)arg1;
- (BOOL)keepPreviousData;
- (void)setExpectedTotalBytesCount:(long long)arg1;
- (void)setDataGeneration:(int)arg1;
- (void)setMoreDataExpected:(BOOL)arg1;
- (BOOL)moreDataExpected;
- (void)invalidateBuffers;
- (void)resetToZeroOffset;
- (void)setShouldLog:(BOOL)arg1;
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)arg1;
- (int)numberOfBytesUntilStringEnd:(char *)arg1 searchStringLength:(int)arg2 acceptingBufferBits:(BOOL)arg3;
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned int)arg1;
- (void)_logBlobChunk:(id)arg1;
- (void)_moveLogFileContentsAtPath:(id)arg1;
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int*)arg1;
- (void)setStreamingState:(int)arg1;
- (int)streamingState;
- (long long)expectedTotalBytesCount;
- (long long)currentBytesReceivedCount;
- (int)dataGeneration;
- (BOOL)advanceOffsetByAmount:(unsigned int)arg1 retainLastToken:(BOOL)arg2;
- (long)goodSizeForBuffer;
- (id)bufferWithAllData;
- (void)addData:(id)arg1;
- (void)setCodePage:(int)arg1;
- (BOOL)hasNumberOfTokensRemaining:(unsigned int)arg1;
- (int)numTokensForNextOpaqueData;
- (int)numTokensForNextString;
- (unsigned char)nextByte;
- (int)codePage;
- (id)parseErrorReason;
- (char *)bufferForLength:(unsigned int)arg1 shouldFree:(BOOL*)arg2;
- (void)setParseErrorReason:(id)arg1;
- (long long)curOffset;
- (BOOL)advanceOffsetByAmount:(unsigned int)arg1;
- (unsigned char)currentByte;

@end
