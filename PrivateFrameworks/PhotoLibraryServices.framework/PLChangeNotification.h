/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification  {
}

@property(readonly) PLChangeNotificationCenter * changeNotificationCenter;

+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (void)_calculateDiffs;
- (id)changeNotificationCenter;

@end
