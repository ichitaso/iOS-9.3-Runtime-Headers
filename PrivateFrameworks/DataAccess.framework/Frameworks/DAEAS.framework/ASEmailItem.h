/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray, NSString, ASMeetingRequest, NSDate, NSData;

@interface ASEmailItem : ASChangedCollectionLeaf  {
    NSArray *_to;
    NSArray *_cc;
    NSArray *_from;
    NSArray *_replyTo;
    NSDate *_date;
    NSString *_subject;
    NSString *_displayTo;
    int _importance;
    BOOL _read;
    BOOL _flagged;
    NSString *_body;
    int _bodySize;
    BOOL _bodyTruncated;
    NSString *_messageClass;
    NSArray *_attachments;
    ASMeetingRequest *_meetingRequest;
    NSString *_threadTopic;
    NSData *_conversationId;
    NSData *_conversationIndex;
    NSString *_mimeData;
    NSString *_folderId;
    NSString *_longID;
    int _bodyType;
    BOOL _readIsSet;
    BOOL _flaggedIsSet;
    int _lastVerb;
    BOOL _verbIsSet;
}

@property(copy) NSArray * to;
@property(copy) NSArray * cc;
@property(copy) NSArray * from;
@property(copy) NSArray * replyTo;
@property(retain) NSDate * date;
@property(retain) NSString * subject;
@property(retain) NSString * displayTo;
@property int importance;
@property BOOL read;
@property BOOL flagged;
@property(retain) NSString * body;
@property int bodySize;
@property BOOL bodyTruncated;
@property(retain) NSString * messageClass;
@property(retain) NSArray * attachments;
@property(retain) NSString * threadTopic;
@property(retain) NSData * conversationId;
@property(retain) NSData * conversationIndex;
@property(retain) NSString * mimeData;
@property(retain) NSString * folderId;
@property(retain) NSString * longID;
@property int lastVerb;
@property BOOL readIsSet;
@property BOOL flaggedIsSet;
@property BOOL verbIsSet;
@property(readonly) NSString * meetingRequestUUID;
@property(readonly) NSData * meetingRequestMetaData;
@property int bodyType;

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)folderId;
- (id)conversationId;
- (void)setBodyType:(int)arg1;
- (id)cc;
- (int)bodySize;
- (id)meetingRequestUUID;
- (id)longID;
- (id)meetingRequestMetaData;
- (BOOL)read;
- (BOOL)readIsSet;
- (BOOL)flaggedIsSet;
- (BOOL)flagged;
- (BOOL)verbIsSet;
- (int)lastVerb;
- (void)setRead:(BOOL)arg1;
- (void)setFlagged:(BOOL)arg1;
- (id)subject;
- (id)attachments;
- (void)setSubject:(id)arg1;
- (id)to;
- (void)setTo:(id)arg1;
- (id)from;
- (void)setFrom:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBody:(id)arg1;
- (int)compare:(id)arg1;
- (id)body;
- (void)setDate:(id)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setVerbIsSet:(BOOL)arg1;
- (void)setFlaggedIsSet:(BOOL)arg1;
- (void)setReadIsSet:(BOOL)arg1;
- (id)mimeData;
- (id)conversationIndex;
- (id)threadTopic;
- (id)messageClass;
- (id)displayTo;
- (id)replyTo;
- (void)setReplyTo:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setFolderId:(id)arg1;
- (void)_processApplicationData:(BOOL)arg1;
- (void)setConversationIndex:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setThreadTopic:(id)arg1;
- (void)setMessageClass:(id)arg1;
- (void)setMimeData:(id)arg1;
- (void)setLastVerb:(int)arg1;
- (void)setDisplayTo:(id)arg1;
- (void)setReplyToString:(id)arg1;
- (void)setFromString:(id)arg1;
- (void)setCCString:(id)arg1;
- (void)setToString:(id)arg1;
- (void)setBodySize:(int)arg1;
- (void)processAppDataForStream;
- (BOOL)_isSearchResult;
- (void)_setMeetingRequest:(id)arg1;
- (void)setLongID:(id)arg1;
- (int)bodyType;
- (void)setBodyTruncated:(BOOL)arg1;
- (BOOL)bodyTruncated;
- (int)importance;
- (void)postProcessApplicationData;
- (void)setImportance:(int)arg1;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
