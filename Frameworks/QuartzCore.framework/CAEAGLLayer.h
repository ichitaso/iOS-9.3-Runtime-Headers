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

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {

  /* Error parsing encoded ivar type info: ^{_CAEAGLNativeWindow={_EAGLNativeWindowObject="version"i"attach"^?"detach"^?"begin"^?"swap"^?"collect"^?"properties"^?}^v^?^?^?^{x_list_struct}{Atomic="_v"{?="x"i}}{SpinLock="_l"{?="x"i}}^{_CAImageQueue}@"CAEAGLLayer"^{x_list_struct}I^{CAEAGLBuffer}^{CAEAGLBuffer}III^{CAEAGLBuffer}b1b1b1b1} */
    struct _CAEAGLNativeWindow { struct _EAGLNativeWindowObject { 
            int version; 
            int (*attach)(); 
            int (*detach)(); 
            int (*begin)(); 
            int (*swap)(); 
            int (*collect)(); 
            int (*properties)(); 
        } x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); struct x_list_struct {} *x6; struct Atomic { 
            struct { 
                int x; 
            } _v; 
        } x7; struct SpinLock { 
            struct { 
                int x; 
            } _l; 
        } x8; struct _CAImageQueue {} *x9; id x10; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x11; unsigned char x12; void*x13; void*x14; void*x15; void*x16; unsigned long x17; unsigned long x18; void*x19; void*x20; void*x21; const void*x22; struct x_list_struct {} *x23; unsigned int x24; struct CAEAGLBuffer {} *x25; struct CAEAGLBuffer {} *x26; unsigned int x27; unsigned int x28; unsigned int x29; struct CAEAGLBuffer {} *x30; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; } *_win;

}

@property(copy) NSDictionary * drawableProperties;

+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)setDrawableProperties:(id)arg1;
- (id)drawableProperties;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)_display;
- (void)didChangeValueForKey:(id)arg1;
- (void)dealloc;
- (struct _EAGLNativeWindowObject { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); }*)nativeWindow;
- (BOOL)shouldArchiveValueForKey:(id)arg1;

@end
