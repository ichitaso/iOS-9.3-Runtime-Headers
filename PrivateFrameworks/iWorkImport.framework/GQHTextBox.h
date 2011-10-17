/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTextBox : GQHParagraphStyle  {
}

+ (const char *)name;
+ (int)handleShapeText:(id)arg1 boundsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 floating:(BOOL)arg3 state:(id)arg4;
+ (int)outputInnerSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3;
+ (int)outputWrapSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3;
+ (void)outputSandbag:(id)arg1 state:(id)arg2;
+ (int)outputInnerSandbagsForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 drawable:(id)arg2 state:(id)arg3;
+ (int)outputWrapSandbagsForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4;
+ (BOOL)styleNeedsImageFillMapping:(id)arg1;
+ (void)mapLayout:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapScaledImageFill:(id)arg1 style:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
+ (BOOL)outputWrapSandbagsForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4 isPageFrame:(BOOL)arg5;
+ (void)createExternalWrapSandbagStyles:(id)arg1;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (int)handleLayoutStorage:(id)arg1 state:(id)arg2;


@end
