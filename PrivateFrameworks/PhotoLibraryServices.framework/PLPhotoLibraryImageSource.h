/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryImageSource : PLImageSource  {
    int _imageFormat;
}

@property(readonly) int imageFormat;


- (unsigned short)sourceIdentifier;
- (id)newImageForAsset:(id)arg1 createMetadata:(id*)arg2;
- (id)initWithImageFormat:(int)arg1;
- (int)imageFormat;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;

@end
