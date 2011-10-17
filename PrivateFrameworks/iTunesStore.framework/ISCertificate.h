/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISCertificate : NSObject  {
    struct __SecTrust { } *_trust;
}


- (void)_invalidate;
- (BOOL)isValid;
- (void)setCertificateData:(id)arg1;
- (BOOL)checkData:(id)arg1 againstAppleSignature:(id)arg2;
- (BOOL)checkData:(id)arg1 againstSignature:(id)arg2;
- (void)dealloc;

@end
