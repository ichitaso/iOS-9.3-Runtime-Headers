/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImageView, UILabel, IUCircleProgressView, CALayer, IUStaticReflectionTitleView;

@interface IUStaticReflectionImageView : IUGridImageView  {
    CALayer *_dimmerLayer;
    BOOL _downloadable;
    UIImageView *_downloadableImageView;
    BOOL _embossedProgressIndicatorVisible;
    UILabel *_embossedTitleLabel;
    BOOL _hidingTitles;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageSubRect;
    UIImageView *_imageView;
    BOOL _opaque;
    float _progress;
    IUCircleProgressView *_progressView;
    UIImageView *_reflectionView;
    float _reflectionDistance;
    UIImageView *_shineImageView;
    IUStaticReflectionTitleView *_titleBlurView;
    int _titleStyle;
    IUStaticReflectionTitleView *_titleView;
}

@property BOOL reflectionHidden;
@property float reflectionDistance;
@property int titleStyle;
@property(getter=isOpaque) BOOL opaque;
@property float progress;
@property(getter=isEmbossedProgressIndicatorVisible) BOOL embossedProgressIndicatorVisible;


- (float)progress;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)image;
- (void)setProgress:(float)arg1;
- (BOOL)isOpaque;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setOpaque:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEmbossedProgressIndicatorVisible;
- (float)reflectionDistance;
- (BOOL)reflectionHidden;
- (void)_removeTitleViews;
- (void)_createTitleViews;
- (void)setReflectionHidden:(BOOL)arg1;
- (void)setEmbossedProgressIndicatorVisible:(BOOL)arg1;
- (void)setReflectionDistance:(float)arg1;
- (void)setImage:(id)arg1 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageSubRect;
- (void)setTitleHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTitleStyle:(int)arg1;
- (int)titleStyle;
- (void)setDownloadable:(BOOL)arg1;
- (void)dealloc;
- (BOOL)isDownloadable;

@end
