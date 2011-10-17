/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAggregateExpression : NSExpression  {
    id _collection;
}


- (id)initWithCollection:(id)arg1;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)constantValue;
- (id)collection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
