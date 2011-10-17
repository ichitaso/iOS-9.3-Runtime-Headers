/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSObject<GKTableViewControllerDataSource>, NSArray;

@interface GKTableViewControllerMultiDataSource : GKSectionArrayDataSource  {
    NSArray *_sectionDataSources;
    int _currentDataSourceIndex;
}

@property(retain) NSArray * sectionDataSources;
@property int currentDataSourceIndex;
@property(readonly) NSObject<GKTableViewControllerDataSource> * currentDataSource;
@property(retain) NSArray * headerSections;
@property(retain) NSArray * contentSections;
@property(retain) NSArray * footerSections;


- (void)setCurrentDataSourceIndex:(int)arg1;
- (void)setSectionDataSources:(id)arg1;
- (void)refreshCurrentDataSourceWithCompletionHandlerAndError:(id)arg1;
- (int)currentDataSourceIndex;
- (id)sectionDataSources;
- (id)currentMultiSections;
- (id)currentDataSource;
- (void)setVisibleSections:(id)arg1;
- (id)visibleSections;
- (id)contentSections;
- (void)tableView:(id)arg1 updateStatusViewAfterLoading:(id)arg2 context:(unsigned long long)arg3 withError:(id)arg4;
- (unsigned long long)contextForTableView:(id)arg1 updateStatusViewBeforeLoading:(id)arg2;
- (void)tableView:(id)arg1 prepareExpensiveContentAtIndexPaths:(id)arg2 withCompletionHandler:(id)arg3;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;

@end
