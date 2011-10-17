/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSRegularExpression, NSArray;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult  {
}

@property(readonly) NSRegularExpression * regularExpression;
@property(readonly) NSArray * rangeArray;


- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)rangeArray;
- (id)initWithRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 count:(unsigned int)arg2 regularExpression:(id)arg3;
- (id)regularExpression;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
