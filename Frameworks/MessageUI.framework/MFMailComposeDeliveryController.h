/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <NSCoding>, MFOutgoingMessageDelivery, MailMessage, <MailComposeDeliveryControllerDelegate>, MailboxUid, NSString, MFError, OutgoingMessage;

@interface MFMailComposeDeliveryController : NSObject <MFDeliveryDelegate> {
    <MailComposeDeliveryControllerDelegate> *_delegate;
    MFOutgoingMessageDelivery *_delivery;
    OutgoingMessage *_message;
    NSString *_sendingAddress;
    MailboxUid *_draftMailbox;
    NSString *_draftMessageID;
    MailMessage *_originalMessage;
    <NSCoding> *_autosaveIdentifier;
    MFError *_error;
    int _composeType;
    BOOL _shouldSave;
}

@property <MailComposeDeliveryControllerDelegate> * delegate;


- (void)notifyUserDeliverySucceeded:(id)arg1;
- (void)setPercentDone:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)error;
- (BOOL)deliverMessage;
- (void)_setCodePointTranslationEnabled:(BOOL)arg1;
- (void)_removeDraft;
- (id)initWithDelivery:(id)arg1 outgoingMessage:(id)arg2 sendingAddress:(id)arg3 draftMessageID:(id)arg4 draftMailbox:(id)arg5 originalMessage:(id)arg6 composeType:(int)arg7 shouldSave:(BOOL)arg8;
- (void)dealloc;

@end
