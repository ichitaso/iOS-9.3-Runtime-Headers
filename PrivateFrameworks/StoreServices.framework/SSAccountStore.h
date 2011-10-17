/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, SSAccount, NSLock, SSDistributedNotificationCenter;

@interface SSAccountStore : NSObject <SSAccountStore> {
    NSArray *_accounts;
    BOOL _accountsValid;
    NSLock *_lock;
    SSDistributedNotificationCenter *_notificationCenter;
    id _observer;
}

@property(readonly) SSAccount * activeAccount;
@property(readonly) SSAccount * activeLockerAccount;
@property(readonly) NSArray * accounts;
@property(getter=isExpired,readonly) BOOL expired;

+ (BOOL)isExpired;
+ (id)defaultStore;
+ (void)setDefaultStore:(id)arg1;
+ (double)tokenExpirationInterval;
+ (void)resetExpirationForTokenType:(int)arg1;
+ (BOOL)isExpiredForTokenType:(int)arg1;
+ (id)existingDefaultStore;
+ (void)resetExpiration;

- (void)reloadAccounts;
- (id)accounts;
- (BOOL)isExpired;
- (id)activeAccount;
- (void)setDistributedNotificationCenter:(id)arg1;
- (id)distributedNotificationCenter;
- (void)signOutAccount:(id)arg1;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (void)_signOutWithUserInfo:(id)arg1;
- (void)_postAccountStoreChanged;
- (void)_setAccounts:(id)arg1;
- (void)resetExpirationForTokenType:(int)arg1;
- (BOOL)isExpiredForTokenType:(int)arg1;
- (id)_addAccount:(id)arg1 withMessageParameters:(id)arg2;
- (void)_invalidateAccounts;
- (id)_accountWithUniqueIdentifier:(id)arg1;
- (BOOL)_reloadAccountsIfNeeded;
- (id)init;
- (void)dealloc;
- (void)resetExpiration;
- (id)setActiveLockerAccount:(id)arg1;
- (id)setActiveAccount:(id)arg1;
- (id)activeLockerAccount;
- (id)addAccount:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (void)signOutAllAccounts;

@end
