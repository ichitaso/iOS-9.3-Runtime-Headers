/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDSheetReference : EDReference  {
    int mSheetIndex;
}

+ (id)referenceWithSheetIndex:(int)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;

- (bool)isSheedIndexValid;
- (id)initWithSheetIndex:(int)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (BOOL)isEqualToTableReference:(id)arg1;
- (int)sheetIndex;
- (bool)fullyAdjacentToReference:(id)arg1;
- (void)unionWithReference:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)init;

@end
