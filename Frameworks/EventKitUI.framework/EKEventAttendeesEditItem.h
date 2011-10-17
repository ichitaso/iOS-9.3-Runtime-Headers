/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, EKParticipant;

@interface EKEventAttendeesEditItem : EKEventEditItem  {
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
}


- (id)attendeesWithoutSelfOrganizer;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(int)arg1;
- (void)dealloc;

@end
