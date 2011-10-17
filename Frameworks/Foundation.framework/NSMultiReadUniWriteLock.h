/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (BOOL)lockForWritingBeforeDate:(id)arg1;
- (BOOL)tryLockForWriting;
- (void)lockForWriting;
- (BOOL)lockForReadingBeforeDate:(id)arg1;
- (BOOL)tryLockForReading;
- (void)lockForReading;
- (void)unlock;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
