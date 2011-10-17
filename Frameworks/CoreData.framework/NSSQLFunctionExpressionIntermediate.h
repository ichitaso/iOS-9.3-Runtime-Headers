/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate  {
}

+ (BOOL)functionIsAcceptableAsAggregate:(id)arg1;

- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)arg1 forAttribute:(id)arg2 inContext:(id)arg3;
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)arg1 forExpression:(id)arg2 inContext:(id)arg3;
- (id)_generateArgumentStringForCollection:(id)arg1 inContext:(id)arg2;
- (id)_generateSelectForAggregateStringWithSymbol:(id)arg1 argument:(id)arg2 inContext:(id)arg3;
- (id)generateType1SQLString:(id)arg1 inContext:(id)arg2;
- (id)generateType2SQLString:(id)arg1 inContext:(id)arg2;
- (id)generateType3SQLString:(id)arg1 keypathOnly:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateType4SQLForSymbol:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForCountInContext:(id)arg1;
- (id)_generateMathStringWithSymbol:(id)arg1 inContext:(id)arg2;
- (id)_generateDistinctStringInContext:(id)arg1;
- (BOOL)isFunctionScoped;
- (id)generateSQLStringInContext:(id)arg1;

@end
