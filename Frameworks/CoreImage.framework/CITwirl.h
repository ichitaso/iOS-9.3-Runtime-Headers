/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CITwirl : CIFilter  {
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputAmount;
    NSNumber *inputRotation;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputPoint;
@property(retain) NSNumber * inputAmount;
@property(retain) NSNumber * inputRotation;

+ (id)customAttributes;

- (id)inputRotation;
- (void)setInputRotation:(id)arg1;
- (id)inputPoint;
- (id)inputAmount;
- (void)setInputAmount:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputPoint:(id)arg1;

@end
