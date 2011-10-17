/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSSet, NSString;

@interface EKSource : EKObject  {
}

@property(readonly) NSString * sourceIdentifier;
@property(readonly) int sourceType;
@property(readonly) NSString * title;
@property(readonly) NSSet * calendars;


- (id)externalID;
- (void)setDefaultAlarmOffset:(id)arg1;
- (id)defaultAlarmOffset;
- (id)_persistentItem;
- (id)calendars;
- (id)allCalendars;
- (id)constraints;
- (BOOL)commit:(id*)arg1;
- (id)sourceIdentifier;
- (BOOL)remove:(id*)arg1;
- (int)sourceType;
- (id)title;
- (BOOL)isEnabled;
- (id)description;
- (id)init;

@end
