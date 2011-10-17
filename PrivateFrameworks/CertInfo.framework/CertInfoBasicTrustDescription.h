/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription> {
    struct __SecTrust { } *_trust;
    int _action;
}


- (id)_expirationDate;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 action:(int)arg2;
- (id)certificateIssuerSummaryAtIndex:(unsigned int)arg1;
- (id)certificateExpirationDateAtIndex:(unsigned int)arg1;
- (id)certificateSubjectSummaryAtIndex:(unsigned int)arg1;
- (id)summaryDescriptionItems;
- (BOOL)isTrusted;
- (id)summarySubtitle;
- (id)summaryTitle;
- (id)certificatePropertiesAtIndex:(unsigned int)arg1;
- (unsigned int)certificateCount;

@end
