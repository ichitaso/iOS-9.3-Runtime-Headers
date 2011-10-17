/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDProtection : NSObject <NSCopying> {
    boolmHidden;
    boolmLocked;
}

+ (id)protectionWithHidden:(bool)arg1 locked:(bool)arg2;

- (id)initWithHidden:(bool)arg1 locked:(bool)arg2;
- (BOOL)isEqualToProtection:(id)arg1;
- (bool)isLocked;
- (bool)isHidden;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
