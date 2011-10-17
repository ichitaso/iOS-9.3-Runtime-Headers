/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface GQHStreamedXML : NSObject <GQHXMLOutput> {
    struct _xmlOutputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuffer {} *x5; struct _xmlBuffer {} *x6; int x7; int x8; } *mOutputBuffer;
    struct __CFData { } *mData;
    struct __CFArray { } *mElementNameStack;
    int mLastOp;
    BOOL mNeedNewlineBeforeNextElement;
    struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; } *mXMLDoc;
}


- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)pushElementName:(const char *)arg1;
- (char *)popElementName;
- (const char *)peekElementName;
- (id)initEmpty;
- (id)initWithHead;
- (struct __CFData { }*)createHtml;
- (struct __CFData { }*)createHtmlWithCss:(struct __CFString { }*)arg1;
- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (struct __CFData { }*)createProgressiveHtml;
- (void)endElementWithExpectedName:(const char *)arg1;
- (void)startElement:(const char *)arg1;
- (void)endElement;
- (void)dealloc;

@end
