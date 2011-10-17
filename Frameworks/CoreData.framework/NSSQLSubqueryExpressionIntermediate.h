/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLEntity, NSSQLFetchIntermediate, NSMutableString, NSMutableArray, NSSQLColumn, NSExpression, NSString;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate  {
    NSExpression *_trailingKeypath;
    NSExpression *_variableExpression;
    NSSQLFetchIntermediate *_fetchIntermediate;
    NSSQLEntity *_selectFromEntity;
    NSMutableString *_selectFromCorrelationTarget;
    NSString *_selectEntityAlias;
    NSSQLEntity *_governingEntityForVariable;
    NSSQLColumn *_variableColumn;
    NSString *_variableAlias;
    NSSQLColumn *_targetColumn;
    NSString *_targetAlias;
    NSMutableArray *_keypathsToPromote;
    BOOL _useDistinct;
    BOOL _isCount;
    BOOL _hasTrailingFunction;
    BOOL _onlyTrailIsCount;
    BOOL _subqueryHasTruePredicate;
}


- (BOOL)_isKeypathScopedToSubquery:(id)arg1;
- (void)_setVariableColumn:(id)arg1;
- (void)_createCollectionJoinsForFetchInContext:(id)arg1;
- (void)_createSelectClauseInFetchWithContext:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3;
- (void)selectDistinct;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;

@end
