/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, _UIBarButtonItemAppearanceStorage, NSDictionary, NSNumber;

@interface _UINavigationBarAppearanceStorage : NSObject  {
    UIImage *backgroundImage;
    UIImage *miniBackgroundImage;
    NSDictionary *textAttributes;
    NSNumber *titleVerticalAdjustment;
    NSNumber *miniTitleVerticalAdjustment;
    BOOL reversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
}

@property(retain) UIImage * backgroundImage;
@property(retain) UIImage * miniBackgroundImage;
@property(copy) NSDictionary * textAttributes;
@property(retain) NSNumber * titleVerticalAdjustment;
@property(retain) NSNumber * miniTitleVerticalAdjustment;
@property BOOL reversesShadowOffset;
@property(readonly) _UIBarButtonItemAppearanceStorage * barButtonAppearanceStorage;
@property(readonly) _UIBarButtonItemAppearanceStorage * _barButtonAppearanceStorage;


- (void)setReversesShadowOffset:(BOOL)arg1;
- (BOOL)reversesShadowOffset;
- (void)setMiniTitleVerticalAdjustment:(id)arg1;
- (id)miniTitleVerticalAdjustment;
- (void)setTitleVerticalAdjustment:(id)arg1;
- (id)titleVerticalAdjustment;
- (void)setTextAttributes:(id)arg1;
- (id)textAttributes;
- (void)setMiniBackgroundImage:(id)arg1;
- (id)miniBackgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (id)barButtonAppearanceStorage;
- (id)_barButtonAppearanceStorage;
- (void)dealloc;

@end
