/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation  {
    NSString *_playerID;
    NSString *_category;
    unsigned int _rank;
    long long _value;
    NSString *_formattedValue;
    NSDate *_date;
    unsigned long long _context;
}

@property(retain) NSString * playerID;
@property(retain) NSString * category;
@property unsigned int rank;
@property long long value;
@property(retain) NSString * formattedValue;
@property(retain) NSDate * date;
@property unsigned long long context;

+ (id)codedPropertyKeys;

- (id)formattedValue;
- (id)playerID;
- (void)setFormattedValue:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setPlayerID:(id)arg1;
- (unsigned int)rank;
- (void)setCategory:(id)arg1;
- (long long)value;
- (void)setValue:(long long)arg1;
- (unsigned long long)context;
- (void)setContext:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (id)category;
- (id)description;
- (void)dealloc;

@end
