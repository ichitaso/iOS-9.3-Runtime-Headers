/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISReviewProvider : ISDataProvider <NSCopying> {
    BOOL _backgroundReview;
}

@property(getter=isBackgroundReview) BOOL backgroundReview;


- (void)setBackgroundReview:(BOOL)arg1;
- (BOOL)isBackgroundReview;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;

@end
