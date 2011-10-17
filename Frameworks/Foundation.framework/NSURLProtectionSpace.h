/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSCoding, NSCopying> {
    NSURLProtectionSpaceInternal *_internal;
}


- (struct __SecTrust { }*)serverTrust;
- (id)distinguishedNames;
- (BOOL)receivesCredentialSecurely;
- (id)realm;
- (id)initWithProxyHost:(id)arg1 port:(int)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)_internalInit;
- (struct _CFURLProtectionSpace { }*)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (id)protocol;
- (id)proxyType;
- (id)initWithHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (int)port;
- (id)authenticationMethod;
- (id)host;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isProxy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
