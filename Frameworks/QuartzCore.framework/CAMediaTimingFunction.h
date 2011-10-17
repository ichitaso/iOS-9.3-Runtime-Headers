/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMediaTimingFunction : NSObject <NSCoding> {
    struct CAMediaTimingFunctionPrivate { float x1[2]; float x2[2]; } *_priv;
}

+ (id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
+ (id)functionWithName:(id)arg1;
+ (id)uiFunctionWithControlPoints:(const struct CGPoint { float x1; float x2; }*)arg1;
+ (id)sigmoidFunction;

- (id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)_solveForInput:(float)arg1;
- (id)description;
- (void)dealloc;
- (void)getControlPointAtIndex:(unsigned long)arg1 values:(float[2])arg2;
- (void)_getPoints:(double*)arg1;

@end
