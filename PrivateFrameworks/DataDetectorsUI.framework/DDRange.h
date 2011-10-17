/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class DOMNode;

@interface DDRange : NSObject  {
    DOMNode *_node;
    long _startOffset;
    long _endOffset;
}

@property(retain) DOMNode * node;
@property long startOffset;
@property long endOffset;

+ (id)rangeWithDOMRange:(id)arg1;

- (void)setStartOffset:(long)arg1;
- (void)setNode:(id)arg1;
- (long)endOffset;
- (id)node;
- (long)startOffset;
- (id)initWithDOMRange:(id)arg1;
- (void)setEndOffset:(long)arg1;
- (id)description;
- (void)dealloc;

@end
