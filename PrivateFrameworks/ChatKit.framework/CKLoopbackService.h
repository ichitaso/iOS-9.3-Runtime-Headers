/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;

@interface CKLoopbackService : CKService  {
    NSMutableArray *_conversations;
}

+ (id)sharedLoopbackService;

- (int)unreadCount;
- (id)conversationSummaries:(id)arg1 groupIDs:(id)arg2;
- (void)_reallySendMessage:(id)arg1;
- (void)addMessageToStore:(id)arg1 incrementUnreadCount:(BOOL)arg2;
- (void)_receiveMessageForMessage:(id)arg1;
- (int)unreadCountForConversation:(id)arg1;
- (id)placeholderMessageForConversation:(id)arg1 withDate:(id)arg2;
- (void)messagesForConversation:(id)arg1;
- (BOOL)supportsMediaAttachments;
- (BOOL)dbFull;
- (id)lookupRecipientsForConversation:(id)arg1;
- (id)createConversationWithRecipients:(id)arg1;
- (int)unreadConversationCount;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)dealloc;

@end
