/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSCountedSet, NSMutableDictionary;

@interface BBAttachments : NSObject <NSCopying, NSCoding> {
    int primaryType;
    NSCountedSet *_additionalAttachments;
    NSMutableDictionary *_clientSideComposedImageInfos;
}

@property int primaryType;
@property(retain) NSCountedSet * additionalAttachments;
@property(retain) NSMutableDictionary * clientSideComposedImageInfos;


- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setClientSideComposedImageInfos:(id)arg1;
- (id)clientSideComposedImageInfos;
- (void)setAdditionalAttachments:(id)arg1;
- (id)additionalAttachments;
- (BOOL)isEqualToAttachments:(id)arg1;
- (void)addAttachmentOfType:(int)arg1;
- (void)setPrimaryType:(int)arg1;
- (unsigned int)numberOfAdditionalAttachmentsOfType:(int)arg1;
- (unsigned int)numberOfAdditionalAttachments;
- (int)primaryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
