/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSString;

@interface NSFileWatcher : NSObject  {
    struct dispatch_queue_s { } *_queue;
    NSURL *_url;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _observer;

    BOOL _isWatching;
    struct dispatch_source_s { } *_eventSource;
    BOOL _isUnsettled;
    BOOL _didObserveAttributeChanging;
    BOOL _didObserveContentsChanging;
    BOOL _didObserveDeleting;
    BOOL _didObserveMoving;
    NSString *_lastObservedPath;
    BOOL _didResetURL;
}


- (void)watchItem;
- (void)itemWasDeleted;
- (void)itemContentsWasChanged;
- (void)itemAttributeWasChanged;
- (void)itemWasMovedToPath:(id)arg1;
- (void)startWithObserver:(id)arg1;
- (void)settle;
- (id)initWithQueue:(struct dispatch_queue_s { }*)arg1;
- (void)stop;
- (void)setURL:(id)arg1;
- (void)dealloc;

@end
