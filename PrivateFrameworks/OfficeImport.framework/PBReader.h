/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PBReader : OCBReader  {
    struct PptObjectFactory { int (**x1)(); struct PptEshObjectFactory {} *x2; } *mPptObjectFactory;
}

+ (id)readFromFileName:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (id)readFromData:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (id)readerWithPptReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; boolx4; char *x5; unsigned int x6; struct __sFILE {} *x7; struct SsrwOORootStorage { struct _Storage {} *x_8_1_1; unsigned short x_8_1_2[36]; struct _RootStorage {} *x_8_1_3; } x8; struct SsrwOOStorage {} *x9; struct SsrwOOStorage {} *x10; struct SsrwOOStream {} *x11; struct SsrwOOStream {} *x12; int x13; boolx14; struct PptEshReader {} *x15; struct PptEshReader {} *x16; struct PptParserVisitor {} *x17; struct PptPersistDir {} *x18; struct EshHeader {} *x19; struct EshObject {} *x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; struct ChMap<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int> > { struct map<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_27_1_1; } x27; struct PptObjectFactory {} *x28; struct EshMark {} *x29; int x30; struct ChVector<ChPair<long unsigned int, EscherObjectEnums> > { struct ChPair<long unsigned int,EscherObjectEnums> {} *x_31_1_1; struct ChPair<long unsigned int,EscherObjectEnums> {} *x_31_1_2; unsigned int x_31_1_3; unsigned int x_31_1_4; unsigned int x_31_1_5; } x31; unsigned char x32; }*)arg1 pptObjectFactory:(struct PptObjectFactory { int (**x1)(); struct PptEshObjectFactory {} *x2; }*)arg2;

- (id)initWithPptReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; boolx4; char *x5; unsigned int x6; struct __sFILE {} *x7; struct SsrwOORootStorage { struct _Storage {} *x_8_1_1; unsigned short x_8_1_2[36]; struct _RootStorage {} *x_8_1_3; } x8; struct SsrwOOStorage {} *x9; struct SsrwOOStorage {} *x10; struct SsrwOOStream {} *x11; struct SsrwOOStream {} *x12; int x13; boolx14; struct PptEshReader {} *x15; struct PptEshReader {} *x16; struct PptParserVisitor {} *x17; struct PptPersistDir {} *x18; struct EshHeader {} *x19; struct EshObject {} *x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; struct ChMap<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int> > { struct map<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_27_1_1; } x27; struct PptObjectFactory {} *x28; struct EshMark {} *x29; int x30; struct ChVector<ChPair<long unsigned int, EscherObjectEnums> > { struct ChPair<long unsigned int,EscherObjectEnums> {} *x_31_1_1; struct ChPair<long unsigned int,EscherObjectEnums> {} *x_31_1_2; unsigned int x_31_1_3; unsigned int x_31_1_4; unsigned int x_31_1_5; } x31; unsigned char x32; }*)arg1 pptObjectFactory:(struct PptObjectFactory { int (**x1)(); struct PptEshObjectFactory {} *x2; }*)arg2;
- (void)dealloc;

@end
