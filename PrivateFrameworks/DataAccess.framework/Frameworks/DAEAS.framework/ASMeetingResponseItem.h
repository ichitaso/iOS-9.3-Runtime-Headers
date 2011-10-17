/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASEventUID, NSString;

@interface ASMeetingResponseItem : NSObject  {
    NSString *_emailItemFolderId;
    NSString *_emailItemServerId;
    int _meetingResponse;
    ASEventUID *_eventUID;
    NSString *_calEventServerId;
    int _status;
    id _context;
}

@property(readonly) NSString * emailItemFolderId;
@property(readonly) NSString * emailItemServerId;
@property(readonly) int meetingResponse;
@property(readonly) ASEventUID * eventUID;
@property(retain) NSString * calEventServerId;
@property int status;
@property(retain) id context;


- (void)setStatus:(int)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (int)status;
- (id)description;
- (void)dealloc;
- (void)setCalEventServerId:(id)arg1;
- (id)calEventServerId;
- (id)eventUID;
- (int)meetingResponse;
- (id)emailItemServerId;
- (id)emailItemFolderId;
- (id)initWithEmailItemFolderId:(id)arg1 emailItemServerId:(id)arg2 meetingResponse:(int)arg3 eventUID:(id)arg4;

@end
