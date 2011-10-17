/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADRequestProperties, NSMutableArray, ADAdSpecification;

@interface ADAdBatchRequest : PBRequest  {
    ADRequestProperties *_requestProperties;
    ADAdSpecification *_specification;
    NSMutableArray *_requesterIdentifiers;
    BOOL _hasDefaultsLastUpdate;
    unsigned long long _defaultsLastUpdate;
}

@property(readonly) BOOL hasRequestProperties;
@property(retain) ADRequestProperties * requestProperties;
@property(readonly) BOOL hasSpecification;
@property(retain) ADAdSpecification * specification;
@property(retain) NSMutableArray * requesterIdentifiers;
@property BOOL hasDefaultsLastUpdate;
@property unsigned long long defaultsLastUpdate;


- (Class)responseClass;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)defaultsLastUpdate;
- (void)setHasDefaultsLastUpdate:(BOOL)arg1;
- (BOOL)hasDefaultsLastUpdate;
- (id)requesterIdentifiers;
- (id)specification;
- (unsigned int)requestTypeCode;
- (id)requesterIdentifierAtIndex:(unsigned int)arg1;
- (unsigned int)requesterIdentifiersCount;
- (BOOL)hasSpecification;
- (BOOL)hasRequestProperties;
- (void)writeTo:(id)arg1;
- (void)setDefaultsLastUpdate:(unsigned long long)arg1;
- (void)addRequesterIdentifier:(id)arg1;
- (void)setRequesterIdentifiers:(id)arg1;
- (void)setSpecification:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (id)requestProperties;
- (void)setRequestProperties:(id)arg1;

@end
