/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPAudioVideoRoutingViewControllerDelegate>, MPAudioVideoRoutingTableViewController;

@interface MPAudioVideoRoutingViewController : UIViewController  {
    MPAudioVideoRoutingTableViewController *_tableViewController;
    <MPAudioVideoRoutingViewControllerDelegate> *_delegate;
}

@property <MPAudioVideoRoutingViewControllerDelegate> * delegate;

+ (BOOL)hasWirelessDisplayRoutes;

- (void)_doneAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)loadView;
- (id)delegate;
- (id)init;
- (void)dealloc;

@end
