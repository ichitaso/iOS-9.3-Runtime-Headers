/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface _MKTransitIconCacheItem : NSObject <MKCacheableObject> {
    id _key;
    id _object;
    unsigned int _accessTime;
    NSString *_filePath;
    BOOL _canPurge;
}

@property(readonly) id object;
@property(readonly) NSString * filePath;
@property(readonly) BOOL canPurge;
@property(readonly) id _mapkit_cache_key;
@property unsigned int _mapkit_cache_accessTime;


- (id)object;
- (void)set_mapkit_cache_accessTime:(unsigned int)arg1;
- (unsigned int)_mapkit_cache_accessTime;
- (id)_mapkit_cache_key;
- (BOOL)canPurge;
- (id)initWithFilePath:(id)arg1 key:(id)arg2 canPurge:(BOOL)arg3;
- (id)description;
- (void)dealloc;
- (id)filePath;

@end
