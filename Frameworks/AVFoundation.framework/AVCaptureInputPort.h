/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInput, NSString, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject  {
    AVCaptureInputPortInternal *_internal;
}

@property(readonly) AVCaptureInput * input;
@property(readonly) NSString * mediaType;
@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(getter=isEnabled) BOOL enabled;

+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;

- (void)setOwner:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)mediaType;
- (id)description;
- (id)input;
- (id)init;
- (void)dealloc;

@end
