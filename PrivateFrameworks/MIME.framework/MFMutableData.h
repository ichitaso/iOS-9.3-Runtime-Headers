/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
    void *_bytes;
    NSUInteger _capacity;
    NSInteger _fd;
    BOOL _flush;
    NSUInteger _flushFrom;
    BOOL _immutable;
    NSUInteger _length;
    NSUInteger _mappedLength;
    char *_path;
    NSUInteger _threshold;
    BOOL _vm;
}

- (void)_flushToDisk:(NSUInteger)arg1 capacity:(NSUInteger)arg2;
- (id)_initImmutableWithFd:(NSInteger)arg1 path:(id)arg2;
- (void)_mapMutableData:(BOOL)arg1;
- (void)appendBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (void)appendData:(id)arg1;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithLength:(NSUInteger)arg1;
- (NSUInteger)length;
- (void)mf_makeImmutable;
- (const void*)mutableBytes;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setLength:(NSUInteger)arg1;
- (void)setMappingThreshold:(NSUInteger)arg1;
- (id)subdataWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;

@end