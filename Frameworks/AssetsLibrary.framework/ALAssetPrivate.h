/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class PLPhotoLibrary, ALAssetsLibrary, PLManagedAsset;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {
    ALAssetsLibrary *_library;
    BOOL _isValid;
    PLManagedAsset *_photo;
    PLPhotoLibrary *_photoLibrary;
}

@property ALAssetsLibrary * library;
@property BOOL isValid;
@property(retain) PLManagedAsset * photo;
@property(retain) PLPhotoLibrary * _photoLibrary;


- (id)library;
- (void)setLibrary:(id)arg1;
- (void)setPhoto:(id)arg1;
- (BOOL)isValid;
- (void)set_photoLibrary:(id)arg1;
- (void)libraryDidChange;
- (void)libraryWillDisappear;
- (id)_photoLibrary;
- (void)setIsValid:(BOOL)arg1;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (void)_performBlockAndWait:(id)arg1;
- (id)photo;
- (void)dealloc;

@end
