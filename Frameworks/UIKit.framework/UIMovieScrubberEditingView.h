/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSArray;

@interface UIMovieScrubberEditingView : UIView  {
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
    NSArray *_activeImages;
    NSArray *_inactiveImages;
    unsigned int _isActive : 1;
    unsigned int _centerHandleEnabled : 1;
}

@property(getter=isEditing) BOOL editing;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rightHandleFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })leftHandleFrame;
- (float)_bounceValueForFraction:(float)arg1;
- (BOOL)pointInsideCenterHandle:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)pointInsideRightHandle:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)pointInsideLeftHandle:(struct CGPoint { float x1; float x2; })arg1;
- (int)handleForPoint:(struct CGPoint { float x1; float x2; })arg1 hitOffset:(float*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rightHandleBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })leftHandleBounds;
- (void)bounce;
- (void)setCenterHandleEnabled:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
