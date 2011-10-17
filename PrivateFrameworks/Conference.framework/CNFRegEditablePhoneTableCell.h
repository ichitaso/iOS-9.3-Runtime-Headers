/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSString;

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell  {
    SEL _countryCodeSelector;
    NSString *_previousValue;
}


- (id)countryCode;
- (struct { id x1; unsigned int x2; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;

@end
