/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSMutableDictionary, NSString;

@interface ACAccountCredential : NSObject  {
    NSMutableDictionary *_credentialItems;
    NSString *_credentialType;
}

@property(copy) NSString * oauthToken;
@property(copy) NSString * oauthTokenSecret;
@property(copy) NSString * password;
@property(copy) NSString * credentialType;

+ (id)keysForType:(id)arg1;
+ (id)credentialWithPassword:(id)arg1;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;

- (id)keysForCredentialItems;
- (id)credentialItemForKey:(id)arg1;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (id)initWithPassword:(id)arg1;
- (void)setOauthTokenSecret:(id)arg1;
- (void)setOauthToken:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)credentialType;
- (id)oauthTokenSecret;
- (id)oauthToken;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;

@end
