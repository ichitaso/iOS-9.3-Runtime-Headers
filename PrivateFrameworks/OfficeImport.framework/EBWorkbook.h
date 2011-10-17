/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBWorkbook : NSObject  {
}

+ (id)readWithState:(id)arg1 reader:(id)arg2 fileName:(id)arg3 temporaryDirectory:(id)arg4 asThumbnail:(BOOL)arg5 delegate:(id)arg6;
+ (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)createSheetNamesFromWorkbook:(id)arg1;
+ (int)xlSheetTypeEnumFromEDSheet:(id)arg1;
+ (void)readDocumentProperties:(id)arg1 state:(id)arg2;
+ (void)readDocumentPresentation:(id)arg1 state:(id)arg2;
+ (void)setupProcessors:(id)arg1;


@end
