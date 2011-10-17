/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString;

@interface SUScriptDialog : SUScriptObject  {
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    id _textFields;
    NSString *_title;
}

@property(retain) NSString * body;
@property(retain) id buttons;
@property(retain) NSNumber * cancelButtonIndex;
@property(retain) id textFields;
@property(retain) NSString * title;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (void)initialize;

- (void)setButtons:(id)arg1;
- (void)_show;
- (id)attributeKeys;
- (void)setBody:(id)arg1;
- (id)buttons;
- (void)setCancelButtonIndex:(id)arg1;
- (void)dismiss;
- (id)body;
- (id)title;
- (id)cancelButtonIndex;
- (void)show;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)showFromDOMElement:(id)arg1;
- (void)showSheet;
- (id)_nativeDialog;
- (void)_logSheetWarnings;
- (void)_dismiss;
- (id)textFields;
- (void)_showFromDOMElement:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setTextFields:(id)arg1;

@end
