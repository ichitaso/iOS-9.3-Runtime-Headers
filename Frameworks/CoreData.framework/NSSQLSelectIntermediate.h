/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, NSSQLEntity;

@interface NSSQLSelectIntermediate : NSSQLIntermediate  {
    NSSQLEntity *_entity;
    NSString *_entityAlias;
    NSString *_correlationTarget;
    NSArray *_fetchColumns;
    BOOL _useDistinct;
    NSString *_columnAlias;
    BOOL _isCount;
}


- (id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (void)setColumnAlias:(id)arg1;
- (void)setFetchEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (BOOL)onlyFetchesAggregates;
- (void)setFetchColumns:(id)arg1;
- (void)setUseDistinct:(BOOL)arg1;
- (void)setIsCount:(BOOL)arg1;
- (BOOL)isSelectTargetScoped;
- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;

@end
