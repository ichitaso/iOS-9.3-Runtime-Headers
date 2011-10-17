/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, NSString, MailboxUid, MFLock, MFError, MessageLibrary;

@interface MailAccount : Account  {
    NSString *_path;
    NSString *_nonPersistentPath;
    MailboxUid *_rootMailboxUid;
    struct { 
        unsigned int cacheDirtyCount : 16; 
        unsigned int synchronizationThreadIsRunning : 1; 
        unsigned int backgroundFetchInProgress : 1; 
        unsigned int cacheHasBeenRead : 1; 
        unsigned int disableCacheWrite : 1; 
        unsigned int _UNUSED_ : 12; 
    } _flags;
    MailboxUid *_inboxMailboxUid;
    MailboxUid *_draftsMailboxUid;
    MailboxUid *_sentMessagesMailboxUid;
    MailboxUid *_trashMailboxUid;
    MailboxUid *_archiveMailboxUid;
    MFLock *_cachedMailboxenLock;
    MFError *_lastConnectionError;
    MessageLibrary *_library;
    NSMutableDictionary *_currentChokedActions;
    NSString *_mailboxCachePath;
    struct __CFDictionary { } *_cachedMessageStores;
    MFLock *_cachedMessageStoresLock;
    int _cachedLibraryID;
    MFLock *_cachedLibraryIDLock;
}

@property BOOL generatesBulletins;
@property BOOL shouldArchive;

+ (void)addMailAccount:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (void)setMailAccounts:(id)arg1;
+ (void)removeOrphanedAccountData;
+ (id)existingAccountWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (void)resetMailboxTimers;
+ (void)updateAutoFetchSettings;
+ (id)accountContainingEmailAddress:(id)arg1;
+ (id)accountUsingHeadersFromMessage:(id)arg1;
+ (id)accountThatMessageIsFrom:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)addressesThatReceivedMessage:(id)arg1;
+ (id)accountWithPath:(id)arg1;
+ (void)setGlobalPathForAccounts:(id)arg1;
+ (id)defaultMailAccountForDeliveryExcludingRestricted;
+ (id)defaultDeliveryAccount;
+ (BOOL)isAnyAccountOffline;
+ (BOOL)isAnyAccountOnline;
+ (void)disconnectAllAccounts;
+ (void)connectAllAccounts;
+ (void)saveStateForAllAccounts;
+ (void)synchronouslyEmptyMailboxUidType:(int)arg1 inAccounts:(id)arg2;
+ (id)URLForInfo:(id)arg1;
+ (id)accountWithURLString:(id)arg1;
+ (id)mailboxUidFromActiveAccountsForURL:(id)arg1;
+ (void)updateEmailALiasesForActiveAccounts;
+ (BOOL)usernameIsEmailAddress;
+ (BOOL)getConfigurationFromServerForEmail:(id)arg1;
+ (void)setDataclassesConsideredActive:(id)arg1;
+ (void)reloadAccounts;
+ (void)_addAccountToSortedPaths:(id)arg1;
+ (id)existingDAMailAccountForDAAccount:(id)arg1;
+ (void)_removeLookAsideValuesNotInAccountList:(id)arg1;
+ (void)disableMailboxListingNotifications;
+ (id)_loadAllAccounts;
+ (void)_setupSortedPathsForAccounts:(id)arg1;
+ (void)_migrateUserInfoAddressPreferencesToFirstAccount;
+ (void)_postMailAccountsHaveChanged;
+ (void)_invalidateAccounts:(id)arg1 missingFromNewAccounts:(id)arg2;
+ (void)enableMailboxListingNotifications:(BOOL)arg1;
+ (id)mailAccounts;
+ (void)_registerPendingAccount:(id)arg1;
+ (void)setMailAccounts:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (void)_unregisterPendingAccount:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)activeAccounts;
+ (id)defaultPathForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id*)arg2 fullUserName:(id*)arg3 includingInactive:(BOOL)arg4;
+ (id)accountContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2 includingInactive:(BOOL)arg3;
+ (void)_setOutboxMailboxUid:(id)arg1;
+ (id)outboxMailboxUid;
+ (id)_accountWithPath:(id)arg1;
+ (id)newAccountWithPath:(id)arg1;
+ (id)defaultAccountDirectory;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)_defaultMailAccountForDeliveryIncludingRestricted:(BOOL)arg1;
+ (id)defaultMailAccountForDelivery;
+ (id)allMailboxUids;
+ (id)outboxMessageStore:(BOOL)arg1;
+ (void)removeMailAccount:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (void)_setOnlineStateOfAllAccountsTo:(BOOL)arg1;
+ (BOOL)mailboxListingNotificationAreEnabled;
+ (id)_accountForURL:(id)arg1;
+ (id)infoForURL:(id)arg1;
+ (id)standardAccountClass:(Class)arg1 valueForKey:(id)arg2;
+ (void)_removeAccountFromSortedPaths:(id)arg1;
+ (id)newAccountWithDictionary:(id)arg1;
+ (BOOL)haveAccountsBeenConfigured;
+ (BOOL)isPredefinedAccountType;
+ (void)saveAccounts:(id)arg1 usingKey:(id)arg2;
+ (void)saveAccountInfoToDefaults;
+ (id)existingMailAccountForUniqueID:(id)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (id)accountThatMessageIsFrom:(id)arg1;
+ (BOOL)canMoveMessagesFromAccount:(id)arg1 toAccount:(id)arg2;
+ (id)mailboxUidForFileSystemPath:(id)arg1 create:(BOOL)arg2;
+ (id)allEmailAddressesIncludingFullUserName:(BOOL)arg1 includeReceiveAliases:(BOOL)arg2;
+ (void)initialize;

- (BOOL)isValidAccountWithError:(id)arg1 accountBeingEdited:(id)arg2 userCanOverride:(BOOL*)arg3;
- (void)setShouldArchive:(BOOL)arg1;
- (BOOL)generatesBulletins;
- (void)setGeneratesBulletins:(BOOL)arg1;
- (id)deliveryAccountAlternates;
- (void)setDeliveryAccountAlternates:(id)arg1;
- (BOOL)canUseDeliveryAccount:(id)arg1;
- (void)setCanUseCarrierDeliveryFallback:(BOOL)arg1;
- (BOOL)canUseCarrierDeliveryFallback;
- (void)setReceiveEmailAliasAddresses:(id)arg1;
- (id)fromEmailAddresses;
- (id)lastEmailAliasesSyncDate;
- (void)setLastEmailAliasesSyncDate:(id)arg1;
- (id)deleteAccount;
- (BOOL)canFetch;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (void)fetchMailboxList;
- (BOOL)canAppendMessages;
- (BOOL)canBeSynchronized;
- (BOOL)isFetching;
- (void)newMailHasBeenReceived;
- (BOOL)shouldExpungeMessagesOnDelete;
- (id)transferDisabledMailboxUids;
- (void)setMailboxUid:(id)arg1 forMailboxType:(int)arg2;
- (void)setEmptyFrequency:(int)arg1 forMailboxType:(int)arg2;
- (id)displayNameForMailboxUid:(id)arg1;
- (BOOL)containsMailboxes;
- (BOOL)canCreateNewMailboxes;
- (BOOL)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (BOOL)moveMailbox:(id)arg1 intoParent:(id)arg2;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2;
- (BOOL)deleteMailbox:(id)arg1;
- (void)resetMailboxURLs;
- (void)postUserInfoHasChangedForMailboxUid:(id)arg1 userInfo:(id)arg2;
- (void)setConnectionError:(id)arg1;
- (id)connectionError;
- (BOOL)hasUnreadMail;
- (id)mailboxUidForURL:(id)arg1;
- (void)startListeningForNotifications;
- (void)transferNotificationSessionToAccount:(id)arg1;
- (void)systemDidWake;
- (void)systemWillSleep;
- (BOOL)canFetchMessagesByNumericRange;
- (BOOL)canForwardWithoutDownload;
- (BOOL)supportsRemoteAppend;
- (BOOL)supportsMailboxEditing;
- (id)displayUsername;
- (BOOL)archiveSentMessages;
- (BOOL)supportsMessageFlagging;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (BOOL)deleteInPlaceForAllMailboxes;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1;
- (id)meetingStorePersistentID;
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (BOOL)hasEnoughInformationForEasySetup;
- (BOOL)_canReceiveNewMailNotifications;
- (void)addUserFocusMailbox:(id)arg1;
- (void)removeUserFocusMailbox:(id)arg1;
- (id)pushedMailboxUids;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (void)setMailboxCachePath:(id)arg1;
- (void)_backgroundFetchCompleted;
- (BOOL)_shouldLogDeleteActivity;
- (id)URLForMessage:(id)arg1;
- (id)newMailboxWithParent:(id)arg1 name:(id)arg2;
- (id)_localMailboxNameForType:(int)arg1 usingDisplayName:(id)arg2;
- (BOOL)shouldFetchBodiesWhenMovingToTrash;
- (BOOL)shouldWipeLocalStorageOnRebuild;
- (id)iconString;
- (id)saveSentFolder;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (BOOL)secureMIMEEnabled;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id*)arg2;
- (id)tildeAbbreviatedPath;
- (void)accountDidLoad;
- (void)setFullUserName:(id)arg1;
- (BOOL)shouldAppearInMailSettings;
- (BOOL)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (BOOL)isAccountClassEquivalentTo:(id)arg1;
- (BOOL)isHostnameEquivalentTo:(id)arg1;
- (BOOL)isUsernameEquivalentTo:(id)arg1;
- (void)resetMailboxTimer;
- (id)uniqueIdForPersistentConnection;
- (id)receiveEmailAliasAddresses;
- (id)fullUserName;
- (id)emailAddressesAndAliases;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2;
- (void)resetSpecialMailboxes;
- (id)rootMailboxUid;
- (id)initWithLibrary:(id)arg1 properties:(id)arg2;
- (void)deliveryAccountWillBeRemoved:(id)arg1;
- (void)setupLibrary;
- (BOOL)_setPath:(id)arg1;
- (id)initWithLibrary:(id)arg1 path:(id)arg2;
- (BOOL)restrictedFromSendingExternally;
- (id)deliveryAccount;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (BOOL)_assignSpecialMailboxToAppropriateIvar:(id)arg1 forType:(int)arg2 delete:(BOOL)arg3;
- (id)allMailboxUids;
- (id)library;
- (void)_deleteHook;
- (void)_postMailAccountsHaveChangedIfNeeded;
- (void)_synchronouslyInvalidateAndDelete:(unsigned int)arg1;
- (void)_synchronouslyInvalidateAndDeleteWrapper:(id)arg1;
- (id)deleteAccountWithOptions:(unsigned int)arg1;
- (BOOL)_usesMailboxCache;
- (void)_writeMailboxCacheWithPrejudice:(BOOL)arg1;
- (id)_mailboxPathPrefix;
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;
- (void)emptyTrash;
- (void)_synchronizeMailboxListWithFileSystem;
- (id)_cachedSpecialMailboxOfType:(int)arg1;
- (id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2;
- (id)primaryMailboxUid;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (BOOL)_canEmptyMessagesFromMailboxUid:(id)arg1;
- (int)_emptyFrequencyForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_setEmptyFrequency:(int)arg1 forKey:(id)arg2;
- (id)firstEmailAddress;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned int)arg2;
- (id)_pathComponentForUidName:(id)arg1;
- (BOOL)_resetSpecialMailboxes;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (id)_uidNameForPathComponent:(id)arg1;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (BOOL)_deleteMailbox:(id)arg1;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_resetAllMailboxURLs:(BOOL)arg1;
- (Class)storeClassForMailbox:(id)arg1;
- (Class)storeClass;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 withOption:(int)arg3;
- (id)mailboxPathExtension;
- (id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)_URLScheme;
- (id)_infoForMatchingURL:(id)arg1;
- (id)_URLForInfo:(id)arg1;
- (id)mailboxUidForInfo:(id)arg1;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (BOOL)updateEmailAliases;
- (BOOL)supportsArchiving;
- (void)setDeliveryAccount:(id)arg1;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (BOOL)areAnyDataclassesConsideredActiveEnabled;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (BOOL)_cleanInboxDuplication:(id)arg1;
- (id)mailboxCachePath;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (BOOL)_loadMailboxListingIntoCache:(id)arg1 attributes:(unsigned int)arg2 children:(id)arg3 parent:(id)arg4;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)_backgroundFetchCompletedCount:(unsigned int)arg1;
- (id*)_specialMailboxIvarOfType:(int)arg1;
- (id)specialMailboxNameForType:(int)arg1;
- (void)_setSpecialMailboxName:(id)arg1 forType:(int)arg2;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;
- (BOOL)supportsAppend;
- (id)valueInAccountLookAsidePropertiesForKey:(id)arg1;
- (void)setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2;
- (void)_setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2 subKey:(id)arg3;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)setIsOffline:(BOOL)arg1;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (void)_setAccountProperties:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (int)libraryID;
- (void)setLibrary:(id)arg1;
- (BOOL)shouldArchive;
- (void)unregisterStore:(id)arg1 forUid:(id)arg2;
- (void)setUnreadCount:(unsigned int)arg1 forMailbox:(id)arg2;
- (id)storeForMailboxUid:(id)arg1;
- (id)mailboxUidOfType:(int)arg1 createIfNeeded:(BOOL)arg2;
- (BOOL)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(BOOL)arg4 unsuccessfulOnes:(id)arg5;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)URLString;
- (BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3;
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;
- (BOOL)deleteInPlaceForMailbox:(id)arg1;
- (BOOL)canArchiveForMailbox:(id)arg1;
- (int)archiveDestinationForMailbox:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)saveState;
- (void)setUsername:(id)arg1;
- (id)emailAddresses;
- (id)path;
- (void)invalidate;
- (void)setCachePolicy:(int)arg1;
- (int)cachePolicy;
- (id)displayName;
- (id)initWithProperties:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)setPath:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (void)stopListeningForNotifications;
- (id)description;
- (void)dealloc;

@end
