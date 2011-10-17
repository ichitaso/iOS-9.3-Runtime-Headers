/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSURL, NSString;

@interface SSItemMedia : NSObject  {
    int _duration;
    int _fullDuration;
    long long _mediaFileSize;
    NSString *_mediaKind;
    BOOL _protected;
    NSURL *_url;
}

@property(readonly) int durationInMilliseconds;
@property(copy) NSString * mediaKind;
@property(getter=isProtectedMedia,readonly) BOOL protectedMedia;
@property(readonly) NSURL * URL;
@property(readonly) int fullDurationInMilliseconds;
@property(readonly) long long mediaFileSize;


- (BOOL)isProtectedMedia;
- (void)setMediaKind:(id)arg1;
- (id)initWithStoreOfferDictionary:(id)arg1;
- (int)durationInMilliseconds;
- (id)URL;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)mediaKind;
- (int)fullDurationInMilliseconds;
- (long long)mediaFileSize;

@end
