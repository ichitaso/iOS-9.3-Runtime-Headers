/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSCoding, NSCopying> {
    SSOperationProgress *_operationProgress;
}

@property(readonly) int phaseType;
@property(readonly) long long progressValue;
@property(readonly) long long totalProgressValue;
@property(readonly) int progressUnits;
@property(readonly) double estimatedSecondsRemaining;
@property(readonly) float progressChangeRate;
@property(readonly) SSOperationProgress * operationProgress;


- (long long)totalProgressValue;
- (float)progressChangeRate;
- (int)progressUnits;
- (int)phaseType;
- (id)initWithOperationProgress:(id)arg1;
- (id)operationProgress;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (long long)progressValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (double)estimatedSecondsRemaining;

@end
