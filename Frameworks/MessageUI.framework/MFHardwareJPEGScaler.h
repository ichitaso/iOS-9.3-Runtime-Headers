/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSData;

@interface MFHardwareJPEGScaler : NSObject  {
    struct __IOSurface { } *_ioSurfaceRef;
    NSData *_imageData;
    struct __CFDictionary { } *_imageProperties;
    BOOL _canHardwareScaleImage;
}


- (BOOL)_isJPEGImage:(struct CGImageSource { }*)arg1;
- (BOOL)_decodeImageToIOSurface;
- (BOOL)scaleImageToFitLargestDimension:(id)arg1 dataConsumer:(id)arg2;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource { }*)arg2;
- (void)dealloc;

@end
