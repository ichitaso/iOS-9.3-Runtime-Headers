/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSNumber, NSMutableDictionary, UIImage;

@interface _UISegmentedControlAppearanceStorage : NSObject  {
    UIImage *_optionsBackgroundImage;
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_miniBackgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_miniDividerImages;
    NSMutableDictionary *_textAttributesForState;
    NSNumber *_backgroundPositionAdjustmentInBar;
    NSNumber *_backgroundPositionAdjustmentInMiniBar;
    NSMutableDictionary *_contentPositionOffsets;
    NSMutableDictionary *_miniContentPositionOffsets;
    BOOL _legacyDontHighlight;
    BOOL _legacySuppressOptionsBackground;
    BOOL _isTiled;
    unsigned int _leftCapWidth;
    unsigned int _rightCapWidth;
}

@property(retain) UIImage * optionsBackgroundImage;


- (void)setOptionsBackgroundImage:(id)arg1;
- (id)optionsBackgroundImage;
- (void)setIsTiled:(BOOL)arg1 leftCapWidth:(unsigned int)arg2 rightCapWidth:(unsigned int)arg3;
- (void)setDetail:(struct { id x1; float x2; float x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_4_1_6; } x4; struct { id x_5_1_1; id x_5_1_2; id x_5_1_3; id x_5_1_4; id x_5_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_5_1_6; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_6_1_6; } x6; struct { id x_7_1_1; id x_7_1_2; id x_7_1_3; id x_7_1_4; id x_7_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_7_1_6; } x7; BOOL x8; }*)arg1;
- (BOOL)legacySuppressOptionsBackground;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)anyDividerImage;
- (id)contentPositionOffsetForSegment:(int)arg1 inMiniBar:(BOOL)arg2;
- (id)backgroundPositionAdjustmentInMiniBar:(BOOL)arg1;
- (void)setBackgroundPositionAdjustment:(id)arg1 inMiniBar:(BOOL)arg2;
- (BOOL)wantsTrackingSuppressed;
- (void)takeTextAttributesFrom:(struct { id x1; id x2; id x3; id x4; id x5; struct CGSize { float x_6_1_1; float x_6_1_2; } x6; })arg1 forState:(unsigned int)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 isMini:(BOOL)arg4;
- (void)setContentPositionOffset:(id)arg1 forSegment:(int)arg2 inMiniBar:(BOOL)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 isMini:(BOOL)arg3 withFallback:(BOOL)arg4;
- (id)anyDividerImageForMini:(BOOL)arg1;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2 withFallback:(BOOL)arg3;
- (id)contentPositionOffsetForSegment:(int)arg1 inMiniBar:(BOOL)arg2 noFallback:(BOOL)arg3;
- (void)setTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)textAttributesForState:(unsigned int)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end
