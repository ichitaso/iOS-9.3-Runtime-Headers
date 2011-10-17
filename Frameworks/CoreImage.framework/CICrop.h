/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CICrop : CIFilter  {
    CIImage *inputImage;
    CIVector *inputRectangle;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputRectangle;

+ (id)customAttributes;

- (id)inputRectangle;
- (void)setInputRectangle:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;

@end
