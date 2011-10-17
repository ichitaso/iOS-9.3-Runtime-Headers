/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableArray;

@interface IUDetailedCellConfiguration : IUMediaEntityCellConfiguration  {
    NSMutableArray *_rentalAlternates;
    unsigned int _hideUnplayedIndicator : 1;
    unsigned int _rentalCloseToExpiring : 1;
}

@property BOOL hideUnplayedIndicator;

+ (float)minimumRowHeight;
+ (float)rowHeightForGlobalContext:(id)arg1;

- (int)_accessibilityUnplayedIndicatorStyle;
- (void)setHideUnplayedIndicator:(BOOL)arg1;
- (BOOL)reloadRentalPropertiesForStringIndex:(int)arg1;
- (BOOL)hideUnplayedIndicator;
- (id)backgroundColorForImageAtIndex:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })artworkSize;
- (id)initWithStringCount:(unsigned int)arg1 imageCount:(unsigned int)arg2;
- (void)reloadLayoutInformation;
- (void)reloadImages;

@end
