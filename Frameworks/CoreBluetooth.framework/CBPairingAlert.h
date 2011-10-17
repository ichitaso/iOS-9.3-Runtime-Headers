/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class UIAlertView, UIButton, <CBPairingAlertDelegate>, UITextField, NSNumber;

@interface CBPairingAlert : NSObject  {
    UIAlertView *_alert;
    UIButton *_doneButton;
    UITextField *_passkeyField;
    NSNumber *_pairingType;
    <CBPairingAlertDelegate> *_delegate;
}

@property <CBPairingAlertDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (void)dismiss;
- (void)textDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)show;
- (id)delegate;
- (void)dealloc;
- (id)initWithPairingType:(id)arg1 andPasskey:(id)arg2;

@end
