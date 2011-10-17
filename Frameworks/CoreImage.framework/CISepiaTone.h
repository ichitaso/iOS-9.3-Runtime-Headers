/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputIntensity;

+ (id)customAttributes;

- (id)inputIntensity;
- (id)_kernel;
- (void)setInputIntensity:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;
- (void)setDefaults;

@end
