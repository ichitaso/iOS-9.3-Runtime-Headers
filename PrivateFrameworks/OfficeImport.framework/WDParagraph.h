/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock  {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}


- (BOOL)isContinuationOf:(id)arg1;
- (BOOL)isTextFrame;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (void)insertRun:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeRun:(id)arg1;
- (void)clearRuns;
- (id)addAnnotation:(int)arg1;
- (id)addDateTime:(id)arg1;
- (int)characterCount;
- (void)clearProperties;
- (id)runIterator;
- (id)newRunIterator;
- (id)addBookmark;
- (id)addFieldMarker:(int)arg1;
- (id)addCharacterRun;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (id)addFootnote;
- (id)addEndnote;
- (id)addFieldMarker;
- (int)blockType;
- (int)runCount;
- (id)runAt:(int)arg1;
- (void)removeLastCharacter:(unsigned short)arg1;
- (void)addRun:(id)arg1;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (id)runs;
- (id)properties;
- (id)initWithText:(id)arg1;
- (BOOL)isEmpty;
- (void)dealloc;

@end
