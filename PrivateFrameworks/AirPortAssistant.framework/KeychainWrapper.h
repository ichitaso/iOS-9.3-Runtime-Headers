/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSString, NSLock;

@interface KeychainWrapper : NSObject  {
    NSString *_accountName;
    NSString *_serviceName;
    NSString *_serverName;
    NSString *_dnsName;
    NSLock *_lock;
}

+ (BOOL)supportsSavingAirDiskPasswords;
+ (id)keychainWrapperWithAccountName:(id)arg1 serverName:(id)arg2 dnsName:(id)arg3;
+ (id)keychainWrapperWithAccountName:(id)arg1 serviceName:(id)arg2;

- (void)setAccountName:(id)arg1;
- (id)accountName;
- (id)getAirDiskServerDescs;
- (id)dnsName;
- (id)serverName;
- (id)airDiskPassword;
- (void)removeAirDiskPasswords;
- (long)addInternetPassword:(id)arg1;
- (id)genericPasswordForItemRef:(id*)arg1;
- (void)setDNSName:(id)arg1;
- (void)setServerName:(id)arg1;
- (id)initWithAccountName:(id)arg1 serverName:(id)arg2 dnsName:(id)arg3;
- (id)initWithAccountName:(id)arg1 serviceName:(id)arg2;
- (id)genericPassword;
- (void)removeGenericPassword;
- (long)addGenericPasswordWithAttributes:(id)arg1 data:(id)arg2;
- (void)setServiceName:(id)arg1;
- (id)serviceName;
- (void)dealloc;

@end
