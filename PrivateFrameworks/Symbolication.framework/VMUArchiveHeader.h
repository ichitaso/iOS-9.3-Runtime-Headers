/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMutableArray, NSString;

@interface VMUArchiveHeader : VMUHeader  {
    NSMutableArray *_headers;
    NSString *_path;
}

+ (id)archiveHeaderWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;

- (id)headers;
- (BOOL)isArchive;
- (id)initWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;
- (id)architecture;
- (id)description;
- (void)dealloc;

@end
