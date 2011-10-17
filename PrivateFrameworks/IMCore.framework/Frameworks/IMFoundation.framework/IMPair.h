/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPair : NSObject <NSCopying> {
    id _first;
    id _second;
}

@property(retain) id first;
@property(retain) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void)setFirst:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)first;
- (void)setSecond:(id)arg1;
- (id)second;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
