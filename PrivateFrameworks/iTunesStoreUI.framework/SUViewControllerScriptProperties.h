/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIColor, SUGradient;

@interface SUViewControllerScriptProperties : NSObject <NSCoding, NSCopying> {
    UIColor *_backgroundColor;
    BOOL _doubleTapEnabled;
    BOOL _embedded;
    BOOL _inputViewObeysDOMFocus;
    int _loadingIndicatorStyle;
    UIColor *_loadingTextColor;
    UIColor *_loadingTextShadowColor;
    SUGradient *_placeholderBackgroundGradient;
    BOOL _scrollingDisabled;
    BOOL _shouldLoadProgressively;
    BOOL _shouldShowFormAccessory;
    BOOL _showsBackgroundShadow;
    UIColor *_topExtensionColor;
}

@property(retain) UIColor * backgroundColor;
@property BOOL inputViewObeysDOMFocus;
@property(getter=isDoubleTapEnabled) BOOL doubleTapEnabled;
@property(getter=isScrollingDisabled) BOOL scrollingDisabled;
@property(getter=isEmbedded) BOOL embedded;
@property int loadingIndicatorStyle;
@property(retain) UIColor * loadingTextColor;
@property(retain) UIColor * loadingTextShadowColor;
@property(retain) SUGradient * placeholderBackgroundGradient;
@property BOOL shouldLoadProgressively;
@property BOOL shouldShowFormAccessory;
@property BOOL showsBackgroundShadow;
@property(retain) UIColor * topExtensionColor;


- (void)setInputViewObeysDOMFocus:(BOOL)arg1;
- (BOOL)inputViewObeysDOMFocus;
- (BOOL)isDoubleTapEnabled;
- (void)setDoubleTapEnabled:(BOOL)arg1;
- (id)backgroundColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setEmbedded:(BOOL)arg1;
- (BOOL)shouldShowFormAccessory;
- (BOOL)shouldLoadProgressively;
- (void)setShouldLoadProgressively:(BOOL)arg1;
- (void)setShouldShowFormAccessory:(BOOL)arg1;
- (id)topExtensionColor;
- (BOOL)showsBackgroundShadow;
- (BOOL)isScrollingDisabled;
- (void)setTopExtensionColor:(id)arg1;
- (void)setShowsBackgroundShadow:(BOOL)arg1;
- (void)setScrollingDisabled:(BOOL)arg1;
- (BOOL)isEmbedded;
- (id)loadingTextShadowColor;
- (id)loadingTextColor;
- (int)loadingIndicatorStyle;
- (id)placeholderBackgroundGradient;
- (void)setLoadingTextShadowColor:(id)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)setLoadingIndicatorStyle:(int)arg1;
- (void)setPlaceholderBackgroundGradient:(id)arg1;

@end
