/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMutableArray;

@interface VMUSymbolExtractor : NSObject  {
    NSMutableArray *_symbols;
    NSMutableArray *_sourceInfos;
}

+ (id)extractLazySymbolOwnerFromHeader:(id)arg1;
+ (unsigned int)extractSymbolOwnerFlagsFromHeader:(id)arg1;
+ (id)expandSourceInfos:(id)arg1 usingSymbols:(id)arg2;
+ (id)extractSymbolOwnerFromHeader:(id)arg1;

- (id)symbols;
- (id)sourceInfos;
- (id)init;
- (void)dealloc;

@end
