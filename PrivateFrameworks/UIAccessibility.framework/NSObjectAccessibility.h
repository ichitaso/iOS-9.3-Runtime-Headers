/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface NSObjectAccessibility : NSObjectAccessibility_super  {
}

+ (void)_initializeSafeCategory;

- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (BOOL)accessibilityScrollUpPageSupported;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollRightPageSupported;
- (BOOL)accessibilityScrollLeftPageSupported;
- (id)accessibilityUserDefinedActivationPoint;
- (id)accessibilityUserDefinedIdentifier;
- (id)accessibilityUserDefinedLanguage;
- (id)isAccessibilityUserDefinedElement;
- (id)accessibilityUserDefinedTraits;
- (id)accessibilityUserDefinedFrame;
- (id)accessibilityUserDefinedHint;
- (id)accessibilityUserDefinedValue;
- (id)accessibilityUserDefinedLabel;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (BOOL)_accessibilityHandlePublicScroll:(int)arg1;
- (BOOL)_accessibilityScrollingEnabled;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityVisibleItemInList;
- (BOOL)_accessibilityIsScrollable;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)_accessibilityScrollPreviousPage;
- (BOOL)_accessibilityScrollNextPage;
- (void)_accessibilityScrollLeftPage;
- (void)_accessibilityScrollRightPage;
- (void)_accessibilityScrollUpPage;
- (void)_accessibilityScrollDownPage;
- (void)_accessibilityScrollToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_accessibilityScrollToVisible;

@end
