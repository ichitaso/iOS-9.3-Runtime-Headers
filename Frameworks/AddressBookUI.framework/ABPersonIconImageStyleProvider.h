/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonIconImageView, ABPersonImageView;

@interface ABPersonIconImageStyleProvider : ABStyleProvider  {
    ABPersonImageView *_imageView;
    ABPersonIconImageView *_iconImageView;
}


- (void)dealloc;
- (void)clearWeakReferencesToObject:(id)arg1;
- (id)initWithIconImageView:(id)arg1 imageView:(id)arg2;
- (void)_clearAsStyleProvider;
- (BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;
- (id)cardPlaceholderPersonImage;
- (id)cardPlaceholderCompanyImage;
- (id)cardPhotoOverlayImage;
- (id)cardPhotoMaskImage;

@end
