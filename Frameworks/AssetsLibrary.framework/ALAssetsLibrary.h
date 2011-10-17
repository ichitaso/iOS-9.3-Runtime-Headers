/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsLibraryPrivate;

@interface ALAssetsLibrary : NSObject  {
    id _internal;
}

@property(retain) ALAssetsLibraryPrivate * internal;

+ (id)_library;

- (void)writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (id)internal;
- (void)setInternal:(id)arg1;
- (void)assetForURL:(id)arg1 resultBlock:(id)arg2 failureBlock:(id)arg3;
- (BOOL)isValid;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (void)addAssetsGroupAlbumWithName:(id)arg1 resultBlock:(id)arg2 failureBlock:(id)arg3;
- (void)groupForURL:(id)arg1 resultBlock:(id)arg2 failureBlock:(id)arg3;
- (BOOL)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)arg1;
- (void)writeVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 orientation:(int)arg2 completionBlock:(id)arg3;
- (void)enumerateGroupsWithTypes:(unsigned int)arg1 usingBlock:(id)arg2 failureBlock:(id)arg3;
- (id)_copyGroupForURL:(id)arg1;
- (id)publicErrorFromPrivateError:(id)arg1;
- (void)_addGroupForAlbum:(struct NSObject { Class x1; }*)arg1 ofType:(unsigned int)arg2 toArray:(id)arg3;
- (BOOL)_libraryIsAvailable;
- (void)photoLibraryDidChange:(id)arg1;
- (id)publicErrorForPrivateDomain:(id)arg1 withPrivateCode:(int)arg2;
- (void)_writeVideoAtPathToSavedPhotosAlbum:(id)arg1 internalProperties:(id)arg2 completionBlock:(id)arg3;
- (void)_writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 orientation:(int)arg2 imageData:(id)arg3 metadata:(id)arg4 internalProperties:(id)arg5 completionBlock:(id)arg6;
- (void)addAsset:(id)arg1;
- (void)_performBlockAndWait:(id)arg1;
- (id)init;
- (void)dealloc;

@end
