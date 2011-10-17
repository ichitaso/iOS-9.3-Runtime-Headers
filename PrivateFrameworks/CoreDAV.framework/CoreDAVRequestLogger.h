/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVAccountInfoProvider>, NSArray;

@interface CoreDAVRequestLogger : NSObject  {
    <CoreDAVAccountInfoProvider> *_provider;
    NSArray *_responseHeadersSortDescriptors;
    int _snippetsLogged;
}

@property(retain) NSArray * responseHeadersSortDescriptors;


- (id)responseHeadersSortDescriptors;
- (id)_inflateRequestBody:(id)arg1;
- (void)setResponseHeadersSortDescriptors:(id)arg1;
- (void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(int)arg2;
- (void)logCoreDAVResponseSnippet:(id)arg1;
- (void)finishCoreDAVResponse;
- (void)logCoreDAVRequest:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (void)dealloc;

@end
