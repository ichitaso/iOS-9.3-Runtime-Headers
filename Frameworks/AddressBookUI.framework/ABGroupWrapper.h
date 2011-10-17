/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, AccountsManager;

@interface ABGroupWrapper : NSObject  {
    void *_addressBook;
    NSString *_accountIdentifier;
    void *_source;
    void *_group;
    NSString *_cachedName;
    AccountsManager *_accountsManager;
}

@property(readonly) NSString * name;
@property(readonly) unsigned int numberOfContacts;
@property(readonly) void* sourceForNewRecords;
@property(readonly) BOOL showLinkedPeople;
@property(readonly) int sourceType;
@property(readonly) BOOL isEditable;
@property(readonly) NSString * _accountDescriptionBasedOnIdentifier;
@property(readonly) void* group;
@property(readonly) void* source;
@property(readonly) void* addressBook;
@property(readonly) NSString * accountIdentifier;
@property(retain) AccountsManager * accountsManager;

+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 excludingSearchableStores:(BOOL)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountsManager:(id)arg3 excludingSearchableStores:(BOOL)arg4 isSoleAccount:(BOOL)arg5;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountsManager:(id)arg3;
+ (id)newGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;

- (int)score;
- (void*)addressBook;
- (void*)source;
- (int)sourceType;
- (void*)group;
- (BOOL)isEditable;
- (id)name;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)accountIdentifier;
- (unsigned int)numberOfContacts;
- (void)setAccountsManager:(id)arg1;
- (int)compareToGroupWrapper:(id)arg1;
- (id)_accountDescriptionBasedOnIdentifier;
- (id)accountManager;
- (BOOL)isContainerWrapper;
- (id)accountsManager;
- (void*)sourceForNewRecords;
- (BOOL)isDirectoryWrapper;
- (BOOL)isGlobalWrapper;
- (BOOL)showLinkedPeople;
- (id)initWithAddressBook:(void*)arg1 accountIdentifier:(id)arg2 source:(void*)arg3 group:(void*)arg4;
- (id)copyDictionaryRepresentation;

@end
