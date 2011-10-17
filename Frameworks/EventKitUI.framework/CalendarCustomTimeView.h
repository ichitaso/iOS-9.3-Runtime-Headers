/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UIFont;

@interface CalendarCustomTimeView : UIView  {
    int _style;
    unsigned int _isAllDay : 1;
    unsigned int _showDates : 1;
    unsigned int _highlighted : 1;
    unsigned int _forceSingleLine : 1;
    unsigned int _startDesignator : 2;
    unsigned int _endDesignator : 2;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _startDate;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _endDate;
    NSString *_startTimeString;
    NSString *_endTimeString;
    NSString *_startDateString;
    NSString *_endDateString;
    UIFont *_timeFont;
    UIFont *_designatorFont;
    UIFont *_betweenFont;
    NSString *_betweenTimesString;
    NSString *_startDesignatorString;
    NSString *_endDesignatorString;
    float _startTimeX;
    float _startDateX;
    float _endTimeX;
    float _endDateX;
    float _startTimeDesignatorX;
    float _endTimeDesignatorX;
    float _betweenTimeX;
    float _firstLineWidth;
    float _secondLineWidth;
    float _fullWidth;
    float _fullHeight;
    float _yTextOffset;
}


- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_isTwoLinesHigh;
- (void)relayoutText;
- (id)_dateString:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (id)_timeString:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 use24Hr:(BOOL)arg2;
- (void)setShowDates:(BOOL)arg1;
- (int)_designatorForTime:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 use24Hr:(BOOL)arg2;
- (void)_rebuildStrings;
- (float)fullTextHeight;
- (void)setForceSingleLine:(BOOL)arg1;
- (BOOL)showDates;
- (float)fullTextWidth;
- (void)setStartDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2;
- (void)_localeChanged;
- (void)setIsAllDay:(BOOL)arg1;
- (void)dealloc;

@end
