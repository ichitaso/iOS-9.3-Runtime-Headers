/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, UILabel, GKPlayer, NSString;

@interface GKFriendRequestAlertView : UIAlertView  {
    GKPlayer *_player;
    UIImageView *_avatarImageView;
    UILabel *_aliasLabel;
}

@property(readonly) GKPlayer * player;
@property(retain) NSString * request;


- (id)initWithPlayer:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)request;
- (void)layout;
- (id)player;
- (void)dealloc;

@end
