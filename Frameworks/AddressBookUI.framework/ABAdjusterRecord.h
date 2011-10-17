/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIScrollView, NSTimer;

@interface ABAdjusterRecord : NSObject  {
    UIScrollView *_scrollView;
    float _adjustment;
    BOOL _manuallyAdjusted;
    NSTimer *_delayedScrollTimer;
}

@property(retain) NSTimer * delayedScrollTimer;
@property BOOL manuallyAdjusted;
@property float adjustment;
@property(retain) UIScrollView * scrollView;

+ (id)recordWithScrollView:(id)arg1;

- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (void)setDelayedScrollTimer:(id)arg1;
- (id)delayedScrollTimer;
- (void)setAdjustment:(float)arg1;
- (void)setManuallyAdjusted:(BOOL)arg1;
- (float)adjustment;
- (void)cancelDelayedAdjustments;
- (BOOL)manuallyAdjusted;

@end
