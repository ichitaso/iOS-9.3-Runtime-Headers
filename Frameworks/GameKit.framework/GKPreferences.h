/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKPreferences : NSObject  {
    BOOL _HTTPShouldUsePipelining;
    unsigned int _maxDefaultPlayersP2P;
    unsigned int _maxDefaultPlayersHosted;
    unsigned int _maxDefaultPlayersTurnBased;
    BOOL _isStoreDemoModeEnabled;
}

@property int environment;
@property(retain) NSString * storeBagURL;
@property BOOL ignoreSandbox;
@property BOOL allowUnsignedBag;
@property BOOL useTestProtocols;
@property(getter=isAddingFriendsRestricted,readonly) BOOL addingFriendsRestricted;
@property(getter=isMultiplayerGamingRestricted,readonly) BOOL multiplayerGamingRestricted;
@property(getter=isAppInstallationRestricted,readonly) BOOL appInstallationRestricted;
@property double terminationInterval;
@property double garbageCollectionInterval;
@property double minimumCacheTTL;
@property double operationTimeout;
@property double operationRetryDelay;
@property unsigned int operationRetryCount;
@property(getter=isNotificationCenterEnabled) BOOL notificationCenterEnabled;
@property BOOL notificationBadgesEnabled;
@property BOOL notificationSoundsEnabled;
@property BOOL notificationAlertsEnabled;
@property BOOL verboseLogging;
@property unsigned long logFilter;
@property BOOL forceRelay;
@property BOOL preemptiveRelay;
@property int pushEnvironment;
@property int pipeliningSetting;
@property BOOL HTTPShouldUsePipelining;
@property unsigned int maxPlayersP2P;
@property unsigned int maxPlayersHosted;
@property unsigned int maxPlayersTurnBased;
@property unsigned int maxDefaultPlayersP2P;
@property unsigned int maxDefaultPlayersHosted;
@property unsigned int maxDefaultPlayersTurnBased;
@property BOOL showRating;
@property BOOL showPopularityInsteadOfRating;
@property BOOL useInternalHeader;
@property(readonly) BOOL isStoreDemoModeEnabled;

+ (id)hostNameForEnvironment:(int)arg1;
+ (BOOL)isSystemWideNotificationsEnabled;
+ (id)sharedPreferences;

- (BOOL)HTTPShouldUsePipelining;
- (void)setMinimumCacheTTL:(double)arg1;
- (double)minimumCacheTTL;
- (void)setGarbageCollectionInterval:(double)arg1;
- (double)garbageCollectionInterval;
- (void)setTerminationInterval:(double)arg1;
- (double)terminationInterval;
- (void)setUseInternalHeader:(BOOL)arg1;
- (BOOL)useInternalHeader;
- (void)setShowPopularityInsteadOfRating:(BOOL)arg1;
- (BOOL)showPopularityInsteadOfRating;
- (void)setShowRating:(BOOL)arg1;
- (BOOL)showRating;
- (void)setMaxPlayersTurnBased:(unsigned int)arg1;
- (void)setMaxPlayersHosted:(unsigned int)arg1;
- (void)setMaxPlayersP2P:(unsigned int)arg1;
- (void)setPipeliningSetting:(int)arg1;
- (int)pipeliningSetting;
- (void)setPushEnvironment:(int)arg1;
- (int)pushEnvironment;
- (void)setPreemptiveRelay:(BOOL)arg1;
- (void)setForceRelay:(BOOL)arg1;
- (void)setLogFilter:(unsigned long)arg1;
- (void)setVerboseLogging:(BOOL)arg1;
- (BOOL)verboseLogging;
- (void)setNotificationAlertsEnabled:(BOOL)arg1;
- (BOOL)notificationAlertsEnabled;
- (void)setNotificationSoundsEnabled:(BOOL)arg1;
- (BOOL)notificationSoundsEnabled;
- (void)setNotificationBadgesEnabled:(BOOL)arg1;
- (BOOL)notificationBadgesEnabled;
- (void)setNotificationCenterEnabled:(BOOL)arg1;
- (BOOL)isNotificationCenterEnabled;
- (void)setOperationRetryCount:(unsigned int)arg1;
- (unsigned int)operationRetryCount;
- (void)setOperationRetryDelay:(double)arg1;
- (double)operationRetryDelay;
- (void)setOperationTimeout:(double)arg1;
- (double)operationTimeout;
- (BOOL)isAppInstallationRestricted;
- (BOOL)isAddingFriendsRestricted;
- (void)setIgnoreSandbox:(BOOL)arg1;
- (BOOL)ignoreSandbox;
- (void)setUseTestProtocols:(BOOL)arg1;
- (void)setAllowUnsignedBag:(BOOL)arg1;
- (BOOL)allowUnsignedBag;
- (void)setStoreBagURL:(id)arg1;
- (id)storeBagURL;
- (void)setEnvironment:(int)arg1;
- (int)environment;
- (unsigned int)maxDefaultPlayersTurnBased;
- (unsigned int)maxDefaultPlayersHosted;
- (unsigned int)maxDefaultPlayersP2P;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setMaxDefaultPlayersTurnBased:(unsigned int)arg1;
- (void)setMaxDefaultPlayersHosted:(unsigned int)arg1;
- (void)setMaxDefaultPlayersP2P:(unsigned int)arg1;
- (BOOL)useTestProtocols;
- (BOOL)isStoreDemoModeEnabled;
- (unsigned long)logFilter;
- (BOOL)forceRelay;
- (BOOL)preemptiveRelay;
- (BOOL)isMultiplayerGamingRestricted;
- (unsigned int)maxPlayersTurnBased;
- (unsigned int)maxPlayersP2P;
- (unsigned int)maxPlayersHosted;
- (id)init;

@end
