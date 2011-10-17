/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem  {
    CoreDAVLeafItem *_dtstamp;
    CalDAVCalendarServerActionItem *_action;
}

@property(retain) CalDAVCalendarServerActionItem * action;
@property(retain) CoreDAVLeafItem * dtstamp;


- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setDtstamp:(id)arg1;
- (id)dtstamp;
- (void)setAction:(id)arg1;
- (id)description;
- (id)action;
- (id)init;
- (void)dealloc;

@end
