/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class PCPersistentTimer, NSTimer, NSRecursiveLock, NSMachPort, NSString;

@interface PCPersistentInterfaceManager : NSObject  {
    NSRecursiveLock *_lock;
    struct __CFDictionary { } *_delegatesAndRunLoops;
    struct __CFSet { } *_WWANInterfaceAssertionDelegates;
    NSTimer *_WWANInterfaceAssertionDisableTimer;
    struct __CFSet { } *_WiFiAutoAssociationDelegates;
    PCPersistentTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet { } *_wakeOnWiFiDelegates;
    PCPersistentTimer *_wakeOnWiFiDisableTimer;
    void *_ctServerConnection;
    NSMachPort *_machPort;
    void *_interfaceAssertion;
    void *_wifiManager;
    void *_reachability;
    int _WWANContextIdentifier;
    NSString *_WWANInterfaceName;
    BOOL _isWWANInterfaceUp;
    BOOL _isWWANInterfaceDataActive;
    BOOL _isWWANInHomeCountry;
    BOOL _hasWWANStatusIndicator;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    int _wwanRSSI;
    BOOL _belowRSSIThreshold;
    BOOL _isInCall;
    BOOL _isInternetReachable;
    BOOL _isInternetReachableViaWiFi;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _shouldOverrideOnCallBehavior;
}

@property(readonly) BOOL isWWANInterfaceUp;
@property(readonly) BOOL isWWANInHomeCountry;
@property(readonly) BOOL doesWWANInterfaceExist;
@property(readonly) NSString * WWANInterfaceName;
@property(readonly) BOOL isInternetReachableViaWiFi;
@property(readonly) BOOL isWakeOnWiFiSupported;
@property(readonly) BOOL isInternetReachable;
@property(readonly) BOOL isPowerStateDetectionSupported;
@property(readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property(readonly) BOOL isInCall;
@property(readonly) BOOL isWWANInterfaceActivationPermitted;
@property(readonly) BOOL areAllNetworkInterfacesDisabled;

+ (id)sharedInstance;

- (void)handleMachMessage:(void*)arg1;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)_createWiFiManager;
- (void)addDelegate:(id)arg1 callbackRunLoop:(id)arg2;
- (BOOL)isPowerStateDetectionSupported;
- (BOOL)isWWANInterfaceInProlongedHighPowerState;
- (BOOL)isWWANInHomeCountry;
- (BOOL)isInternetReachable;
- (BOOL)isWakeOnWiFiSupported;
- (BOOL)areAllNetworkInterfacesDisabled;
- (void)keepWWANInterfaceUp:(BOOL)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2;
- (void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2;
- (id)dhcpT1RenewalDate;
- (id)dhcpHalfLeaseExpirationDate;
- (void)bindSocketToWWANInterface:(int)arg1;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream { }*)arg1;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (void)_createCTConnection;
- (void)_createReachabilityMonitor;
- (void)_serverCallbackLocked:(id)arg1 info:(id)arg2;
- (void)_mainThreadDelayedInvalidation;
- (void)_ctConnectionWasInvalidated;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_reachabilityCallbackLocked:(unsigned int)arg1;
- (void)_serverCallback:(id)arg1 info:(id)arg2;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_updateWWANInterfaceUpStateLocked;
- (BOOL)_wantsWWANInterfaceAssertion;
- (BOOL)_wwanRSSIBelowThresholdAndWoWAvailableLocked;
- (void)_reachabilityCallback:(unsigned int)arg1;
- (void)_performCalloutsForSelectorValue:(id)arg1;
- (void)_updateWWANInterfaceAssertions;
- (void)_populateWakeOnWiFiCapabliityLocked;
- (void)_populateWakeOnWiFiCapabliity;
- (void)_adjustWakeOnWiFiLocked;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (void)_adjustWakeOnWiFi;
- (BOOL)doesWWANInterfaceExist;
- (BOOL)isWWANInterfaceActivationPermitted;
- (BOOL)isInCall;
- (BOOL)isInternetReachableViaWiFi;
- (BOOL)_allowBindingToWWAN;
- (id)WWANInterfaceName;
- (id)WiFiInterfaceName;
- (void)bindSocket:(int)arg1 toWWANInterface:(BOOL)arg2;
- (void)bindCFStream:(struct __CFReadStream { }*)arg1 toWWANInterface:(BOOL)arg2;
- (void)removeDelegate:(id)arg1;
- (id)init;
- (id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7;
- (BOOL)isWWANInterfaceUp;

@end
