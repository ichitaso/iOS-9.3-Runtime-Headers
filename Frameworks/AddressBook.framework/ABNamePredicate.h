/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABNamePredicate : ABPredicate  {
    void *_addressBook;
    NSString *_name;
    void *_source;
    void *_group;
    NSString *_accountIdentifier;
    BOOL _showPersonLinks;
    BOOL _matchWholeWords;
    BOOL _matchNameOnly;
    struct __CFArray { } *_tokenizations;
    struct __CFArray { } *_tokenizationSortKeys;
}

@property void* source;
@property void* group;
@property BOOL matchNameOnly;
@property BOOL matchWholeWords;
@property BOOL showPersonLinks;
@property(copy) NSString * accountIdentifier;
@property void* addressBook;
@property(copy) NSString * name;


- (void)setAddressBook:(void*)arg1;
- (void*)addressBook;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (BOOL)matchNameOnly;
- (void)setMatchNameOnly:(BOOL)arg1;
- (BOOL)matchWholeWords;
- (void)setMatchWholeWords:(BOOL)arg1;
- (BOOL)showPersonLinks;
- (void)setShowPersonLinks:(BOOL)arg1;
- (struct __CFArray { }*)tokenizations;
- (void)_doBindingWithStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 bindingOffset:(int*)arg2;
- (id)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)predicateFormat;
- (void)setSource:(void*)arg1;
- (void*)source;
- (void*)group;
- (id)name;
- (BOOL)isValid;
- (void)setGroup:(void*)arg1;
- (void)setName:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)accountIdentifier;
- (void)setAccountIdentifier:(id)arg1;

@end
