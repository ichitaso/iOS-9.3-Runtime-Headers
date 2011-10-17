/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDStyle, EDString;

@interface EMCellTextMapper : CMMapper  {
    EDString *edString;
    EDStyle *edStyle;
}


- (void)mapVerticalTextAt:(id)arg1 withState:(id)arg2 width:(double)arg3 height:(double)arg4;
- (void)mapTextRunsAt:(id)arg1;
- (id)initWithEDString:(id)arg1 style:(id)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2 columnWidth:(double)arg3 height:(double)arg4 spreadLeft:(BOOL)arg5;
- (double)contentWidth;

@end
