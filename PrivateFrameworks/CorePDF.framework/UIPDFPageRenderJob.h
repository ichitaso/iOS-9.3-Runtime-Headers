/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIImage, UIPDFPageRenderOperation, UIPDFPage;

@interface UIPDFPageRenderJob : NSObject  {
    UIPDFPage *_page;
    unsigned int pageIndex;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    BOOL _sendPending;
    int _lock;
    unsigned int _pageIndex;
}

@property(readonly) unsigned int pageIndex;
@property UIPDFPageRenderOperation * operation;
@property(retain,readonly) UIImage * image;


- (void)setOperation:(id)arg1;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize { float x1; float x2; })arg2 queuePriority:(int)arg3;
- (void)cancelOperation;
- (void)cancelOperationForTarget:(id)arg1;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)renderImage;
- (void)sendImage;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (unsigned int)pageIndex;
- (id)image;
- (void)cancel;
- (void)dealloc;
- (id)operation;

@end
