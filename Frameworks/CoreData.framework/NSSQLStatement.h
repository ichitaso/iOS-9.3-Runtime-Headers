/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSMutableArray, NSSQLEntity;

@interface NSSQLStatement : NSObject  {
    NSSQLEntity *_entity;
    NSMutableArray *_bindVariables;
    NSString *_sqlString;
    BOOL _isImpossibleCondition;
    NSSQLEntity *_fakeEntityForFetch;
}


- (void)setBindVariables:(id)arg1;
- (void)cacheFakeEntityForFetch:(id)arg1;
- (id)fakeEntityForFetch;
- (void)removeAllBindVariables;
- (id)bindVariables;
- (void)clearCaches;
- (BOOL)isImpossibleCondition;
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;
- (void)setSQLString:(id)arg1;
- (id)initWithEntity:(id)arg1;
- (BOOL)isReadOnly;
- (id)sqlString;
- (unsigned int)addBindVariable:(id)arg1;
- (void)setImpossibleCondition:(BOOL)arg1;
- (id)entity;
- (id)description;
- (void)dealloc;

@end
