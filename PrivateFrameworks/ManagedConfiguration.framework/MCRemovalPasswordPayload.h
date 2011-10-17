/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload  {
    NSString *_removalPasscode;
}

@property(retain) NSString * removalPasscode;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)removalPasscode;
- (void)setRemovalPasscode:(id)arg1;
- (id)stubDictionary;
- (void)dealloc;

@end
