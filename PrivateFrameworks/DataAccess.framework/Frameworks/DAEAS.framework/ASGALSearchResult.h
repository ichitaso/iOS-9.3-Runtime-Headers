/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray, NSString, NSDictionary, NSMutableArray;

@interface ASGALSearchResult : ASItem  {
    NSDictionary *_applicationData;
    NSString *_longID;
    NSMutableArray *_classes;
    NSMutableArray *_collectionIDs;
    NSString *_phone;
    NSString *_office;
    NSString *_title;
    NSString *_company;
    NSString *_alias;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_homePhone;
    NSString *_mobilePhone;
    NSString *_emailAddress;
}

@property(retain) NSString * longID;
@property(retain) NSArray * classes;
@property(retain) NSArray * collectionIDs;
@property(copy) NSString * phone;
@property(copy) NSString * office;
@property(copy) NSString * title;
@property(copy) NSString * company;
@property(copy) NSString * alias;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * homePhone;
@property(copy) NSString * mobilePhone;
@property(copy) NSString * emailAddress;

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)longID;
- (id)emailAddress;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setAlias:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)alias;
- (void)setEmailAddress:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)convertToDAContactSearchResultElement;
- (id)applicationData;
- (id)mobilePhone;
- (id)homePhone;
- (id)company;
- (id)office;
- (id)phone;
- (void)setMobilePhone:(id)arg1;
- (void)setHomePhone:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setOffice:(id)arg1;
- (void)setPhone:(id)arg1;
- (void)setCollectionIDs:(id)arg1;
- (id)collectionIDs;
- (void)setClasses:(id)arg1;
- (id)classes;
- (void)addCollectionID:(id)arg1;
- (void)addClass:(id)arg1;
- (void)setLongID:(id)arg1;
- (void)postProcessApplicationData;
- (void)setApplicationData:(id)arg1;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
