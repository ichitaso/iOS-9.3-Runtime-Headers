/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSURL, NSString;

@interface OADHyperlink : NSObject  {
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
    BOOL mDoEndSound;
    BOOL mIsVisited;
    BOOL mDoAddToHistory;
}

@property BOOL doAddToHistory;
@property BOOL isVisited;
@property BOOL doEndSound;


- (id)targetFrame;
- (id)invalidUrl;
- (BOOL)doAddToHistory;
- (BOOL)isVisited;
- (BOOL)doEndSound;
- (id)tooltip;
- (int)targetMode;
- (void)setTargetLocation:(id)arg1;
- (void)setTargetMode:(int)arg1;
- (void)setTargetFrame:(id)arg1;
- (void)setTooltip:(id)arg1;
- (void)setInvalidUrl:(id)arg1;
- (void)setDoEndSound:(BOOL)arg1;
- (void)setIsVisited:(BOOL)arg1;
- (void)setDoAddToHistory:(BOOL)arg1;
- (id)targetLocation;
- (void)setAction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)action;
- (id)init;
- (void)dealloc;

@end
