/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class TWBevelledImageView, UIImage;

@interface TWTweetSheetAttachment : NSObject  {
    int _type;
    id _payload;
    UIImage *_previewImage;
    TWBevelledImageView *_previewView;
    int _downsampleStatus;
}

@property int type;
@property(copy) id payload;
@property(retain) UIImage * previewImage;
@property int downsampleStatus;
@property(retain) TWBevelledImageView * previewView;

+ (BOOL)attachmentTypeRepresentsAnImage:(int)arg1;

- (int)type;
- (void)setType:(int)arg1;
- (id)previewImage;
- (id)payload;
- (void)setPayload:(id)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)dealloc;
- (void)setDownsampleStatus:(int)arg1;
- (int)downsampleStatus;
- (void)setPreviewView:(id)arg1;
- (id)previewView;

@end
