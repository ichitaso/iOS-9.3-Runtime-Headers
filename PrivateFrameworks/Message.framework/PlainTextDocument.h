/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, NSMutableString;

@interface PlainTextDocument : NSObject  {
    NSMutableString *_text;
    NSMutableArray *_fragments;
}


- (id)archivedRepresentation;
- (void)appendArchivedRepresentation:(id)arg1;
- (void)appendString:(id)arg1 withQuoteLevel:(unsigned int)arg2;
- (unsigned int)fragmentCount;
- (void)getString:(id*)arg1 quoteLevel:(unsigned int*)arg2 ofFragmentAtIndex:(int)arg3;
- (void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned long)arg3;
- (id)quotedString:(unsigned long)arg1;
- (id)string;
- (void)dealloc;

@end
