/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UIWebDocumentView, CALayer;

@interface UIWebPlugInView : WAKView  {
    UIWebDocumentView *_webView;
    CALayer *_hostingLayer;
    UIView *_uiView;
    struct __CFRunLoopObserver { } *_mainRunLoopDrawObserver;
    BOOL _isFullScreen;
    BOOL _parentedInLayer;
    BOOL _isQuickTimePlugIn;
    BOOL _isMapViewPlugIn;
}

@property(getter=isParentedInLayer) BOOL parentedInLayer;
@property BOOL isQuickTimePlugIn;
@property BOOL isMapViewPlugIn;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsMapViewPlugIn:(BOOL)arg1;
- (BOOL)isMapViewPlugIn;
- (void)setIsQuickTimePlugIn:(BOOL)arg1;
- (BOOL)isQuickTimePlugIn;
- (void)detachPluginLayer;
- (void)attachPluginLayer;
- (id)pluginLayer;
- (void)setWebView:(id)arg1;
- (void)layout;
- (id)plugInView;
- (id)initWithWebView:(id)arg1 plugInView:(id)arg2;
- (void)_detachPluginLayerOnMainThread;
- (void)_attachPluginLayerOnMainThread;
- (BOOL)willProvidePluginLayer;
- (void)_disconnectPluginLayers;
- (void)_connectPluginLayers;
- (void)setParentedInLayer:(BOOL)arg1;
- (BOOL)isParentedInLayer;
- (id)objectForWebScript;
- (void)webPlugInDestroy;
- (void)webPlugInStop;
- (void)webPlugInStart;
- (void)webPlugInInitialize;
- (BOOL)isParented;
- (void)_reshapeOnMainThread;
- (void)invalidateGState;
- (void)_viewDidMoveToWindowOnMainThread;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)reshape;
- (void)forwardInvocation:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

@end
