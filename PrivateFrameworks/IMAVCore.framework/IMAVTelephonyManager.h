/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class CTCallCenter, NSMutableDictionary;

@interface IMAVTelephonyManager : NSObject  {
    CTCallCenter *_callCenter;
    struct __CTServerConnection { } *_ctServerConnection;
    NSMutableDictionary *_currentCallDictionary;
    BOOL _isDesignatedServiceProvider;
    struct __CFMachPort { } *_ctServerMachPort;
    struct __CFUUID { } *_ctToken;
}

@property(readonly) unsigned int callState;

+ (id)sharedInstance;
+ (id)numberToDialForNumber:(id)arg1 dialAssist:(BOOL*)arg2;

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (unsigned int)callState;
- (id)init;
- (void)dealloc;
- (void)stopWatchingForCTRequests;
- (void)_disconnectCSCallWithID:(id)arg1;
- (void)_handleCTServiceRequestName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2 contextInfo:(void*)arg3;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_wantsBreakBeforeMake;
- (BOOL)_disconnectCTServerConnection;
- (void)notifyCallEndedForChat:(id)arg1;
- (void)notifyCallConnectedForChat:(id)arg1;
- (void)notifyCallConnectingForChat:(id)arg1;
- (void)notifyMissedCallForChat:(id)arg1;
- (void)_setCallRef:(struct __CTCall { }*)arg1 forChat:(id)arg2;
- (void)_setCurrentCallStatus:(int)arg1 forChat:(id)arg2;
- (void)notifyCallStartedForChat:(id)arg1;
- (void)_hangUpCall:(struct __CTCall { }*)arg1;
- (void)_answerCall:(struct __CTCall { }*)arg1;
- (void)_dialRequested:(struct __CFDictionary { }*)arg1;
- (struct __CTCall { }*)_callRefForChat:(id)arg1;
- (BOOL)_unregisterCTRequestService;
- (BOOL)_setupCTServerConnection;
- (BOOL)_registerCTRequestService;
- (void)_cleanupMachInfo;
- (void)__handleCallEvent:(id)arg1;
- (void)_chatStateChanged:(id)arg1;
- (void)startWatchingForCTRequests;
- (void)_handleCallEvent:(id)arg1;
- (BOOL)_isOnCallToID:(id)arg1;
- (BOOL)_breakCSCallsIfNecessary;

@end
