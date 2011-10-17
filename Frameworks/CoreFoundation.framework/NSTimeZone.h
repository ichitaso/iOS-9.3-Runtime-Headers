/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSTimeZone : NSObject <NSCopying, NSCoding> {
}

+ (id)defaultTimeZone;
+ (id)timeZoneForSecondsFromGMT:(int)arg1;
+ (id)localTimeZone;
+ (void)resetSystemTimeZone;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;
+ (id)timeZoneDataVersion;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (id)abbreviationDictionary;
+ (id)knownTimeZoneNames;
+ (void)setDefaultTimeZone:(id)arg1;
+ (id)systemTimeZone;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)ICSQuickTimeZoneNames;
+ (id)calendarTimeZone;
+ (id)gmt;

- (id)data;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextDaylightSavingTimeTransition;
- (double)daylightSavingTimeOffset;
- (BOOL)isDaylightSavingTime;
- (int)secondsFromGMT;
- (id)abbreviation;
- (BOOL)isEqualToTimeZone:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (BOOL)isNSTimeZone__;
- (unsigned long)_cfTypeID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ICSComputeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (void)setCityName:(id)arg1;
- (id)cityName;

@end
