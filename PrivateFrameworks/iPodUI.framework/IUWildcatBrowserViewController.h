/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUiPodViewController, IUiPodSegmentedViewController;

@interface IUWildcatBrowserViewController : IUiPodViewController  {
    IUiPodSegmentedViewController *_segmentedViewController;
}

@property(readonly) IUiPodSegmentedViewController * segmentedViewController;
@property(readonly) int style;
@property(readonly) IUiPodViewController * topViewController;

+ (Class)navigationBarClass;

- (id)topViewController;
- (id)createNavigationBar;
- (id)createSegmentedController;
- (id)segmentedViewController;
- (void)dealloc;

@end
