/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKBKeyset, NSMutableArray;

@interface UIKBKeylayout : UIKBShape <NSCoding, NSCopying> {
    NSString *m_name;
    UIKBKeyset *m_keyset;
    NSMutableArray *m_refs;
}

@property(retain) NSString * name;
@property(retain) UIKBKeyset * keyset;
@property(readonly) NSArray * references;

+ (id)keylayout;

- (void)layoutInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRef:(id)arg1;
- (id)referenceWithName:(id)arg1;
- (void)setReferenceWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;
- (id)references;
- (void)setKeyset:(id)arg1;
- (id)keyset;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
