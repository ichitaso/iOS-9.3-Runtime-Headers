/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIImageView, UILabel, UIView, NSError, UITextView;

@interface QLGenericDisplayBundle : QLDisplayBundle  {
    UIView *_containerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UITextView *_subtitleLabel;
    NSError *_error;
}

@property(retain) NSError * error;


- (void)setError:(id)arg1;
- (void)_loadPreviewItemInfos;
- (void)_showLoadingProgress:(BOOL)arg1;
- (void)loadWithHints:(id)arg1;
- (void)prepareForSlidingIn:(id)arg1;
- (void)_relayout;
- (void)loadView;
- (id)error;

@end
