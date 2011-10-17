/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarArrowButton : UIButton  {
    id _delegate;
    unsigned int _didRepeat : 1;
    double _lastArrowDown;
}


- (void)setDelegate:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_automationID;
- (id)initWithArrowType:(int)arg1;
- (int)arrowType;
- (void)_scheduleDownRepeat;
- (void)_notifyArrowDown;
- (void)_performDownRepeat;
- (void)_repeatCancelled;
- (void)_touchExitOrOutside;
- (void)dealloc;

@end
