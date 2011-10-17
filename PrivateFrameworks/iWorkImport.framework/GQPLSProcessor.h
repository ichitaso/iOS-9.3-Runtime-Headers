/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPLSProcessor : GQPProcessor  {
    Class mGenerator;
}


- (Class)generator;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString { }*)arg4 previewRequest:(struct __QLPreviewRequest { }*)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString { }*)arg4 previewRequest:(struct __QLPreviewRequest { }*)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7;
- (void)pushInitialState;
- (BOOL)go;

@end
