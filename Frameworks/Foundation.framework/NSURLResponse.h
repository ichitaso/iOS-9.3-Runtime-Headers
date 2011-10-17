/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLResponseInternal;

@interface NSURLResponse : NSObject <NSCoding, NSCopying> {
    NSURLResponseInternal *_internal;
}

+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { }*)arg1;

- (id)_peerCertificateChain;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (BOOL)_mustRevalidate;
- (id)_lastModifiedDate;
- (id)_createdDate;
- (void)_setMIMEType:(id)arg1;
- (void)_setExpectedContentLength:(long long)arg1;
- (id)suggestedFilename;
- (long long)expectedContentLength;
- (id)textEncodingName;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(int)arg3 textEncodingName:(id)arg4;
- (struct _CFURLResponse { }*)_CFURLResponse;
- (id)MIMEType;
- (id)URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)_cacheTime;
- (id)allHeaderFields;
- (int)statusCode;
- (long long)maxExpectedContentLength;

@end
