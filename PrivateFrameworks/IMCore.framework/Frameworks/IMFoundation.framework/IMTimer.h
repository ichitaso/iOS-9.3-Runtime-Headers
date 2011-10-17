/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSDictionary;

@interface IMTimer : NSObject  {
    id _timer;
    id _target;
    NSDictionary *_userInfo;
    NSString *_name;
    double _timeInterval;
    SEL _selector;
    BOOL _wakeDevice;
}

@property(readonly) id userInfo;


- (void)setFireTimeInterval:(double)arg1;
- (void)invalidate;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (id)userInfo;
- (void)dealloc;

@end
