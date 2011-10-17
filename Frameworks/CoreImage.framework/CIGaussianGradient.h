/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIColor, CIVector, NSNumber;

@interface CIGaussianGradient : CIFilter  {
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputRadius;
}

@property(retain) CIVector * inputCenter;
@property(retain) CIColor * inputColor0;
@property(retain) CIColor * inputColor1;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (id)inputColor1;
- (id)inputColor0;
- (void)setInputColor1:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (id)_kernel;
- (id)outputImage;
- (void)setDefaults;

@end
