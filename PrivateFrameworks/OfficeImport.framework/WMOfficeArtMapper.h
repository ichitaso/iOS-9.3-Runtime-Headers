/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDAContent;

@interface WMOfficeArtMapper : CMDrawableMapper  {
    BOOL mFloating;
    BOOL mIsMapped;
    BOOL mIsInsideGroup;
    WDAContent *mContent;
    unsigned int mCurrentPage;
}


- (id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2;
- (BOOL)isInsideGroup;
- (id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 origin:(struct CGPoint { float x1; float x2; })arg3 parent:(id)arg4;
- (void)setBoundingBox;
- (void)setWithClientData:(id)arg1 state:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (struct CGSize { float x1; float x2; })expandedSizeForTextBox:(id)arg1 withState:(id)arg2;
- (void)setIsInsideGroup:(BOOL)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)blipAtIndex:(unsigned int)arg1;
- (void)setCurrentPage:(unsigned int)arg1;

@end
