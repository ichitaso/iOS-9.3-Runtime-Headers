/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardEmojiScrollView, UIButton, UIKeyboardEmojiFactory, UIKeyboardEmojiCategoryController, UIKeyboardEmojiRecentsController, UIKeyboardEmojiCategoriesControl;

@interface UIKeyboardLayoutEmoji : UIKeyboardLayout <UIKeyboardEmojiController> {
    UIKeyboardEmojiScrollView *_emojiView;
    UIKeyboardEmojiCategoriesControl *_categoriesView;
    UIButton *_globeButton;
    UIButton *_deleteButton;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _globeFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _deleteFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _categoryFrame;
    struct CGPoint { 
        float x; 
        float y; 
    } _initialDragPoint;
    UIKeyboardEmojiFactory *_emojiFactory;
    UIKeyboardEmojiRecentsController *_recentsController;
    UIKeyboardEmojiCategoryController *_categoryController;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } globeFrame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } deleteFrame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } categoryFrame;

+ (void)emojiKeyboardPreferencesChanged;
+ (id)localizedStringForKey:(id)arg1;
+ (BOOL)isLandscape;
+ (id)emojiLayout;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })categoryFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deleteFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })globeFrame;
- (id)emojiForPrivateCodePoint:(id)arg1;
- (void)emojiSelected:(id)arg1;
- (void)setKeyboardDefault;
- (id)recents;
- (void)handleFrameChangeNotification:(id)arg1;
- (id)defaultsDictionary;
- (void)categoryChangedNoSounds;
- (void)categoryReselected;
- (void)categoryChanged;
- (void)globeLongPressGestureRecognized:(id)arg1;
- (void)globeDown;
- (void)globeSwitch;
- (void)deleteEnd;
- (void)deleteBegin;
- (BOOL)setDefaultsDictionary:(id)arg1;
- (SEL)handlerForNotification:(id)arg1;
- (void)showKeyboardType:(int)arg1 withAppearance:(int)arg2;
- (void)clearUnusedObjects;
- (BOOL)shouldShowIndicator;
- (void)deactivateActiveKeys;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
