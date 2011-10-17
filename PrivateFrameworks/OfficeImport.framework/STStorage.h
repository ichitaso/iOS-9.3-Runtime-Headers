/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STStorage : STSStgObject  {
    struct _Storage { } *m_pCStorage;
}


- (id)openStream:(id)arg1 withMode:(int)arg2;
- (id)openStorage:(id)arg1 withMode:(int)arg2;
- (id)getInfo;
- (id)getChildrenInfo;
- (int)getChildType:(id)arg1;
- (void)setClass:(struct { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })arg1;
- (id)initWithCStorage:(struct _Storage { }*)arg1;
- (void)close;
- (id)init;
- (void)dealloc;

@end
