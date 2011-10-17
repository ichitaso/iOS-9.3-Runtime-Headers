/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMMediaList, DOMStyleSheet, NSString, DOMNode;

@interface DOMStyleSheet : DOMObject  {
}

@property(copy,readonly) NSString * type;
@property BOOL disabled;
@property(retain,readonly) DOMNode * ownerNode;
@property(retain,readonly) DOMStyleSheet * parentStyleSheet;
@property(copy,readonly) NSString * href;
@property(copy,readonly) NSString * title;
@property(retain,readonly) DOMMediaList * media;


- (void)finalize;
- (id)ownerNode;
- (id)parentStyleSheet;
- (id)href;
- (id)media;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)disabled;
- (id)type;
- (id)title;
- (void)dealloc;

@end
