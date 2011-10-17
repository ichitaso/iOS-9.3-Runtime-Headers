/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileKeyList;

@interface GEOTileRemoteRequest : NSObject  {
    GEOTileKeyList *_list;
    struct __CFRunLoop { } *_queue;
    BOOL _movedToNetwork;
}

@property(readonly) GEOTileKeyList * list;
@property(readonly) struct __CFRunLoop { }* queue;
@property BOOL movedToNetwork;


- (id)initWithList:(id)arg1 queue:(struct __CFRunLoop { }*)arg2;
- (void)setMovedToNetwork:(BOOL)arg1;
- (BOOL)movedToNetwork;
- (id)list;
- (void)dealloc;
- (struct __CFRunLoop { }*)queue;

@end
