/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, NSString, UIView, NSSet, UIColor, UIToolbarButton;

@interface UIBarButtonItem : UIBarItem <NSCoding> {
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _landscapeImagePhoneInsets;
    float _width;
    UIView *_view;
    int _tag;
    id _appearanceStorage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int isMinibarView : 1; 
        unsigned int disableAutosizing : 1; 
        unsigned int selected : 1; 
        unsigned int imageHasEffects : 1; 
    } _barButtonItemFlags;
    float _toolbarCharge;
    float _minimumWidth;
    float _maximumWidth;
}

@property(getter=isEnabled) BOOL enabled;
@property(readonly) UIToolbarButton * _toolbarButton;
@property(getter=_miniImage,setter=_setMiniImage:,retain) UIImage * miniImage;
@property(getter=_miniImageInsets,setter=_setMiniImageInsets:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } miniImageInsets;
@property(readonly) BOOL isSystemItem;
@property(readonly) int systemItem;
@property BOOL selected;
@property(setter=_setImageHasEffects:) BOOL _imageHasEffects;
@property int style;
@property float width;
@property(copy) NSSet * possibleTitles;
@property(retain) UIView * customView;
@property SEL action;
@property id target;
@property(retain) UIColor * tintColor;
@property(readonly) BOOL isSystemItem;
@property(readonly) int systemItem;
@property BOOL selected;
@property(setter=_setToolbarCharge:) float _toolbarCharge;
@property(setter=_setMinimumWidth:) float _minimumWidth;
@property(setter=_setMaximumWidth:) float _maximumWidth;

+ (Class)classForNavigationButton;
+ (id)_appearanceProxyViewClasses;

- (void)_setWidth:(float)arg1;
- (void)_setImageHasEffects:(BOOL)arg1;
- (id)_toolbarButton;
- (void)_setMiniImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_miniImageInsets;
- (void)_setMiniImage:(id)arg1;
- (id)_miniImage;
- (void)_getToolbarEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg1 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 glowInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg3 forBarStyle:(int)arg4 landscape:(BOOL)arg5 alwaysBordered:(BOOL)arg6;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize { float x1; float x2; }*)arg1 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 landscape:(BOOL)arg3;
- (void)_getSystemItemStyle:(int*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(int)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8;
- (void)_setMaximumWidth:(float)arg1;
- (void)_setMinimumWidth:(float)arg1;
- (float)_toolbarCharge;
- (struct UIOffset { float x1; float x2; })backButtonTitlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (float)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (struct UIOffset { float x1; float x2; })titlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (float)backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (id)backButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)possibleTitles;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })landscapeImagePhoneInsets;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(int)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (void)setCustomView:(id)arg1;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)_setToolbarCharge:(float)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (BOOL)selected;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (id)customView;
- (void)_updateView;
- (BOOL)_imageHasEffects;
- (id)createViewForToolbar:(id)arg1;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)setPossibleTitles:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (float)_width;
- (void)setSelected:(BOOL)arg1;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (float)_maximumWidth;
- (float)_minimumWidth;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)scriptingID;
- (int)style;
- (id)image;
- (BOOL)_shouldBezelSystemButtonImage;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setStyle:(int)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)setIsMinibarView:(BOOL)arg1;
- (BOOL)isMinibarView;
- (id)landscapeImagePhone;
- (id)createViewForNavigationItem:(id)arg1;
- (BOOL)isCustomViewItem;
- (int)systemItem;
- (BOOL)isSystemItem;
- (id)title;
- (id)_appearanceStorage;
- (void)setAction:(SEL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (int)tag;
- (BOOL)isEnabled;
- (void)setTag:(int)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (id)nextResponder;
- (void)setTitle:(id)arg1;
- (id)window;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;
- (id)init;
- (void)dealloc;
- (void)showActionSheet:(id)arg1 animated:(BOOL)arg2;
- (void)configureFromScriptButton:(id)arg1;

@end
