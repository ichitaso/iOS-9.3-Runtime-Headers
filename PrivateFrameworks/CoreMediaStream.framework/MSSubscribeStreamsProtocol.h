/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface MSSubscribeStreamsProtocol : MSStreamsProtocol  {
    struct __MSSSPCContext { 
        struct __MSSPCContext { 
            void *owner; 
            struct __CFString {} *personID; 
            struct __CFString {} *authToken; 
            struct __CFDictionary {} *deviceInfo; 
            double connectionTimeout; 
            int (*__didReceiveDataCallback)(); 
            int (*__didFinishCallback)(); 
            int (*__didFailAuthenticationCallback)(); 
            int (*__didReceiveServerSideConfigVersionCallback)(); 
            int (*__didReceiveRetryAfterCallback)(); 
            struct CFURLConnectionClient_V1 {} *__client; 
            struct _CFURLConnection {} *__connection; 
            struct __CFData {} *__responseData; 
            struct __CFHTTPMessage {} *__response; 
            struct __CFError {} *__error; 
        } _super; 
        int (*finishedCallback)(); 
        int (*gotDataChunkCallback)(); 
        int (*authFailedCallback)(); 
        int (*didReceiveServerSideConfigurationVersionCallback)(); 
        int (*didReceiveRetryAfterCallback)(); 
        double connectionTimeout; 
        int __state; 
        struct __CFData {} *__chunkLengthData; 
        struct __CFData {} *__currentChunkData; 
        int __chunkBytesRemaining; 
    } _context;
    int _chunkIndex;
    struct __MSSSPCChunkParsingContext { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); struct __CFString {} *x8; struct __CFURL {} *x9; struct __CFString {} *x10; struct __CFString {} *x11; int x12; } *_parseContext;
}


- (void)abort;
- (void)setDelegate:(id)arg1;
- (void)_chunkDidFindShareState:(id)arg1;
- (void)_chunkDidFindSubscriptionTemporarilyUnavailableForPersonID:(id)arg1;
- (void)_chunkDidFindSubscriptionGoneForPersonID:(id)arg1;
- (void)_chunkDidEndStreamForPersonID:(id)arg1 ctag:(id)arg2;
- (void)_chunkDidParseAssetCollections:(id)arg1 forPersonID:(id)arg2;
- (void)_chunkDidBeginStreamForPersonID:(id)arg1 wasReset:(BOOL)arg2 metadata:(id)arg3;
- (void)_coreProtocolDidFailAuthentication:(id)arg1;
- (void)_coreProtocolDidGetDataChunk:(id)arg1;
- (void)_coreProtocolDidFinishError:(id)arg1;
- (id)_assetFromCoreDictionary:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (id)_invalidFieldErrorWithFieldName:(id)arg1 suggestion:(id)arg2;
- (id)_assetCollectionsFromCoreArray:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)_parseNextChunk;
- (id)_pathToChunkIndex:(int)arg1;
- (void)_parseChunks;
- (void)pollForSubscriptionUpdatesWithAccountAnchors:(id)arg1;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)delegate;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (void)dealloc;

@end
