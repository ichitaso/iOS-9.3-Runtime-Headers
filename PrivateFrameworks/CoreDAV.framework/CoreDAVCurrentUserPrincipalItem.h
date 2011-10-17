/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem  {
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) CoreDAVHrefItem * href;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;


- (void)setUnauthenticated:(id)arg1;
- (id)copyParseRules;
- (id)unauthenticated;
- (void)setHref:(id)arg1;
- (id)href;
- (id)description;
- (id)init;
- (void)dealloc;

@end
