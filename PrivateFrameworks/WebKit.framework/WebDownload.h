/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload  {
    WebDownloadInternal *_webInternal;
}


- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)connection:(id)arg1 willStopBufferingData:(id)arg2;
- (void)_setRealDelegate:(id)arg1;
- (id)init;
- (void)dealloc;

@end
