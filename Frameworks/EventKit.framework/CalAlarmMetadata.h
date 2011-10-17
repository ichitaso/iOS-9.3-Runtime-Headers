/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSArray;

@interface CalAlarmMetadata : NSObject <NSCoding> {
    NSArray *_attach;
    NSArray *_attendee;
    NSString *_description;
    NSString *_summary;
}

@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property(retain) NSString * description;
@property(retain) NSString * summary;

+ (id)metadataWithData:(id)arg1;

- (void)applyToAlarm:(id)arg1;
- (id)initWithICSAlarm:(id)arg1;
- (void)setAttach:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setAttendee:(id)arg1;
- (id)attendee;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)dataRepresentation;
- (id)attach;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end
