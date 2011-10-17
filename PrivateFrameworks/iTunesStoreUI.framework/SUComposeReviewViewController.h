/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURatingAlertView, ISReview, SUComposeReviewView;

@interface SUComposeReviewViewController : SUViewController <SUComposeReviewViewDelegate, UIAlertViewDelegate> {
    SUComposeReviewView *_composeView;
    SURatingAlertView *_ratingAlert;
    ISReview *_review;
    int _state;
}


- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)init;
- (void)dealloc;
- (void)_setReviewByMergingWithReview:(id)arg1;
- (void)_fetchReviewInfo;
- (void)_submit;
- (void)_cancel;
- (id)copyReview;
- (void)composeReviewViewValidityChanged:(id)arg1;
- (void)setReview:(id)arg1;
- (id)copyScriptViewController;
- (void)operationFinished:(id)arg1;
- (void)applicationDidEnterBackground;

@end
