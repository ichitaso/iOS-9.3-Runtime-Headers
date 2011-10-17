/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAttendee : EKPersistentParticipant  {
}

@property int participantStatus;
@property int participantRole;
@property int participantType;
@property int pendingStatus;

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
+ (id)relations;

- (id)owner;
- (void)setParticipantType:(int)arg1;
- (id)initWithExternalID:(id)arg1 name:(id)arg2;
- (void)setPendingStatus:(int)arg1;
- (int)pendingStatus;
- (void)setParticipantRole:(int)arg1;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (int)participantRole;
- (int)participantType;
- (void)setParticipantStatus:(int)arg1;
- (int)participantStatus;
- (int)entityType;
- (void)setOwner:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
