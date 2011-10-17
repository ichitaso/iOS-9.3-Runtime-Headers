/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray;

@interface MKSystemController : NSObject  {
    NSMutableArray *_backgroundTasks;
}

+ (id)sharedInstance;

- (struct CGSize { float x1; float x2; })screenSize;
- (float)screenScale;
- (BOOL)isMultitaskingSupported;
- (int)userInterfaceIdiom;
- (int)deviceTileSize;
- (int)deviceTileScale;
- (BOOL)hasMultitouchDeviceInstalled;
- (BOOL)isSensitiveUIEnabled;
- (BOOL)isRunningOniPad;
- (void)addReachabilityObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (void)removeReachabilityObserver:(id)arg1;
- (BOOL)isLiveScrollCapable;
- (BOOL)isHiDPI;
- (void)popBackgroundTask;
- (void)pushBackgroundTaskWithHandler:(id)arg1;
- (BOOL)isWifiEnabled;
- (unsigned int)retainCount;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (BOOL)hasTelephonyCapability;

@end
