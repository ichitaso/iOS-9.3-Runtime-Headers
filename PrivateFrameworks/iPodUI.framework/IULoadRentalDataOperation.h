/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IURentalData, SSRentalCheckoutRequest, NSLock, NSDictionary, NSRunLoop;

@interface IULoadRentalDataOperation : NSOperation <SSRequestDelegate> {
    BOOL _didCheckOutKeys;
    SSRentalCheckoutRequest *_existingCheckoutRequest;
    NSLock *_lock;
    int _reason;
    IURentalData *_rentalData;
    NSDictionary *_rentalInformation;
    NSRunLoop *_runLoop;
}

@property(readonly) int loadReason;
@property(readonly) IURentalData * rentalData;
@property(readonly) NSDictionary * rentalInformation;


- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (id)rentalInformation;
- (id)rentalData;
- (int)loadReason;
- (id)initWithRentalData:(id)arg1 checkoutRequest:(id)arg2;
- (id)initWithRentalData:(id)arg1;
- (void)_delayedStopRunLoop:(id)arg1;
- (id)_runLoop;
- (void)_startCheckoutRequest:(id)arg1;
- (void)_timer:(id)arg1;
- (void)_setRunLoop:(id)arg1;
- (BOOL)_didCheckOutKeys;
- (void)_runCheckoutRequest:(id)arg1;
- (id)_newRentalCheckoutRequest;
- (void)_setDidCheckOutKeys:(BOOL)arg1;
- (void)_setRentalInformation:(id)arg1;
- (BOOL)_checkOutRentalKeys;
- (id)_rentalInformationFromMedia;
- (void)_stopRunLoop;
- (id)initWithRentalData:(id)arg1 checkoutRequest:(id)arg2 reason:(int)arg3;
- (void)main;
- (void)cancel;
- (id)init;
- (void)dealloc;

@end
