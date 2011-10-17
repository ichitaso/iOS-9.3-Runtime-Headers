/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADTextListStyle, NSMutableArray, OADTheme;

@interface PDSlideMaster : PDSlideBase  {
    NSMutableArray *mSlideLayouts;
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
}

@property(retain) NSMutableArray * slideLayouts;


- (id)theme;
- (void)setTheme:(id)arg1;
- (id)initWithDefaultsAndTheme:(id)arg1;
- (unsigned int)slideLayoutCount;
- (id)slideLayoutAtIndex:(unsigned int)arg1;
- (id)addSlideLayout;
- (id)slideLayoutOfType:(int)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setOtherTextStyle:(id)arg1;
- (void)addSlideLayout:(id)arg1;
- (id)otherTextStyle;
- (id)defaultTheme;
- (id)titleTextStyle;
- (id)bodyTextStyle;
- (void)setSlideLayouts:(id)arg1;
- (id)slideLayouts;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentSlideBase;
- (id)colorMap;
- (id)parentTextStyleForTables;
- (id)drawingTheme;
- (id)colorScheme;
- (id)fontScheme;
- (id)styleMatrix;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (void)doneWithContent;
- (id)init;
- (void)dealloc;

@end
