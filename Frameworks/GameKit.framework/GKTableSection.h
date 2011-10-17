/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSArray;

@interface GKTableSection : GKTopCapListTableSection  {
    NSArray *_visibleItems;
    NSString *_title;
    NSString *_secondaryTitle;
    NSString *_abbreviatedTitle;
    BOOL _usesTopCapTitle;
    int _loadingState;
}

@property(retain) NSArray * visibleItems;
@property BOOL usesTopCapTitle;
@property(retain) NSString * title;
@property(retain) NSString * secondaryTitle;
@property(retain) NSString * abbreviatedTitle;
@property int loadingState;


- (int)loadingState;
- (void)setUsesTopCapTitle:(BOOL)arg1;
- (void)setAbbreviatedTitle:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (id)abbreviatedTitle;
- (id)secondaryTitle;
- (BOOL)usesTopCapTitle;
- (id)currentSectionHeaderAbbreviatedTitleInTableView:(id)arg1;
- (int)sectionHeaderRowCountInTableView:(id)arg1;
- (void)setLoadingState:(int)arg1;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (id)sectionHeaderTitleInTableView:(id)arg1;
- (id)currentSectionHeaderSecondaryTitleInTableView:(id)arg1;
- (id)currentSectionHeaderTitleInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (id)visibleItems;
- (void)setVisibleItems:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)init;
- (void)dealloc;

@end
