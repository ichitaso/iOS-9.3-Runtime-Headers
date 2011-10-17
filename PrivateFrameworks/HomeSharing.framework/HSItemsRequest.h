/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSItemsRequest : HSRequest  {
    BOOL _shouldParseResponse;
}

@property BOOL shouldParseResponse;

+ (id)requestWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;
+ (id)requestWithDatabaseID:(unsigned int)arg1;

- (void)setShouldParseResponse:(BOOL)arg1;
- (BOOL)shouldParseResponse;
- (id)initWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (id)initWithAction:(id)arg1;
- (id)canonicalResponseForResponse:(id)arg1;

@end
