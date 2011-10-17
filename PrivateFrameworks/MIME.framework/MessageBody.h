/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class Message;

@interface MessageBody : NSObject  {
    Message *_message;
}


- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)htmlContent;
- (BOOL)isHTML;
- (id)attachments;
- (id)textHtmlPart;
- (BOOL)isRich;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)rawData;
- (unsigned int)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (void)dealloc;

@end
