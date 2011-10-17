/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CAContextImpl : CAContext  {

  /* Error parsing encoded ivar type info: ^{Context=I^{Context}{Mutex="_m"{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}}@"CAContext"II@"CALayer"^{Context}^{CGColorSpace}^{__CFDictionary}IIII^{__CFMachPort}^{__CFRunLoopSource}^{Shmem}^{Shmem}f^{Commit}{Generic="_vptr$GenericContext"^^?"_c"^{Context}}b1b1b1b1} */
    struct Context { unsigned int x1; struct Context {} *x2; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } _m; 
        } x3; id x4; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x5; unsigned char x6; void*x7; unsigned char x8; out in void*x9; void*x10; void*x11; void*x12; void*x13; unsigned int x14; unsigned int x15; id x16; void*x17; unsigned char x18; void*x19; unsigned long x20; void*x21; void*x22; void*x23; const void*x24; struct Context {} *x25; struct CGColorSpace {} *x26; struct __CFDictionary {} *x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; struct __CFMachPort {} *x32; struct __CFRunLoopSource {} *x33; struct Shmem {} *x34; struct Shmem {} *x35; float x36; struct Commit {} *x37; struct Generic { 
            int (**_vptr$GenericContext)(); 
            struct Context {} *_c; 
        } x38; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; } *_impl;

}


- (struct CGColorSpace { }*)colorSpace;
- (void)invalidate;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (BOOL)valid;
- (unsigned int)createSlot;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)deleteSlot:(unsigned int)arg1;
- (id)layer;
- (void)setLayer:(id)arg1;
- (unsigned int)contextId;
- (id)options;
- (unsigned int)createFencePort;
- (float)level;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)orderAbove:(unsigned int)arg1;
- (void)setLevel:(float)arg1;
- (void)dealloc;
- (void)orderBelow:(unsigned int)arg1;
- (struct Context { }*)renderContext;
- (id)initWithOptions:(id)arg1 localContext:(bool)arg2;
- (id)initRemoteWithOptions:(id)arg1;

@end
