/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface QLBasePreviewParts : QLPreviewParts  {
}

+ (int (*)())dataCallbackForUTI:(id)arg1 andSize:(unsigned int)arg2;
+ (BOOL)isBundleURL:(id)arg1;
+ (int (*)())urlCallbackForUTI:(id)arg1;
+ (BOOL)canConvertDocumentType:(id)arg1;

- (void)computePreview;

@end
