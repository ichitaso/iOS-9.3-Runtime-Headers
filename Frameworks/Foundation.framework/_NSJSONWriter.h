/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSOutputStream;

@interface _NSJSONWriter : NSObject  {
    NSOutputStream *outputStream;
    int kind;
    char *dataBuffer;
    unsigned int dataBufferLen;
    unsigned int dataLen;
    BOOL freeDataBuffer;
    char *tempBuffer;
    unsigned int tempBufferLen;
    int totalDataWritten;
}


- (void)finalize;
- (int)appendString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (int)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
- (id)dataWithRootObject:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)resizeTemporaryBuffer:(unsigned long)arg1;
- (id)init;
- (void)dealloc;

@end
