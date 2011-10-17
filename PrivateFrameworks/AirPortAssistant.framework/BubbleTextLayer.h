/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSMutableArray, CALayer;

@interface BubbleTextLayer : CALayer  {
    struct CGSize { 
        float width; 
        float height; 
    } _textSize;
    struct CGSize { 
        float width; 
        float height; 
    } _imageLayerSize;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    struct CGSize { 
        float width; 
        float height; 
    } _bubbleSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _textFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bubbleFrame;
    struct CGSize { 
        float width; 
        float height; 
    } _boundsSizeConstraint;
    void *_font;
    struct __CTFont { } *_curCTFont;
    struct __CTLine { } *_theLine;
    float _descent;
    float _ascent;
    float _leading;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _fontBounds;
    NSMutableArray *_annotationPoints;
    struct CGColor { } *_generalShadowColor;
    struct CGColor { } *_whiteShadowColor;
    CALayer *_imageLayer;
}

@property(retain) struct CGImage { }* image;
@property(retain) struct CGColor { }* fillColor;
@property(retain) struct CGColor { }* fillColor2;
@property(retain) struct CGColor { }* frameColor;
@property(retain) struct CGColor { }* foregroundColor;
@property float frameWidth;
@property(retain) void* font;
@property float fontSize;
@property(retain) id string;
@property(readonly) float textBaselineOffset;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } textFrame;
@property struct CGSize { float x1; float x2; } boundsSizeConstraint;

+ (BOOL)needsDisplayForKey:(id)arg1;

- (void)layoutSublayers;
- (float)textBaselineOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (void)addAnnotationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })calculatePreferredSubframeSizesForLayerSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isAnnotationBubble;
- (struct CGSize { float x1; float x2; })textPreferredFrameSizeForLayerSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })getImagePreferredSize;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGImage { }*)image;
- (void*)font;
- (void)setFont:(void*)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (id)init;
- (void)dealloc;

@end
