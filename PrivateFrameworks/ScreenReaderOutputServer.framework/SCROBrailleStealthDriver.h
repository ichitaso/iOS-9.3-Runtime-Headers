/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    int _mainSize;
    int _statusSize;
}


- (unsigned int)interfaceVersion;
- (int)loadDriverWithIOElement:(id)arg1;
- (BOOL)unloadDriver;
- (BOOL)isDriverLoaded;
- (BOOL)isSleeping;
- (BOOL)supportsBlinkingCursor;
- (BOOL)isInputEnabled;
- (BOOL)postsKeyboardEvents;
- (id)getInputEvents;
- (int)mainSize;
- (int)statusSize;
- (BOOL)setMainCells:(const char *)arg1 length:(int)arg2;
- (BOOL)setStatusCells:(const char *)arg1 length:(int)arg2;
- (int)brailleInputMode;
- (id)modelIdentifier;
- (id)init;
- (void)dealloc;

@end
