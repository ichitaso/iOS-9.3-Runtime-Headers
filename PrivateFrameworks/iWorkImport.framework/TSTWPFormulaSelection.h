/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWPFormulaSelection : TSTWPSelection {
    unsigned int mActiveTokenCharIndex;
}

@property (nonatomic) unsigned int activeTokenCharIndex;

+ (Class)archivedSelectionClass;

- (unsigned int)activeTokenCharIndex;
- (int)compare:(id)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned int)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned int)arg7 activeTokenCharIndex:(unsigned int)arg8;
- (BOOL)isEqual:(id)arg1;
- (void)setActiveTokenCharIndex:(unsigned int)arg1;

@end
