/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <OCDReader>, <OCDWriter>, OCDSummary, OADBlipCollection;

@interface OCDDocument : NSObject  {
    <OCDReader> *mReader;
    <OCDWriter> *mWriter;
    OCDSummary *mSummary;
    OADBlipCollection *mBlips;
}


- (bool)isFromBinaryFile;
- (bool)isToBinaryFile;
- (id)writer;
- (void)setWriter:(id)arg1;
- (id)reader;
- (id)blips;
- (void)setReader:(id)arg1;
- (id)summary;
- (id)init;
- (void)dealloc;

@end
