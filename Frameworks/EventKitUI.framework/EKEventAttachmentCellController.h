/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventAttachmentCell, EKAttachment, <EKEventAttachmentCellControllerDelegate>;

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate> {
    EKAttachment *_attachment;
    id _downloadID;
    EKEventAttachmentCell *_cell;
    <EKEventAttachmentCellControllerDelegate> *_delegate;
}

@property(readonly) EKEventAttachmentCell * cell;
@property(retain) EKAttachment * attachment;
@property <EKEventAttachmentCellControllerDelegate> * delegate;

+ (BOOL)_attachmentIsViewable:(id)arg1;
+ (id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2;

- (void)setDelegate:(id)arg1;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)cell;
- (void)tearDown;
- (id)delegate;
- (void)_presentPreviewOnMainThreadWithInfo:(id)arg1;
- (id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2;
- (void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2;
- (id)initWithAttachment:(id)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (void)cellSelected;
- (void)dealloc;

@end
