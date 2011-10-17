/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GCKEventItem : NSObject  {
    struct { int x1; char *x2; int x3; unsigned int x4; } *_event;
    unsigned int _pid;
}

@property unsigned int pid;
@property struct { int x1; char *x2; int x3; unsigned int x4; }* event;


- (id)initWithEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1 remotePeer:(unsigned int)arg2;
- (struct { int x1; char *x2; int x3; unsigned int x4; }*)event;
- (void)setEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1;
- (unsigned int)pid;
- (void)setPid:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

@end
